#include <iostream>


// Declaring all function prior to defination

void main_menu();
void decrypt();
void encrypt();




//  Function which prints the banner

void banner()
{
  system("clear");
  std::cout << "\033[1;36m\n\n";
  std::cout << "\033[1;36m\t                  |''||''|     |\n";
  std::cout << "\033[1;36m\t                     ||       |||\n";
  std::cout << "\033[1;36m\t                     ||      |  ||\n";
  std::cout << "\033[1;36m\t                     ||     .''''|.\n";
  std::cout << "\033[1;36m\t                    .||.   .|.  .||.\n\n";
  std::cout << "\033[1;36m\t\t\t\t                    By Prashanth \033[0m\n\n\n\n\n\n";
  main_menu();
  return;
}



// Function which prints the menu

void main_menu()
{
  char option;
  std::cout << "\033[1;31m\tWhat You Wanna Do: ?\033[0m\n\n\n";
  std::cout << "\033[1;36m\t        1) Encrypt a message\n";
  std::cout << "\033[1;36m\t        2) Decrypt a message\033[0m\n\n\t\t";
  std::cin >> option;
  if (option == '1')
    encrypt();
  else if (option == '2')
    decrypt();
  else
    std::cout << "\033[1;31m\tERROR INVAILD OPTION\033[0m\n";
  return;
}



//The function which ENCRYPTS strings

void encrypt()
{
  std::string toencrypt;
  std::cout << "\n\n\033[1;36m\tEnter Your Message to be Encrypted:  \033[0m";
  std::getline(std::cin >> std::ws, toencrypt);
  std::cout << '\n' << '\n'<<  std::endl;
  int key;
  std::cout << "\033[1;36m\tEnter Your Key to be Encrypt the message:  \033[0m";
  std::cin >> key;
  std::cout << '\n' << '\n'<<  std::endl;
  for(int a = 0; a < toencrypt.length(); a++)
    toencrypt[a] += (key % 26);
  std::cout << "\033[1;31m\tYour Cipher Text is: \033[0m" << toencrypt << "\n\n";
  return;
}




//The function which DECRYPTS strings

void decrypt()
{
  std::string todecrypt;
  std::cout << "\n\n\033[1;36m\tEnter Your Message to be Decrypted:  \033[0m";
  std::getline(std::cin >> std::ws, todecrypt);
  std::cout << '\n' << '\n'<<  std::endl;
  int key;
  std::cout << "\033[1;36m\tEnter Your Key to be Decrypt the message:  \033[0m";
  std::cin >> key;
  std::cout << '\n' << '\n'<<  std::endl;
  for(int a = 0; a < todecrypt.length(); a++)
    todecrypt[a] -= (key % 26);
  std::cout << "\033[1;31m\tYour Plain Text is: \033[0m" << todecrypt << "\n\n";
  return;
}



//Main Function

int main()
{
  banner();
  return 0;
}
