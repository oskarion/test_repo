#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cstdlib>
using namespace std;
/*
std::string GetMacAdress() {
  std::vector<char, 17> buffer;
  std::string result;
  std::string adress_path = "cat /sys/class/net/enp0s3/address";
  const char *command1 = adress_path.c_str();
  FILE* pipe = popen(command1, "r");
   if (!pipe)
    {
        std::cerr << "Couldn't start command." << std::endl;
        return 0;
    }
    while (fgets(buffer.data(), 128, pipe) != NULL) {
        result.push_back(buffer.data());
    }
    auto returnCode = pclose(pipe);
  //auto c = popen(command1, "r");
    return result;
}

int main ()
{
    auto mac = GetMacAdress();
    std::cout<<mac<<std::endl;
    return 0;
}
*/
#include <fstream>

/*
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    std::string sum= "";
    int x;
    ifstream inFile;
    
    inFile.open("/sys/class/net/enp0s3/address");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while (inFile >> x) {
        sum = sum + x;
    }
inFile.close();
cout << "Sum = " << sum << endl; 
return 0;
}
#include <iostream>

int main()
{
    std::string s; //string
    std::fstream f; //file stream
    f.open("/sys/class/net/enp0s3/address"); //open your word list
    std::getline(f, s); //get line from f (your word list) and put it in s (the string)
    std::cout << s << "\n"; //output string
    return 0;
}
#include <iostream>
#include <fstream>

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream;

int main()
{
    string out ="";
    string filename("/sys/class/net/enp0s3/address");
    int number;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (input_file >> number) {
        out += to_string(number);
    }
    input_file.close();
    cout <<out<< endl;

    return EXIT_SUCCESS;
}
#include <iostream>
#include <fstream>

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream;

std::string GetMac() {
    string line;
    ifstream myfile;
    myfile.open("/sys/class/net/enp0s3/address");

   if(!myfile.is_open()) {
      perror("Error open");
      exit(EXIT_FAILURE);
   }
    string out = getline(myfile, line);
    myfile.close();

    return out;
}
*/
#include <iostream>
#include <fstream>

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream;
#include <fstream>

string GetMac() { 
std::ifstream filein("/sys/class/net/enp0s3/address");
//filein.exceptions(filein.failbit);
std::string mac_address;
if(filein) {
    std::getline(filein, mac_address);
    return mac_address;
} else {
    auto read_error = "Failed to open file";
    return read_error;
}
} 


int main()
{   
  
   auto dupa = GetMac();
   cout<< dupa;
    return 0;
}

