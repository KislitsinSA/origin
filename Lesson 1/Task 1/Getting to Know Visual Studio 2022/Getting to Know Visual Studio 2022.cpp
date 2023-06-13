

#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	  setlocale(LC_ALL, "Russian");
 
	  auto arrOneSize { 0 };
	  auto arrTwoSize { 0 };
 
	  //СОЗДАНИЕ ДВУХ МАССИВОВ, В СООТВЕТСТВИИ С ФАЙЛОМ IN.TXT
	  
	  ifstream infile("in.txt");
	  if (!infile.is_open())
	  {
		cout << "Нет файла in.txt" << std::endl;
		return 0;
	  }

	  infile >> arrOneSize;
	  int* arrOne = new int[arrOneSize];
	  for (int i = 0; i < arrOneSize; i++)
	  {
		  infile >> arrOne[i];
	  }
 
	  infile >> arrTwoSize;
	  int* arrTwo = new int[arrTwoSize];
	  for (int i = 0; i < arrTwoSize; i++)
	  {
		  infile >> arrTwo[i];
	  }

	  infile.close();
	  system( "notepad.exe in.txt" );

	  //ЗАПИСЬ ИЗМЕНЕННЫХ, В СООТВЕТСВИИ С ЗАДАНИЕМ, МАССИВОВ В ФАЙЛ OUT.TXT

	  ofstream outfile("out.txt");
	  if (!outfile.is_open())
	  {
		cout << "Нет файла out.txt" << std::endl;
		return 0;
	  }
	  outfile << arrTwoSize << "\n" << arrTwo[arrTwoSize - 1] << " ";
	  for (int i = 0; i < arrTwoSize - 1; i++)
	  {
		  outfile << arrTwo[i] << " ";
	  }

	  outfile << "\n" << arrOneSize << "\n";
	  for (int i = 1; i < arrOneSize; i++)
	  {
		  outfile << arrOne[i] << " ";
	  }
	  outfile << arrOne[0] << "\n";

	  outfile.close();
	  system( "notepad.exe out.txt" );

	  delete[] arrOne, arrTwo;

 return 0;
}

