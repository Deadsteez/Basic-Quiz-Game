#include <stdio.h>
#include <windows.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void displayscore()
{
    char name[20];
    float s;
    FILE *f;
    system("cls");
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", &name, &s);
    printf("\n\n\t\t ");
    printf("\n\n\t\t %s has secured the Highest Score %.2f", name, s);
    printf("\n\n\t\t ");
    fclose(f);
    getch();
}


void help()
{
    system("cls");

    printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
    printf("\n\n\tknowledge questions and the right answer is to be chosen among");
    printf("\n\n\tthe four options provided. Your score will be calculated at the");
    printf("\n\n\tend. Remember that the more quicker you give answer the more");
    printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
    printf("\n\n\tat the end and displayed. If you secure highest score, your score");
    printf("\n\n\twill be recorded. So BEST OF LUCK.");
}
void writescore(float score, char plnm[20])
{
    float sc;
    char nm[20];
    FILE *f;
 system("cls");
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", &nm, &sc);
    if (score >= sc)
    {
        sc = score;
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", plnm, sc);
        fclose(f);
    }
}
int main()
{
    int countq, countr;
    int r, i;
    int pa;
    int nq[6];
    int w;
    float score;
    char choice;
    char playername[20];
    time_t initialtime, finaltime;
    system("cls");
// randomize();
mainhome:
    system("cls");
    puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n");
    puts("\n\t\t-------------------------------");
    puts("\n\t\t Enter 'S' to start game       ");
    puts("\n\t\t Enter 'V' to view high score  ");
    puts("\n\t\t Enter 'H' for help            ");
    puts("\n\t\t Enter 'Q' to quit             ");
    printf("\n\t\t-------------------------------\n\n\t\t  ");
    choice = toupper(getch());
    if (choice == 'V')
    {
        displayscore();
        goto mainhome;
    }
    else if (choice == 'Q')
        exit(1);
    else if (choice == 'H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\t\t\tEnter your name...");
        printf("\n\t\t\t(only one word)\n\n\t\t\t");
        gets(playername);

    home:
        system("cls");
        initialtime = time(NULL);
        countq = countr = 0;
        i = 1;
    start:
        srand(time(NULL));
        r = rand() % 23 + 1;
        nq[i] = r;
        for (w = 0; w < i; w++)
            if (nq[w] == r)
                goto start;

switch (r)
        {
        case 1:
            printf("\n\nWhich country is both in Europe and Asia?");
            printf("\n\nA.Turkey\tB.Russia\n\nC.Kazhakstan\tD.Azerbaijan\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Turkey");
                break;
            }

case 2:
            printf("\n\nWhich river is the longest in the world?");
            printf("\n\nA.Amazon\tB.Nile\n\nC.Yangtze\tD.Mississipi\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Nile");
                break;
            }

case 3:
            printf("\n\nWhich mountain range separates Europe from Asia?");
            printf("\n\nA.Andes\tB.Himalayas\n\nC.Alps\tD.Ural Mountains\n\n");
            countq++;
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Ural Mountains");
                break;
            }

case 4:
            printf("\n\nWhich Indian mountain pass, often referred to as the 'Gateway to Ladakh' is one of the highest motorable passes in the world?");
            printf("\n\nA.Nathu La Pass\tB.Rohtang Pass\n\nC.Zoji La Pass\tD.Khardung La Pass\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Nathu La Pass");
                break;
            }

case 5:
            printf("\n\nThe ongoing conflict between Russia and Ukraine began in 2014 when Russia annexed which region of Ukraine?");
            printf("\n\nA.Donetsk\tB.Crimea\n\nC.Luhansk\tD.Odessa\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Crimea");
                break;
            }

case 6:
            printf("\n\nWhich currency has the lowest value?");
            printf("\n\nA.Vietnamese Dong\tB.Indonesian Rupiah \n\nC.Iraqi Dinar\tD.Iranian Rial\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Iraqi Dinar");
                break;
            }

case 7:
            printf("\n\nWhat is the largest desert in the world by area?");
            printf("\n\nA.Sahara Desert\tB.Gobi Desert\n\nC.Antarctic Desert\tD.Arabian Desert\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Antarctic Desert");
                break;
            }

case 8:
            printf("\n\nWhat is the name of the nearest star to Earth?");
            printf("\n\nA.Sirius\tB.Alpha Centauri\n\nC.Betelgeuse\tD.Proxima Centauri\n\n");
            countq++;
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Proxima Centauri");
                break;
            }

case 9:
            printf("\n\nWhat is the deepest known point in Earth's oceans?");
            printf("\n\nA.Sunda Trench\tB.Mariana Trench\n\nC.Puerto Rico Trench\tD.Tonga Trench\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Mariana Trench");
                break;
            }

case 10:
            printf("\n\nWhat is the term for the total value of goods and services produced within a country in a given time period?");
            printf("\n\nA.CPI (Consumer Price Index)\tB.GDP (Gross Domestic Product)\n\nC.GNP (Gross National Product)\tD.PPP (Purchasing Power Parity)\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.GDP (Gross Domestic Product)");
                break;
            }

case 11:
            printf("\n\nWhich one is the first search engine in internet?");
            printf("\n\nA.Google\tB.Archie\n\nC.Altavista\tD.WAIS\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Archie");
                break;
            }

case 12:
            printf("\n\nWhich one is the first web browser invented in 1990?");
            printf("\n\nA.Internet Explorer\tB.Mosaic\n\nC.Mozilla\tD.Nexus\n\n");
            countq++;
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Nexus");
                break;
            }

case 13:
            printf("\n\nFirst computer virus is known as?");
            printf("\n\nA.Rabbit\tB.Creeper virus\n\nC.Elk Cloner\tD.SCA Virus\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Creeper Virus");
                break;
            }

case 14:
            printf("\n\nWhich one programming language is exclusively used for Artificial Intelligence?");
            printf("\n\nA.C\tB.Java\n\nC.J2EE\tD.Prolog\n\n");
            countq++;
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Prolog");
                break;
            }

case 15:
            printf("\n\n1024 bit is equal to how many byte?");
            printf("\n\nA.1 Byte\tB.128 Byte\n\nC.32 Byte\tD.64 Byte\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.128 Byte");
                break;
            }

case 16:
            printf("\n\nIn computer world, Trojan refer to?");
            printf("\n\nA.Virus\tB.Malware\n\nC.Worm\tD.Spyware\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Malware");
                break;
            }

case 17:
            printf("\n\nWhich computer program converts assembly language to machine language?");
            printf("\n\nA.Interpreter\tB.Compiler\n\nC.Assembler\tD.Comparator\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Assembler");
                break;
            }

case 18:
            printf("\n\nWho is also know as the father of Indian Supercomputing?");
            printf("\n\nA.Raghunath Mashelkar\tB.Vijay Bhatkar\n\nC.Jayant Narlikar\tD.Nandan Nilekani\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Vijay Bhatkar");
                break;
            }

case 19:
            printf("\n\nWhich function key needs to be press during reboot to enter in Safe Mode of a Windows machine?");
            printf("\n\nA.F8\tB.F2\n\nC.F1\tD.F9\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.F8");
                break;
            }

case 20:
            printf("\n\nWhich key combination is used to permantly delete a file or folder?");
            printf("\n\nA.Shift+delete\tB.Alt+delete\n\nC.CTRL+delete\tD.Delete\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Shift+delete");
                break;
            }

case 21:

            printf("\n\n1.Where is the ‘Institute of Veterinary Biological Products (IVBP)’ located?");
            printf("\n\nA.Pune\tB.Ahemdabad\n\nC.Lucknow\tD.Mumbai\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Pune");
                break;
            }


case 22:

            printf("\n\nFood Safety and Standards Authority of India is a statutory body established under which Union Ministry?");
            printf("\n\nA. Ministry of Health and Family Welfare\tB.Ministry of Home Affairs\n\nC.Ministry of Defence\tD.Ministry of Personnel, Public Grievances and Pensions\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Ministry of Home Affairs");
                break;
            }

case 23:
            printf("\n\nWhich country has developed an artificial intelligence Nanny (AI Nanny), to monitor embryos?");
            printf("\n\n A.Japan\tB.China\n\nC.USA\tD.germany\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.China");
                break;
            }

    case 24:
            printf("\n\nWho is the first male player to win the ‘World Games Athlete of the Year’ award?");
            printf("\n\nA.Virat kohli\tB.Pakaj Advani\n\nC.PR Srejeesh\tD.Arif Khan\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.PR Srejeesh");
                break;
            }

    case 25:
            printf("\n\nWhich state launched ‘Project Sadbhawana’ to improve Governance?");
            printf("\n\nA.New Delhi\tB.Madhya Pradesh\n\nC.Assam\tD.Odisha\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Assam");
                break;
            }

    case 26:
            printf("\n\n‘Raas Mahotsav or Raas Leela festival’ is celebrated in which state?");
            printf("\n\nA.Assam\tB.West Bengal\n\nC.Gujara\tD.Tamil Nadu\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Assam");
                break;
            }


    case 27:
            printf("\n\nWhich of the following currencies is used in Argentina?");
            printf("\n\nA.Peso\tB.Baht\n\nC.Real\tD.Pula\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Peso");
                break;
            }
    case 28:
            printf("\n\nWhat was the name of Air India’s AI-powered chat assistant to introduce a generative AI virtual agent?");
            printf("\n\nA.SkyMate\tB.CloudTalk\n\nC.Maharaja\tD.AIJet\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Maharaja");
                break;
            }
    case 29:
            printf("\n\nWho among the following won the gold medal in archery at National game 2023?");
            printf("\n\nA.Ankita Bhakat\tB.Deepika Kumari\n\nC.Simranjeet Kaur\tD.Bhajan Kaur\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Deepika Kumari");
                break;
            }
    case 30:
            printf("\n\nIn which fort did PM Modi recently unveil the statue of Shivaji Maharaj?");
            printf("\n\nA.Lohagad Fort\tB.Janjira Fort\n\nC.Rajkot Fort\tD.Daulatabad Fort\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Rajkot Fort ");
                break;
            }

case 31:

            printf("\n\n31.Who is often referred to as the Bollywood Badshah?");
            printf("\n\nA. Aamir Khan\tB. Shah Rukh Khan\n\nC. Salman Khan\tD. Akshay Kumar\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Shah Rukh Khan");
                break;
            }


case 32:

            printf("\n\n32.Which Indian film won the Best Foreign Language Film at the 2009 Academy Awards?");
            printf("\n\nA. Lagaan\tB. Slumdog Millionaire\n\nC. Taare Zameen Par\tD. Dhobi Ghat\n\n");
            countq++;
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Slumdog Millionaire");
                break;
            }



case 33:

            printf("\n\n33.In which year did the first season of the Indian Premier League (IPL) take place?");
            printf("\n\nA. 2007\tB. 2008\n\nC. 2009\tD. 2010\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. 2007");
                break;
            }




case 34:

            printf("\n\n34.What is the name of India's highest-grossing film of all time, as of 2022?");
            printf("\n\nA. Baahubali 2: The Conclusion\tB. Dangal\n\nC. PK\tD. Avengers: Endgame (dubbed version)\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Baahubali 2: The Conclusion");
                break;
            }





case 35:

            printf("\n\n35.Which Indian city is often referred to as the Bollywood capital?");
            printf("\n\nA. Mumbai\tB. Kolkata\n\nC. Chennai\tD. Delhi\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Mumbai");
                break;
            }





case 36:

            printf("\n\n36.Who is known as the God of Indian Cricket?");
            printf("\n\nA. Sachin Tendulkar\tB. Virat Kohli\n\nC. Rahul Dravid\tD. Sourav Ganguly\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Sachin Tendulkar");
                break;
            }




case 37:

            printf("\n\n37.In which dance form did the legendary Indian dancer Rukmini Devi Arundale specialize?");
            printf("\n\nA. Bharatanatyam\tB. Kathak\n\nC. Odissi\tD. Kuchipudi\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Bharatanatyam");
                break;
            }




case 38:

            printf("\n\n38.Which popular Indian TV show is a quiz competition?");
            printf("\n\nA. Kaun Banega Crorepati\tB. Bigg Boss\n\nC. Indian Idol\tD. Khatron Ke Khiladi\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Kaun Banega Crorepati");
                break;
            }



case 39:

            printf("\n\n39.Who composed the music for the 2018 Bollywood film Padmaavat?");
            printf("\n\nA. A.R. Rahman\tB. Pritam\n\nC. Sanjay Leela Bhansali\tD. Shankar-Ehsaan-Loy\n\n");
            countq++;
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Sanjay Leela Bhansali");
                break;
            }


case 40:

            printf("\n\n40.What is the traditional art form of puppetry called in the state of Rajasthan, often used for storytelling in Indian entertainment?");
            printf("\n\nA. Kathakali\tB. Kuchipudi\n\nC. Ramlila\tD. Kathputli\n\n");
            countq++;
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D. Kathputli");
                break;
            }

case 41:
            printf("\n\nWho is considered the author of the ancient Indian epic, the Ramayana?");
            printf("\n\nA) Vyasa\tB) Valmiki\tC) Tulsidas\tD) Kalidasa\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B) Valmiki");
                break;
            }
case 42:
            printf("\n\nWhat is the sacred river mentioned in Hindu scriptures, believed to cleanse one's sins?");
            printf("\n\nA) Yamuna\tB) Ganges\tC) Saraswati\tD) Brahmaputra\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B) Ganges");
                break;
            }
case 43:
            printf("\n\nWhich deity is known as the preserver in the Hindu trinity of gods?");
            printf("\n\nA) Brahma\tB) Vishnu\tC) Shiva\tD) Lakshmi\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B) Vishnu");
                break;
            }
 case 44:
            printf("\n\nThe Bhagavad Gita is a conversation between Prince Arjuna and which deity on the battlefield of Kurukshetra?");
            printf("\n\nA) Lord Krishna\tB) Lord Rama\tC) Lord Shiva\tD) Lord Brahma\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A) Lord Krishna");
                break;
            }
case 45:
            printf("\n\nIn what year did the Renaissance begin in Europe, marking a revival of art, literature, and learning?");
            printf("\n\nA) 1300\tB) 1400\tC) 1500\tD) 1600\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C) 1500");
                break;
            }
case 46:
            printf("\n\nWho was the Egyptian queen famously involved with both Julius Caesar and Mark Antony?");
            printf("\n\nA) Cleopatra\tB) Nefertiti\tC) Hatshepsut\tD) Ankhesenamun\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A) Cleopatra");
                break;
            }
case 47:
            printf("\n\nThe Silk Road was a historic trade route connecting Asia with which other major region?");
            printf("\n\nA) Europe\tB) Africa\tC) South America\tD) Australia\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A) Europe");
                break;
            }
case 48:
            printf("\n\nWhich ancient Greek philosopher is known for his teachings on ethics and virtue, and was the tutor of Alexander the Great?");
            printf("\n\nA) Socrates\tB) Aristotle\tC) Plato\tD) Heraclitus\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B) Aristotle");
                break;
            }
case 49:
            printf("\n\nThe Treaty of Versailles, signed in 1919, officially ended which major conflict?");
            printf("\n\nA) World War I\tB) World War II\tC) Korean War\tD) Vietnam War\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A) World War I");
                break;
            }
case 50:
            printf("\n\nThe The Great Wall of China was built primarily to protect against invasions from which group of people?");
            printf("\n\nA) Mongols\tB) Huns\tC) Persians\tD) Vikings\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A) Mongols");
                break;
            }

case 51:
            printf("\n\n Who is considered the 'King of Clay' in tennis?");
            printf("\n\nA) Novak Djokovic/tB) Roger Federer\tC) Rafael Nadal\tD) Andy Murray\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C) Rafael Nadal");
                break;
            }
case 52:
            printf("\n\nIn which year did the first modern Olympic Games take place?");
            printf("\n\nA) 1896\tB) 1900\tC) 1920\tD) 1984\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A) 1896");
                break;
            }
case 53:
            printf("\n\nWhich country won the FIFA World Cup in 2018?");
            printf("\n\nA) Germany\tB) Brazil\tC) France\tD) Argentina\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C) France");
                break;
            }
 case 54:
            printf("\n\n What is the maximum number of players allowed on a standard soccer (football) team?");
            printf("\n\nA) 8\tB) 10\tC) 11\tD) 12\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C) 11");
                break;
            }
case 55:
            printf("\n\nWho holds the record for the most career points scored in the NBA?");
            printf("\n\nA) Kobe Bryant\tB) LeBron James\tC) Michael Jordan\tD) Kareem Abdul-Jabbar\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D) Kareem Abdul-Jabbar");
                break;
            }
case 56:
            printf("\n\nIn which city did the first modern Olympics take place?");
            printf("\n\nA) Paris\tB) Rome\tC) Athens\tD) London\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C) Athens");
                break;
            }
case 57:
            printf("\n\nWhich sport is known as the gentleman's game?");
            printf("\n\nA) Soccer (Football)\tB) Cricket\tC) Tennis\tD) Golf");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is  B) Cricket");
                break;
            }
case 58:
            printf("\n\n What is the diameter of a standard basketball hoop in inches?");
            printf("\n\nA) 16 inches\tB) 18 inches\tC) 20 inches\tD) 24 inches\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B) 18 inches");
                break;
            }
case 59:
            printf("\n\nWhich country has won the most Olympic gold medals in the Summer Olympics?");
            printf("\n\nA) United States\tB) China\tC) Russia\tD) Germany\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is  A) United States");
                break;
            }
case 60:
            printf("\n\n Who is the all-time leading goal scorer in the history of FIFA World Cup tournaments?");
            printf("\n\nA) Lionel Messi\tB) Cristiano Ronaldo\tC) Pele\tD) Miroslav Klose\n\n");
            countq++;
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D) Miroslav Klose");
                break;
            }

        }
        i++;
        if (i <= 5)
            goto start;
        finaltime = time(NULL);
        double time_taken = difftime(finaltime, initialtime);
        score = (float)countr / countq * 100 - difftime(finaltime, initialtime) / 3;
        if (score < 0)
            score = 0;
        printf("\n\n\nYour Score: %.2f", score);
        printf("\nTime Taken: %.2f seconds", time_taken);
        if (score == 100)
            printf("\n\nEXCELLENT!!! KEEP IT UP");
        else if (score >= 80 && score < 100)
            printf("\n\nVERY GOOD!!");
        else if (score >= 60 && score < 80)
            printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
        else if (score >= 40 && score < 60)
            printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
        else
            printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
        puts("\n\nNEXT PLAY?(Y/N)");
        if (toupper(getch()) == 'Y')
            goto home;
        else
        {
            writescore(score, playername);
            goto mainhome;
        }
    }
    else
    {
        printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
        Sleep(700);
        goto mainhome;
    }
    return 0;
}
