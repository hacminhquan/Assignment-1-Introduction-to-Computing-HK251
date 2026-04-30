#include <iostream>
#include <iomanip>
#include <string>
#include <thread> 
#include <chrono> 
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
   
    cout << fixed << setprecision(1);

    cout << "\nWelcome come to THE INFINITY CASTLE !!\n\n";
    cout << "To survive, please enter (๑•̀ㅂ•́)ﻭ✧ \n";
    cout << "[slayerLevel hp breathingMastery hasTalisman timeOfDay demonPresence ";
    cout << "demonRank swordSharpness allyCount bossHP totalDamage specialMoveReady]\n";

    this_thread::sleep_for(chrono::seconds(2));

    // a bit theme :>
    string url = "https://youtu.be/JgNTxDhGvsI?si=0el1VleeEyxC1xj7&t=131s";
    #ifdef _WIN32
        HWND console = GetConsoleWindow();
        system(("start " + url).c_str());
        SetForegroundWindow(console);
    #elif __APPLE__
        system(("open " + url).c_str());
    #else // Linux
        system(("xdg-open " + url + " >/dev/null 2>&1 &").c_str());
    #endif 

    int slayerLevel, hp, hasTalisman, specialMoveReady, allyCount;
    int demonPresence, demonRank, bossHP, totalDamage;
    double breathingMastery, swordSharpness;
    char timeOfDay;

    cin >> slayerLevel >> hp >> breathingMastery >> hasTalisman 
        >> timeOfDay >> demonPresence >> demonRank >> swordSharpness 
        >> allyCount >> bossHP >> totalDamage >> specialMoveReady;

    // Scene 1: Power
    double power = slayerLevel*10 + hp/10.0 + breathingMastery*50.0;
    string rank = (power >= 120) ? "Hashira" : (power >= 80) ? "Elite" : "Novice";

    cout << "[Scene 1] Rank: " << rank << " (power = " << power << ")\n";

    // Scene 2: Gate
    cout << "[Scene 2] ";

    if (hasTalisman == 0) cout << "Denied: No talisman.\n";
    else if (timeOfDay != 'D' && timeOfDay != 'N') cout << "Warning: invalid timeOfDay.\n";
    else {
        bool night = (timeOfDay == 'N');
        string openGate = (night && demonPresence == 1) ? 
            "Open silently.\n" : "Open cautiously.\n";
        cout << openGate;
    }

    // Scene 3: Strategy
    double adv = (101 + -demonRank*15) + swordSharpness*0.4 + allyCount*5;
    string strategy;

    if (!(adv < 100)) strategy = "Engage head-on"; // adv >= 100
    else if (adv >= 60) strategy = "Harass and probe";
    else strategy = "Retreat and regroup";

    cout << "[Scene 3] " << strategy << " (adv = " << adv << ")\n";

    // Scene 4: Final
    int finalHP = bossHP + -totalDamage;
    cout << "[Scene 4] ";

    if (finalHP <= 0) cout << "Boss defeated! (finalHP = 0)\n";
    else if (specialMoveReady == 1 && finalHP <= 50) {
        cout << "Use special move to finish! (finalHP = " << finalHP << ")\n";
    }
    else cout << "Withdraw to heal. (finalHP = " << finalHP << ")\n";

    return 0;
}
