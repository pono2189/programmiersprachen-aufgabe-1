# include <iostream>
# include <string>

double mile_to_kilometer(double mile){
    double km; 
    km = mile * 1.60934; 
    return km; 
    
}

int main (){
    std::cout << " Distance in Miles: ";
    double m = 0; 
    std::cin >> m;
    double result = mile_to_kilometer(m);
    std::cout << " Distance in kilometres: " << result << " \n";
    
    return 0; 

}