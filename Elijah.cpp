#include <iostream>
#include <string>
#include <vector>
#include "convert.h"

using namespace std;

int main()
{
    Converter *conv = new Converter();
    Tree *x = new Tree;
    stringLinkedList *b;
    string a[10] = {"Kevin","Elijah","Andrew","Elias","Flynn","Callahan","Staple","Ortiz","Calvin", "Stoehr"};
    b = conv->ConvertArrToLinkedList(a, 10, true);
    vector<string> vec;
    string input; // input is a string variable
    while(true) //Main loop for actually running the "movie store"
    {
        cout<<"======Main Menu======"<<endl;
        cout<<"1. Convert array to linked list"<<endl;
        cout<<"2. Convert linked list to array"<<endl;
        cout<<"3. Convert linked list to vector"<<endl;
        cout<<"4. Convert array to vector"<<endl;
        cout<<"5. Convert vector to array"<<endl;
        cout<<"6. Convert vector to linked list"<<endl;
        cout<<"7. Convert array to hash table"<<endl;
        cout<<"8. Convert hash table to array"<<endl;
        cout<<"9. Convert array to binary search tree"<<endl;
        cout<<"10. Convert binary search tree to array"<<endl;
        cout<<"11. Quit"<<endl;
        cin>>input;
        switch(stoi(input)){
        	case 1:
        	{
            		b = conv->ConvertArrToLinkedList(a, 10, false);
            		break;
        	}
        	case 2:
        	{
        		conv->ConvertLLToArray(b);
        		break;
        	}
        	case 3:
        	{
        	    conv->ConvertLLToVector(b);
        	    break;
        	}
        	case 4:
        	{
        	    vec = conv->arrayToVector(a, 10);
        	    break;
        	}
        	case 5:
        	{
        	    conv->vectorToArray(vec);
        	    break;
        	}
        	case 6:
        	{
        	    conv->vectorToLinkedList(vec);
        	    break;
        	}
        	case 7:
        	{
        	    conv->ArrayToHT(a, 10);
        	    break;
        	}
        	case 8:
        	{
        	    conv->HTToArray();
        	    break;
        	}
        	case 9:
        	{
        	    cout << "Array to Binary Search Tree(inorder): " << endl;
        	    for(int i = 0; i<10;i++)
        	        x = conv->ArrToBst(a, 10);
        	    conv->printNode(x);
        	    break;
        	}
        	case 10:
        	{
        	    cout<<"Binary Search Tree to Array: "<<endl;
        	    conv->BstToArr(x, 10);
        	    break;
        	}
        	case 11:
        	{
        	    cout<<"Goodbye!"<<endl;
        	    return 0;
        	}
        	default:
        	{
			cout<<"Please select a menu option."<<endl;
		}
		return 0;
    }
}
