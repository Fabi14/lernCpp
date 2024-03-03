#include <print>
#include <array>
#include <ranges>

double calcMidPoint(const double a, const double b)
{
    const double midPoint{ (a + b) / 2 };
    return midPoint;
}


int main()
{
    //Print to console
    std::println("Hallo");
    std::print("Hallo ");
    std::println("Welt");

    //TODO Augabe: Gib deine eigene Begrüßung auf der Konsole aus.
    constexpr bool ex01{ false };

    //Expressions
    if constexpr (ex01)
    {
        //arithmetic (+,-,*,/)
        35 + 20;    // int + int -> int
        std::println("35 + 20 = {}", 35 + 20);

        //comparison (==,!=,<,<=,>,>=)
        35 < 20;    // int < int -> bool
        std::println("35 < 20 = {}", 35 < 20);

        //logical (!,&&,||)
        true && false;  // (AND) bool && bool -> bool
        true || false;  // (OR) bool || bool -> bool
        !true;          // (NOT) !bool -> bool

        std::println("NOT true = {}", !true);

        //TODO Augabe: Schreibe eine Expression die aus einem Geburtsjahr das Alter berechnet und ausgibt ob jemand seinen Führerschein machen darf.
    }
    constexpr bool ex02{ false };

    //Memory
    if constexpr (ex02)
    {
        const int myFirstNumber{ 5 };
        {
            const int myNumberInsideAScope{ 42 };
            //CPU -> doing some calculation
            const int result{ myFirstNumber + myNumberInsideAScope };
            std::println("result = {}", result);
        }
        //const int newResult{ myFirstNumber + myNumberInsideAScope };

        //Augabe: Füge in deine Berechnung Variablen ein, um die Leserlichkeit zu erhöhen
    }
    constexpr bool ex03{ false };

    //Types
    if constexpr (ex03)
    {
        bool isProgrammingFun{ false };
        const int daysAYear{ 365 };
        const double theGoldenRatio{ 1.61803 };

        // immutable vs. mutable
        isProgrammingFun = true;
    }
    constexpr bool ex04{ false };

    //functions
    if constexpr (ex04)
    {
        const double a{ 3.0 };
        const double b{ 5.0 };
        const double midPoint{ (a + b) / 2 };

        std::println("midPoint = {}", midPoint);

        std::println("midPoint = {}", calcMidPoint(3.0,5.0));
        std::println("midPoint = {}", calcMidPoint(4.0, 27.0));

         //Augabe: Mach aus deiner Berechnung eine Funktion um diese einfacher mehrmals verwenden zu können
    }
    constexpr bool ex05{ false };

    // structs
    if constexpr (ex05)
    {
        //building new types
        struct Point
        {
            int x{ 0 };
            int y{ 0 };
        };

        //// Memory
        const Point startPoint{ .x {3},.y{4} };
        const Point endPoint{ 5,8 };

        const int manhattanDistance = std::abs(endPoint.x - startPoint.x) + std::abs(endPoint.y - startPoint.y);
        std::println("manhattanDistance = {}", manhattanDistance);

        //std::println("manhattanDistance = {}", calcManhattanDistance(startPoint, endPoint));

         //Augabe: Erweitere deine Funktion von Geburtsjahr auf Geburtstag, verwende hierfür ein struct.
    }
    constexpr bool ex06{ false };

    //control flow
    if constexpr (ex06)
    {
        //if, else
        {
            const bool isProgrammingFun{ true };

            if (isProgrammingFun)   // if ( bool )
            {
                std::println("YEAH!");
            }
            else
            {
                std::println("OH NO!");
            }

            // // -------------------------------------
            //const bool isProgrammingFun{ true };

            //const std::string answer{ isProgrammingFun ? "YEAH!" : "OH NO!" };

            //std::println("{}",answer);

          //  Augabe:  Gib verschiedene Text aus, je nach Ergebnis deiner Funktion.
        }
        constexpr bool ex07{ false };

        //for
        if constexpr (ex07)
        {
            const std::array<int,4> listOfNumbers{ 3, 6, 42, 123 };

            std::println("start printing list");
            for (const auto number : listOfNumbers)
            {
                std::println("{}", number);
            }
            std::println("end printing list");
            constexpr bool ex07b{ false };

            //Range factories
            if constexpr (ex07b)
            {
                ////iota
                std::println("start printing iota");
                for (int number : std::views::iota(5, 15))
                {
                    std::println("{}", number);
                }
                std::println("end printing iota");

                ////repeat
                std::println("start printing repeat");
                for (int number : std::views::repeat(5, 15))
                {
                    std::println("{}", number);
                }
                std::println("end printing repeat");
            }
        }
    }
    constexpr bool ex08{ false };

    //arrays
    if constexpr (ex08)
    {
        const int a{ 3 };
        std::array<int, 4> listOfNumbers{ a, 6, 42, 123 };

        std::println("Size of listOfNumbers: {}", listOfNumbers.size());

        std::println("Value at index 2: {}", listOfNumbers.at(2));
        listOfNumbers.at(1) = 22;

        std::println("start printing changed list");
        for (int number : listOfNumbers)
        {
            std::print("{}, ", number);
        }
        std::println("end printing changed list");


         //Augabe: Erstelle ein struct Person, die ein Namen und ein Geburtsdatum hat. Erstelle ein arry mit mindestens drei Personen. Gib in einer for-Schleife den Namen und ob die Person einen Führerschein machen darf aus.
    }
}

