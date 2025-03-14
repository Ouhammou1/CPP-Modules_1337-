
#include <iostream>


class Car
{
private:

public:
    void start();
    void stop();
    void    accelerate();
    void    setSpeed(int speed);
    Car();
    ~Car();
};

Car::Car(/* args */)
{
}

Car::~Car()
{
}
void    Car::setSpeed(int speed)
{
    std::cout << "Car speed set to " << speed << " km/h\n";
}

void Car::start()
{
        std::cout << "Car is starting... " <<  std::endl;
}
void Car::accelerate()
{
        std::cout << "Car is accelerating... " <<  std::endl;
}
void Car::stop()
{
        std::cout << "Car is stoping... " <<  std::endl;
}
int main(int ac , char **av)
{

    Car car;
    std::cout  << "Enter choice (1 = start, 2 = stop, 3 = accelerate):" << std::endl;
    std::cout  << "Enter choice (4 = number  of the speed):" << std::endl;
    std::string input ;
    std::cin >> input;

    void (Car::*ptr[])() = {&Car::start , &Car::stop , &Car::accelerate };
    void (Car::*ptrSpeed)(int) =  &Car::setSpeed;
    if(input =="1")
        (car.*ptr[0])();
    if(input =="2")
        (car.*ptr[1])();
    if(input =="3")
        (car.*ptr[2])();
    if(input == "4")
    {

        (car.*ptrSpeed)(50);
    }
    else
    {
        std::cout <<  "Invalid Input !" << std::endl;
        return 0;
    }
}




// #include  <iostream>
// #include <string>

// class OK
// {
// private:
// public:
//     OK();
//     ~OK();

//     void display();
//     int add(int a , int b );
// };
// OK::OK()
// {
// }
// OK::~OK()
// {
// }
// void    OK::display()
// {
//     std::cout << "Hello from MyClass::display()!" << std::endl;
// }
// int     OK::add(int a , int b )
// {
//     return a + b;
// }

// int main()
// {
//     void    (OK::*ptr)() = &OK::display;
//     int    (OK::*ptr1)(int , int) = &OK::add;


//     OK obj;

//     (obj.*ptr)();
//     int result = (obj.*ptr1)(8, 3);
//     std::cout <<  "  result = " << result << std::endl;

//     // (obj.*ptr)();
// }







// use std::ios::in(Read Mode)
// find, erase, insert
// int main(int ac ,  char **av)
// {

// 	std::cout << "short " << sizeof(short) << std::endl;
// 	std::cout << "int " << sizeof(int) << std::endl;
// 	std::cout << "long " << sizeof(long) << std::endl;
// 	std::cout << "std::string " << sizeof(std::string) << std::endl;
// 	std::cout << "double " << sizeof(double) << std::endl;


// 	return 0;
// 	std::fstream  file("file1.txt",std::ios::app |  std::ios::out | std::ios::in  );

// 	if(!file.is_open())
// 	{
// 		std::cerr << "Error opening file ! Creating a new file ..." << std::endl;
// 		file.open("file.txt" , std::ios::out );
// 		if(file.is_open())
// 		{
// 			std::cerr << "Failed to create file !" << std::endl;
// 			return 1;
// 		}
// 	}
// 		std::string input ;

// 		std::cout << "Enter test (type 'exit' to stop )\n";
// 		while (true)
// 		{
// 			std::getline(std::cin , input);
// 			if(input == "q" || std::cin.eof())
// 				break;
// 			file << input << std::endl;
// 		}
// 		std::cout << " If u want to read file line by line type 'OK' else 'KO' !" << std::endl;
// 		std::string input1 ;
// 		std::getline(std::cin , input1);

// 		if(input1 == "OK")
// 		{
// 			file.clear();
// 			file.seekg(0 ,std::ios::beg );

// 			if (!file.is_open()) {
//             std::cerr << "File is not open for reading!" << std::endl;
//             return 1;
//         }

// 			std::string line;
// 			while (std::getline(file , line))
// 			{
// 				std::cout << line << std::endl;
// 			}
// 		}
		
// 		file.close();

// 	return 0;
// }



// #include <iostream>
// #include <string>

// int main() {
//     std::string ptr = "Hello, world!";
// 	std::string strOne = "OUHAMMOU";
    
// 	size_t pos = ptr.find("world");
// 	size_t n = 1337;

// 	std::string& str =  ptr.insert(pos , n, '4');
// 	std::cout << str << std::endl;

// str = "+++++++++++";

// 	std::cout << str << std::endl;
// 	std::cout << str << std::endl;

//     return 0;
// }
