/*students's full name 
lab3, striings and strings methods 
sep 8, 2025
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"\n----- example 1: strings indexing -----"<<endl;
    string first_name = "peter";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"the 1st character ="<<first_name.at(0)<<endl;

    cout<<"\n----- example 2: amount of charaters in the string -----"<<endl;
    int characters = first_name.length();
    cout<<"there is "<<characters<<" character/s in "<<first_name<<endl;

     cout<<"\n----- example 3: concatenate charater/s in a string -----"<<endl;
     string last_name = "pan";
     string username = "pp123";
     cout<<"concatenated word = "<<first_name + last_name + username<<endl;

     cout<<"\n----- example 4: substracting characters in a string -----"<<endl;
     string msg = "today is a beautiful day";
     //extract 5 characters from the 3rd character
        string subst_msg = msg.substr(2,5);
        cout<<"extracted characters = "<<subst_msg<<endl;

        cout<<"\n----- example 5: inserting characters in a string -----"<<endl;
        //insert the word "maybe"
        msg.insert(5," maybe");
        cout<<"after insert method = "<<msg<<endl;

        cout<<"\n----- example 6: inserting characters to the end of a string -----"<<endl;
        msg.append("--by prof. wu");
        cout<<"after append method = "<<msg<<endl;

        cout<<"\n----- example 7: replacing characters in a string -----"<<endl;   
        // replace 9 characters starting from index 11 with "wonderful"
        msg.replace(17, 9, "bad");
        cout<<"after replace method = "<<msg<<endl;

         cout<<"\n----- example 8: erasing characters in a string -----"<<endl;   
         //erase the word 'today' 
         msg.erase(0,6);
            cout<<"after erase method = "<<msg<<endl;

            cout<<"\n----- example 9: finding characters in a string -----"<<endl; 
            //Find method returns the index number of the first found
            //if the character was not found it returns -1
            //find the word 'prof'

            int position = msg.find("prof");
            cout<<"the index of prof = "<<position<<endl;

            cout<<"\n----- exersice -----"<<endl;

            string word = "";
            cout << "enter a word: ";
            cin >> word;
            int len = word.length();
            cout << "the word you entered is: " << word << endl;
            cout << "the 2nd character is: " << word[1] << endl;
            cout << "word has: " << len << " characters" << endl;

            // Replace 2 characters from the 3rd character with "-- $ --"
            string replaced_word = word;
            replaced_word.replace(2, 2, "-- $ --");
            cout << "replace word: " << replaced_word << endl;

            // Remove 3 characters from the end
            string removed_word = word;
            removed_word.erase(len - 3, 3);
            cout << "Remove end characters: " << removed_word << endl;


        

            



    return 0;

}