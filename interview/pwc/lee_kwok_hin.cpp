#include <iostream>
#include <iomanip>

// output strings
const std::string FREEZING = "freezing";
const std::string UNFREEZING = "unfreezing";
const std::string BOILING = "boiling";
const std::string UNBOILING = "unboiling";

double number_input(std::string output_message = "")
{
    if (!output_message.empty())
        std::cout << output_message;

    double input_double;
    std::string input_str;
    std::cin >> input_str;

    try
    {
        input_double = std::stod(input_str);
    }
    catch (const std::exception &error)
    {
        std::cout << "The value is not a number.\nThe program is terminating.\n";
        exit(1);
    }

    return input_double;
}

int main()
{
    // startup - input
    double freezing_threshold = number_input("Freezing Threshold: \n");
    double boiling_threshold = number_input("Boiling Threshold: \n");
    double fluctuation_limit = number_input("Fluctuation Limit: \n");

    // startup - value checking
    if (freezing_threshold == boiling_threshold)
    {
        std::cout << "The freezing threshold and the boiling threshold cannot be the same.\nThe Program is terminating.\n";
        return 0;
    }

    if (freezing_threshold > boiling_threshold)
    {
        std::cout << "The boiling threshold should be greater than the freezing threshold.\nThe Program is terminating.\n";
        return 0;
    }

    // Eliminate "not unfreezing & boiling" and "not unboiling & freezing" state
    // eg. freezing: 0, boiling: 10, fluctuation: 20, current_temp: 10, current_state: boiling & !freezing;
    // if the next temperature is small enough to trigger a freezing state but not small enough to trigger an unboiling state;
    // (between -10 and 0 in the above example)
    // it will get a combined state which is not possible according to the law of physics
    if (boiling_threshold - freezing_threshold <= fluctuation_limit)
    {
        std::cout << "The fluctuation limit should be greater than the difference between the boiling threshold and freezing threshold.\nThe program is terminating.\n";
        return 0;
    }

    if (fluctuation_limit < 0)
        fluctuation_limit = std::abs(fluctuation_limit);

    std::cout << "The startup is completed. You can now input temperature.\n";

    double previous_temp = number_input();
    double current_temp;
    std::cout << std::fixed << std::setprecision(1) << previous_temp << ' ';

    bool freezing = previous_temp <= freezing_threshold;
    bool boiling = previous_temp >= boiling_threshold;

    while (true)
    {
        current_temp = number_input();
        std::cout << current_temp * 1.0f << ' ';

        if (freezing && current_temp >= boiling_threshold)
        {
            std::cout << UNFREEZING << ' ' << BOILING << ' ';
            freezing = false;
            boiling = true;
        }

        else if (boiling && current_temp <= freezing_threshold)
        {
            std::cout << UNBOILING << ' ' << FREEZING << ' ';
            boiling = false;
            freezing = true;
        }

        else if (freezing && current_temp > freezing_threshold + fluctuation_limit)
        {
            std::cout << UNFREEZING << ' ';
            freezing = false;
        }

        else if (boiling && current_temp < boiling_threshold - fluctuation_limit)
        {
            std::cout << UNBOILING << ' ';
            boiling = false;
        }

        else if (!freezing && current_temp <= freezing_threshold)
        {
            std::cout << FREEZING << ' ';
            freezing = true;
        }

        else if (!boiling && current_temp >= boiling_threshold)
        {
            std::cout << BOILING << ' ';
            boiling = true;
        }

        previous_temp = current_temp;
    }

    return 0;
}