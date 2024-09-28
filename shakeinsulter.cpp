#include "ShakeInsulter.h"
#include <cstdlib>
#include <ctime>

ShakeInsulter::ShakeInsulter() {
    array1 = { "Artless", "Bawdy", "Beslubbering", "Churlish", "Cockered",
               "Clouted", "Craven", "Currish", "Dankish", "Dissembling", "Droning",
               "Errant", "Fawning", "Fobbing", "Froward", "Frothy", "Gleeking",
               "Goatish", "Gorbellied", "Impertinent", "Infectious", "Jarring",
               "Loggerheaded", "Lumpish", "Mammering", "Mangled", "Mewling", "Paunchy",
               "Pribbling", "Puking", "Puny", "Qualling", "Rank", "Reeky", "Roguish", "Ruttish",
               "Saucy", "Spleeny", "Spongy", "Surly", "Tottering", "Unmuzzled", "Vain",
               "Venomed", "Villainous", "Warped", "Wayward", "Weedy", "Yeasty" };

    array2 = { "Base - court", "Beef - witted", "Beetle - headed", "Boil - Brained",
               "Clapper - Clawed", "Clay - Brained", "Common - Kissing", "Crook - Pated",
               "Dismal - Dreaming", "Dizzy - Eyed", "Doghearted", "Dread - Bolted",
               "Earth - Vexing", "Elf - Skinned", "Fat - Kidneyed", "Fun - Sucked",
               "Flap - Mouthed", "Fly - Bitten", "Folly - Fallen", "Fool - Born", "Full - Gorged",
               "Guts - Griping", "Half - Faced", "Hasty - Witted", "Hedge - Born", "Hell - Hated",
               "Idle - Headed", "Ill - Breeding","Ill - Nurtured", "Knotty - Pated",
               "Milk - Livered", "Motley - Minded", "Onion - Eyed", "Plume - Plucked",
               "Pottle - Deep", "Pox - Marked", "Reeling - Ripe", "Rough - Hewn",
               "Rude - Growing", "Rump - Fed", "Shard - Bone", "Sheep - Biting", "Spur - Galled",
               "Swag - Bellied", "Tardy - Gaited", "Tickle - Brained", "Toad - Spotted",
               "Unchin - Snouted", "Weather - Bitten" };

    array3 = { "Apple - john", "Barnacle", "Bladder", "Boar - Pig", "Bugbear", "Bum - Bailey",
               "Canker - Blossom", "Clack - Dish", "Clotpole", "Coxcomb", "Codpiece",
               "Death - Token", "Dewberry", "Flap - Dragon", "Flax - Wench", "Flirt - Gill",
               "Foot - Licker", "Fustilarian", "Giglet", "Gudgeon", "Haggard", "Harpy",
               "Hedge - Pig", "Horn - Beast", "Hugger - Mugger", "Joithead", "Lewdster", "Lout",
               "Maggot - Pie", "Malt - Worm", "Mammet", "Measle", "Minnow", "Miscreant",
               "Moldwarp", "Mumble - News", "Nut - Hook", "Pigeon - Egg", "Pignut", "Puttock",
               "Pumpion", "Ratsbane", "Scut", "Skainsmate", "Strumpet", "Varlot","Vassal",
               "Whey - Face", "Wagtail" };
}

std::string ShakeInsulter::generate_insult() {
    std::string result;
    int randomInsult_1 = 0;
    int randomInsult_2 = 0;
    int randomInsult_3 = 0;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    randomInsult_1 = rand() % array1.size();
    randomInsult_2 = rand() % array2.size();
    randomInsult_3 = rand() % array3.size();

    result = "Thou " + array1.at(randomInsult_1) + " " + array2.at(randomInsult_2) + " " + array3.at(randomInsult_3);

    return result;
}