# include <iostream>
# include <vector>
using namespace std;
struct smarket
{
    string name;
    int price, quantity, total;
}; smarket sm;
vector<smarket> ve;
int main(){
    int val;
    do
    {
        cout<<"...Select Option..."<<endl;
        cout<<"1. add item"<<endl;
        cout<<"2. Print bill"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"Enter choice: "; cin>> val;

        if (val==1)
        {system("cls");
            cout<<"Item: "; cin>>sm.name;
            cout<<"Price: ";cin>>sm.price;
            cout<<"Quantity: ";cin>>sm.quantity;
            ve.push_back(sm);
            cout<<sm.quantity<<"."<<sm.name<<" added"<<endl<<endl;
        }
        else if(val==2){ system("cls");
        int payable=0;
            cout<<"item\t price\t quantity\t total"<<endl;
            for (int i = 0; i < ve.size(); i++)
            {
                ve[i].total= ve[i].price * ve[i].quantity;
            cout<< ve[i].name<<"\t"<<ve[i].price<<"\t\t"<<ve[i].quantity<<"\t"
            <<ve[i].total<<endl<<endl; 
            payable=payable+ ve[i].total;
            }
            cout<<"..........................................."<<endl;
            cout<<"payable amount: "<<payable<<endl;
            
        }
        else if(val==0){
            system("cls");
            cout<<"exiting program"<<endl<<endl;
        }
        else{
            system("cls");
            cout << "Invalid Input";
        }
    } while (val!=0);
    
}
