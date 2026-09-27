#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
   std::string command;
  // TODO: Uncomment the code below to pass the first stage
  while(true)
 { 
  std::cout << "$ ";
  std::getline(std::cin,command);
    if(command=="exit"){
    break;
  }t
  if(command=="echo"){
    std::cout<<"echo";
    std::string message;
    std::cout<<"echo"<<message<<std::endl;
  }
  std::cout<<command<<": command not found"<<std::endl;

 }
  
}
