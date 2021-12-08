#include<iostream>
using namespace std;

class Product{

    string name;
    string brandName;
    int price;

    public:

    Product();
    Product(string name, string brandName, int price);
    void showProductDetails();

    bool operator>(Product &product){
        if(price > product.price){
            return true;
        }else{
            return false;
        }
    }


};

    Product::Product(): name("Ultraboost"), brandName("Adidas"), price(8000) {

    }

    Product::Product(string name, string brandName, int price): name(name), brandName(brandName), price(price){

    }
    void Product::showProductDetails(){
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<name<<" "<<brandName<<" "<<price<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    }

    void swap(Product& num1, Product& num2){ // Pass data as reference

        Product temp;
        temp = num1;
        num1 = num2;
        num2 = temp; 
    }

    void bubbleSort(Product products[], int size){

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1; j++){
            if(products[j] > products[j+1]){
                swap(products[j], products[j+1]);
            }
        }
    }

}

int main(){

    Product p1;
    Product p2("Ultraboost 21X", "Adidas", 12000);
    Product p3("Ultraboost 21X Parley", "Adidas", 20000);
    Product p4("Hover 4.0", "Under Armour", 11000);
    Product p5("Hover 2.0", "Under Armour", 7000);

    Product products[] = {p1, p2, p3, p4, p5};

    cout<<"Default List of Product Objects:\n";
    for(int idx=0;idx<5;idx++){
        products[idx].showProductDetails();
    }

    bubbleSort(products, 5);

    cout<<"Sorted Low to High List of Product Objects:\n";
    for(int idx=0;idx<5;idx++){
        products[idx].showProductDetails();
    }

    // if(p1 > p2){ // p1.operator>(p2);
    //     cout<<"Price of p1 is greater"<<endl;
    // }else{
    //     cout<<"Price of p2 is greater"<<endl;
    // }

    return 0;
}

// Assignment: Implement High to Low :)