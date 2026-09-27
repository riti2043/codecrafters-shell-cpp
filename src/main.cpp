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
  }
  else if(command.substr(0,5)=="echo"){
    std::cout<<"echo"<<command.substr(5)<<std::endl;
  }
  else
  std::cout<<command<<": command not found"<<std::endl;

 }
  
}
