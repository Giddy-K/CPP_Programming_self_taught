#include <iostream>


int main (){
    /*
    //Braced initializer
    //Variable may contain random garbage value . WARNING
    int elephant_count;

    int lion_count{};

    int dog_count {10}; //initialize to 10

    int cat_count {15};

    //can use expression as initialixer
    int domesticated_animals { dog_count + cat_count };

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << cat_count << std::endl;
    std::cout << domesticated_animals << std::endl; 
    */

    //Braced initialization
    //int new_number{doesnt_exist};

    //int narrowing_conversion {2.9};

    /*
    //Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count+orange_count);
    //Information lost. This is less safe than braced initialization
    int narrowing_conversion_functional (2.9);


    std::cout<<"Apple count: "<<apple_count<<std::endl;
    std::cout<<"Orange count: "<<orange_count<<std::endl;
    std::cout<<"Fruit count: "<<fruit_count<<std::endl;
    std::cout<<"Narrowing conversion functional: "<< narrowing_conversion_functional <<std::endl;
    */

   //Assignment_Initialization

   int bike_count = 2;
   int truck_count = 7;
   int vehicle_count = bike_count + truck_count;
   int narrowing_conversion_functional = 2.9;

   
   std::cout<<"Vehicle Count: "<<vehicle_count<<std::endl;
   std::cout << "Truck count : " << truck_count << std::endl;
   std::cout << "Bikey count : " << bike_count << std::endl;
   std::cout<<"Narrowing Conversion Functional: "<<narrowing_conversion_functional<<std::endl;
   
    //Check the size with sizeof
    std::cout << "Size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of truck_count : " << sizeof(truck_count) << std::endl;
    
    return 0;
}