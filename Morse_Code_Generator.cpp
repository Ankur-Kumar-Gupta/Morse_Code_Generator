#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class MorseCodeConverter 
{
	protected:
    virtual bool isValidInput(const string& input) const 
	{
        // Override this method in derived classes to add specific validation rules
        return true;
    }

    string sanitizeInput(const string& input) const 
	{
        string sanitized = input;
        for (char& ch : sanitized) 
		{
            ch = toupper(ch);
        }
        return sanitized;
    }

    virtual string convertCharToMorse(char ch) const 
	{
        switch (ch) 
		{
            case 'A': return ".-";
            case 'B': return "-...";
            case 'C': return "-.-.";
            case 'D': return "-..";
            case 'E': return ".";
            case 'F': return "..-.";
            case 'G': return "--.";
            case 'H': return "....";
            case 'I': return "..";
            case 'J': return ".---";
            case 'K': return "-.-";
            case 'L': return ".-..";
            case 'M': return "--";
            case 'N': return "-.";
            case 'O': return "---";
            case 'P': return ".--.";
            case 'Q': return "--.-";
            case 'R': return ".-.";
            case 'S': return "...";
            case 'T': return "-";
            case 'U': return "..-";
            case 'V': return "...-";
            case 'W': return ".--";
            case 'X': return "-..-";
            case 'Y': return "-.--";
            case 'Z': return "--..";
            case '1': return ".----";
            case '2': return "..---";
            case '3': return "...--";
            case '4': return "....-";
            case '5': return ".....";
            case '6': return "-....";
            case '7': return "--...";
            case '8': return "---..";
            case '9': return "----.";
            case '0': return "-----";
            case '.': return ".-.-.-";
            case ',': return "--..--";
            case '!': return "-.-.--";
            case '@': return ".--.-.";
	        /*
			else if (msg[i] == '$')
	            cout<<"...-..-";
	        else if (msg[i] == '&')
	            cout<<".-...";
	        else if (msg[i] == '-')
	            cout<<"-....-";
	        else if (msg[i] == '_')
	            cout<<"..--.-";
	        else if (msg[i] == '=')
	            cout<<"-...-";
	        else if (msg[i] == '+')
	            cout<<".-.-.";
	        else if (msg[i] == ';')
	            cout<<"-.-.-.";
	        else if (msg[i] == ':')
	            cout<<"---...";
	        else if (msg[i] == '\'')
	            cout<<".----.";
	        else if (msg[i] == '"')
	            cout<<".-..-.";
	        else if (msg[i] == '/')
	            cout<<"-..-.";
	        else if (msg[i] == '?')
	            cout<<"..--..";
            // Add the remaining special characters...
            */
            default: return "";
        }
    }

	public:
    MorseCodeConverter() = default;

    void convertToMorse() 
	{
        while (true) {
            system("CLS");
            printLogo();

            cout << "\n \n ";
            string msg = getInput();

            string morse = "";
            for (char ch : msg) {
                morse += (ch == ' ') ? "    " : convertCharToMorse(ch) + " ";
            }

            cout << "\n \t \t Morse Code is : \t" << morse << endl;

            if (!askForRepeat()) {
                printClosingMessage();
                break;
            }
        }
    }

    virtual ~MorseCodeConverter() = default;

	protected:
    virtual void printLogo() const 
	{
        cout << "Put your logo here..." << endl;
    }

    virtual string getInput() const 
	{
        string input;
        while (true) 
		{
            cout << "\t \t Enter the message (use alphanumeric mostly): \t";
            getline(cin, input);
            if (isValidInput(input)) 
			{
                break;
            } 
			else 
			{
                cout << "\t \t Invalid input. Please try again." << endl;
            }
        }
        return sanitizeInput(input);
    }

    virtual bool askForRepeat() const 
	{
        while (true) 
		{
            cout << "\n \n \t \t Do you want to do it again (Yes/No): ";
            string answer;
            getline(cin, answer);
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "YES" || answer == "Y") 
			{
                return true;
            } 
			else if (answer == "NO" || answer == "N") 
			{
                return false;
            } 
			else 
			{
                cout << "\n \t \t Invalid input. Please enter 'Yes' or 'No'." << endl;
            }
        }
    }

    virtual void printClosingMessage() const 
	{
        cout << "\n \n \n \n \t \t \t \t \t \t Have a Nice Day !!!" << endl;
    }
};

class MorseCodeEnglishConverter : public MorseCodeConverter 
{
	protected:
    bool isValidInput(const string& input) const override 
	{
        // Perform specific validation for English characters
        for (char ch : input) 
		{
            if (!isalpha(ch) && ch != ' ') 
			{
                return false;
            }
        }
        return true;
    }

    string convertCharToMorse(char ch) const override 
	{
        // Override the base class method to handle English characters
        if (isalpha(ch)) 
		{
            return MorseCodeConverter::convertCharToMorse(toupper(ch));
        }
        return "";
    }

    void printLogo() const override 
    {
        system("CLS");
		cout<<"\n \n ";
		cout<<" \t \t ";cout<<"##     ##   # # #   # # # #    # # #   # # # #      # # # #   # # #   # # # #    # # # #  ";cout<<endl;
		cout<<" \t \t ";cout<<"# #   # #  #     #  #      #  #        #           #         #     #  #       #  #        ";cout<<endl;
		cout<<" \t \t ";cout<<"#  # #  #  #     #  #      #  #        #           #         #     #  #       #  #        ";cout<<endl;
	    cout<<" \t \t ";cout<<"#   #   #  #     #  # # # #    # # #   # # #       #         #     #  #       #  # # #    ";cout<<endl;
	   	cout<<" \t \t ";cout<<"#       #  #     #  #   #           #  #           #         #     #  #       #  #        ";cout<<endl;
	   	cout<<" \t \t ";cout<<"#       #  #     #  #     #         #  #           #         #     #  #       #  #        ";cout<<endl;
	   	cout<<" \t \t ";cout<<"#       #   # # #   #      #   # # #   # # # #      # # # #   # # #   # # # #    # # # #  ";cout<<endl;
	}
};

int main() 
{
    system("color 7c");
    MorseCodeEnglishConverter converter;
    converter.convertToMorse();
    return 0;
}	
