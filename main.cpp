#include <iostream>
#include <fstream>

using namespace std;

int lenArr[10];
int result_maxLen = 0, result_offset1, result_offset2;
string result_file1, result_file2;

// Function for reading the bytes of file into the buffer
char *readFile(int idx)
{
  idx += 1;
  string fileIdx = to_string(idx);
  string filename = "sample." + fileIdx;

  // input file stream for reading info from files
  std::ifstream is(filename, std::ifstream::binary);

  if (!is)
  {
    std::cout << " Cannot open the file " << filename << endl;
    return nullptr;
  }
  // get length of file:
  is.seekg(0, is.end);
  int length = is.tellg();
  lenArr[idx - 1] = length;
  is.seekg(0, is.beg);

  char *buffer = new char[length];

  std::cout << "Reading " << length << " characters from " << filename << " ... ";
  // read data as a block:

  is.read(buffer, length);

  if (is)
    std::cout << " Successfully reading all characters." << std::endl;
  else
    std::cout << "Error: Only " << is.gcount() << " was read" << std::endl;
  is.close();

  return buffer;
}

// Longest common substring
void LCS(char *X, char *Y, int m, int n, string filename1, string filename2)
{
  // std::cout << "m = " << m << std::endl;
  // std::cout << "n = " << n << std::endl;
  m += 1;
  n += 1;
  int maxLen = 0;
  int maxLoc[2];

  // Define table c[i,j] to be the length of an LCS of the substrings Xi and Yj
  // Dynamically allocate 2D array by using a single pointer
  int *c_table = (int *)malloc((m) * (n) * sizeof(int));

  // Initialize boundary case
  for (int i = 1; i < m; i++)
  {
    *(c_table + i * n + 0) = 0;
  }
  // Initialize boundary case
  for (int j = 0; j < n; j++)
  {
    *(c_table + 0 * n + j) = 0;
  }

  // Main loop
  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      // If two charaters are identical
      if (X[i - 1] == Y[j - 1])
      {
        // string length at current location = string length from dignal location + 1 
        *(c_table + i * n + j) = *(c_table + (i - 1) * n + (j - 1)) + 1;
        // update the max length of common substring
        if (*(c_table + i * n + j) > maxLen)
        {
          maxLen = *(c_table + i * n + j);
          maxLoc[0] = i, maxLoc[1] = j;
        }
      }
      else
      { // If two charaters are not identical, length of common substring = 0
        *(c_table + i * n + j) = 0;
      }
    }
  }
  // cout << " free c_table" << endl;
  free(c_table);

  cout << "Length of longest common substring between " << filename1 << " and " << filename2 <<  " is: " << maxLen << endl;
  cout << "Offset = " << (maxLoc[0] - maxLen) << " in " << filename1 << endl;
  cout << "Offset = " << (maxLoc[1] - maxLen) << " in " << filename2 << endl << endl;

  // Update the global variables (results)
  if (maxLen >= result_maxLen)
  {
    result_maxLen = maxLen;
    result_file1 = filename1;
    result_file2 = filename2;
    result_offset1 = (maxLoc[0] - maxLen);
    result_offset2 = (maxLoc[1] - maxLen);
  }

}

int main()
{
  // buffer for info from 10 files
  char *char_ptr_arr[10];

  // Reading files into buffer
  for (int i = 0; i < 10; i++)
  {
    // cout << " i = " << i << endl;
    char_ptr_arr[i] = readFile(i);
    if (!char_ptr_arr[i]) {
      cout << " Error in reading " << i << "th file" << endl; 
    }
  }

  cout << endl;
  // LCS for each pair of files
  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      // cout << " i = " << i << " j = " << j << endl;
      int idx1 = i + 1;
      int idx2 = j + 1;
      string fileIdx1 = to_string(idx1);
      string filename1 = "sample." + fileIdx1;
      string fileIdx2 = to_string(idx2);
      string filename2 = "sample." + fileIdx2;

      LCS(char_ptr_arr[i], char_ptr_arr[j], lenArr[i], lenArr[j], filename1, filename2);
    }
  }

  for (int i = 0; i < 10; i++)
  {
    // deallocate memory;
    delete char_ptr_arr[i];
  }

  // Print result
  cout << endl;
  cout << " 1. The length of the longest strand of bytes is " << result_maxLen << endl;
  cout << " 2. This strand is identical between " << result_file1 << " and " << result_file2 << endl;
  cout << " 3. The corresponding offsets are " << result_offset1 << " and " << result_offset2 << endl;

  // // Validation
  // std::cout <<  "Validation:" << endl;

  // std::cout <<  "sample.2, byte at result_offset1-1" << endl;
  // std::cout << std::bitset<8>(char_ptr_arr[1][result_offset1-1]) << " " << endl;

  // std::cout <<  "sample.3, byte at result_offset2-1" << endl;
  // std::cout << std::bitset<8>(char_ptr_arr[2][result_offset2-1])  << endl;

  // std::cout <<  "sample.2, byte at result_offset1" << endl;
  // std::cout << std::bitset<8>(char_ptr_arr[1][result_offset1]) << " ";
  // std::cout << char_ptr_arr[1][result_offset1] << " " << endl;

  // std::cout <<  "sample.3, byte at result_offset2" << endl;
  // std::cout << std::bitset<8>(char_ptr_arr[2][result_offset2]) << " ";
  // std::cout << char_ptr_arr[2][result_offset2] << " " << endl;

  // std::cout <<  "sample.2, byte at result_offset1+maxLen-1" << endl;
  // std::cout << std::bitset<8>(char_ptr_arr[1][result_offset1+result_maxLen-1]) << " ";
  // std::cout << char_ptr_arr[1][result_offset1+result_maxLen-1] << " " << endl;

  // std::cout <<  "sample.3, byte at result_offset2+maxLen-1" << endl;
  // std::cout << std::bitset<8>(char_ptr_arr[2][result_offset2+result_maxLen-1]) << " ";
  // std::cout << char_ptr_arr[2][result_offset2+result_maxLen-1] << " " << endl;

  return 0;
}
