#include <iostream>

void printMenu()
{
    // 1 print help
    std::cout << "1: print help" << std::endl;
    // 2 print exchange stats
    std::cout << " 2 :print exchange stats" << std::endl;
    // 3 make an offer
    std::cout << " 3: make an offer " << std::endl;
    // 4 make a bid
    std::cout << " 4 :make a bid " << std::endl;
    // 5 print a wallet
    std::cout << " 5: print a wallet " << std::endl;
    // 6 continue
    std::cout << " 6 continues " << std::endl;

    std::cout << "=============" << std::endl;
}
int getUserOption()
{
    int userOption;
    std::cout << "type 1 - 6" << std::endl;
    std::cin >> userOption;
    std::cout << "you are choose :" << userOption << std::endl;
    return userOption;
}
void printHelp()
{
    std::cout << "Help - your aim to make money . analyse the market and make bids and offers ." << std::endl;
}
void printMarketStats()
{
    std::cout << "market looks good ." << std::endl;
}
void enterOffer()
{
    std::cout << "make an offer, enter the amount ." << std::endl;
}
void enterBid()
{
    std::cout << "make a bid, enter the amount ." << std::endl;
}
void printWallet()
{
    std::cout << "your wallet is empty" << std::endl;
}
void goToNextTimeFrame()
{
    std::cout << "Going to next time fame." << std::endl;
}
void processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. choose 1-6 ." << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        goToNextTimeFrame();
    }
}
int main()
{
    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }

    return 0;
}