#include <iostream>
using namespace std;

int main() { 

    double weight;

    double mercury;
    double mercury_kg;

    double venus;
    double venus_kg;

    double moon;
    double moon_kg;

    double mars;
    double mars_kg;

    double jupiter;
    double jupiter_kg;

    double saturn;
    double saturn_kg;

    double uranus;
    double uranus_kg;

    double neptune;
    double neptune_kg;

    double pluto;
    double pluto_kg;


    // Mars's moons.

    double deimos;
    double deimos_kg;

    double phobos;
    double phobos_kg;


    // Jupiter's moons.

    double io;
    double io_kg;

    double europa;
    double europa_kg;

    double ganymede;
    double ganymede_kg;

    double callisto;
    double callisto_kg;


    // Saturn's moons.

    double titan;
    double titan_kg;

    double enceladus;
    double enceladus_kg;

    double mimas;
    double mimas_kg;


    // Uranus's moons.

    double titania;
    double titania_kg;

    double oberon;
    double oberon_kg;

    double umbriel;
    double umbriel_kg;

    double miranda;
    double miranda_kg;


    // Neptune's moon.

    double triton;
    double triton_kg;


    // Pluto's moon.

    double charon;
    double charon_kg;


    // Enter your earth weight to convert.

    cout<< "Enter your weight: ";
    cin>>weight;

    // Your earth weight multiply by other world's rough percentage gravity.

    mercury = weight * 0.37897; 
    mercury_kg = mercury * 0.453592;

    venus = weight * 0.90789;
    venus_kg = venus * 0.453592;

    moon = weight * 0.16663;
    moon_kg = moon * 0.453592;

    mars = weight * 0.37709;
    mars_kg = mars * 0.453592;

    jupiter = weight * 2.52803;
    jupiter_kg = jupiter * 0.453592;

    saturn = weight * 1.06495;
    saturn_kg = saturn * 0.453592;

    uranus = weight * 0.90889;
    uranus_kg = uranus * 0.453592;

    neptune = weight * 1.12585;
    neptune_kg = neptune * 0.453592;

    pluto = weight * 0.06789;
    pluto_kg = pluto * 0.453592;


    // Not all moons are listed for the following planets.


    // Mars's moons:
    deimos = weight * 0.00034;
    deimos_kg = deimos * 0.453592;

    phobos = weight * 0.00061;
    phobos_kg = phobos * 0.453592;


    // Jupiter's moons:
    io = weight * 0.18355;
    io_kg = io * 0.453592;

    europa = weight * 0.13458;
    europa_kg = europa * 0.453592;

    ganymede = weight * 0.1448;
    ganymede_kg = ganymede * 0.453592;

    callisto = weight * 0.1269;
    callisto_kg = callisto * 0.453592;


    // Saturn's moons:
    titan = weight * 0.1386;
    titan_kg = titan * 0.453592;

    enceladus = weight * 0.00805;
    enceladus_kg = enceladus * 0.453592;

    mimas = weight * 0.00673;
    mimas_kg = mimas * 0.453592;


    // Uranus's moons:
    titania = weight * 0.03722;
    titania_kg = titania * 0.453592;

    oberon = weight * 0.03568;
    oberon_kg = oberon * 0.453592;

    umbriel = weight * 0.02548;
    umbriel_kg = umbriel * 0.453592;

    miranda = weight * 0.00765;
    miranda_kg = miranda * 0.453592;


    // Neptune's moon:
    triton = weight * 0.07951;
    triton_kg = triton * 0.453592;

    // Pluto's moon:
    charon = weight * 0.03772;
    charon_kg = charon * 0.453592;


    if ( weight > 0) {

        cout<< "\n";
        cout<< "Your weight on mercury: " << "\n";
        cout<< mercury << " lbs" << "\n";
        cout<< mercury_kg << " kg" << "\n"; 
        cout<< "\n";

        cout<< "Your weight on venus: " << "\n";
        cout<< venus << " lbs" << "\n";
        cout<< venus_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on the moon: " << "\n";
        cout<< moon << " lbs" << "\n";
        cout<< moon_kg << " kg" << "\n";
        cout<<"\n";

        cout<< "Your weight on mars: " << "\n";
        cout<< mars << " lbs" << "\n";
        cout<< mars_kg << " kg" << "\n";
        cout<<"\n";

        cout<< "Your weight on jupiter: " << "\n";
        cout<< jupiter << " lbs" << "\n";
        cout<< jupiter_kg << " kg" << "\n";
        cout<<"\n";

        cout<< "Your weight on saturn: " << "\n";
        cout<< saturn << " lbs" << "\n";
        cout<< saturn_kg << " kg" << "\n";
        cout<<"\n";

        cout<< "Your weight on uranus: " << "\n";
        cout<< uranus << " lbs" << "\n";
        cout<< uranus_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on neptune: " << "\n";
        cout<< neptune << " lbs" << "\n";
        cout<< neptune_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on pluto: " << "\n";
        cout<< pluto << " lbs" << "\n";
        cout<< pluto_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "\n";
        cout<< "Mars's moons: " << "\n";
        cout<< "Your weight on deimos: " << "\n";
        cout<< deimos << " lbs" << "\n";
        cout<< deimos_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on phobos: " << "\n";
        cout<< phobos << " lbs" << "\n";
        cout<< phobos_kg << " kg" << "\n";
        cout<< "\n";
        
        cout<< "\n";
        cout<< "Jupiter's moons: " << "\n";
        cout<< "Your weight on io: " << "\n";
        cout<< io << " lbs" << "\n";
        cout<< io_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on europa: " << "\n";
        cout<< europa << " lbs" << "\n";
        cout<< europa_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on ganymede: " << "\n";
        cout<< ganymede << " lbs" << "\n";
        cout<< ganymede_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on callisto: " << "\n";
        cout<< callisto << " lbs" << "\n";
        cout<< callisto_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "\n";
        cout<< "Saturn's moons: " << "\n";
        cout<< "Your weight on titan: " << "\n";
        cout<< titan << " lbs" << "\n";
        cout<< titan_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on enceladus: " << "\n";
        cout<< enceladus << " lbs" << "\n";
        cout<< enceladus_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on mimas: " << "\n";
        cout<< mimas << " lbs" << "\n";
        cout<< mimas_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "\n";
        cout<< "Uranus's moons: " << "\n";
        cout<< "Your weight on titania: " << "\n";
        cout<< titania << " lbs" << "\n";
        cout<< titania_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on oberon: " << "\n";
        cout<< oberon << " lbs" << "\n";
        cout<< oberon_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on umbriel: " << "\n";
        cout<< umbriel << " lbs" << "\n";
        cout<< umbriel_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "Your weight on miranda: " << "\n";
        cout<< miranda << " lbs" << "\n";
        cout<< miranda_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "\n";
        cout<< "Neptune's moon: " << "\n";
        cout<< "Your weight on triton: " << "\n";
        cout<< triton << " lbs" << "\n";
        cout<< triton_kg << " kg" << "\n";
        cout<< "\n";

        cout<< "\n";
        cout<< "Pluto's moon: " << "\n";
        cout<< "Your weight on charon: " << "\n";
        cout<< charon << " lbs" << "\n";
        cout<< charon_kg << " kg" << "\n";
       

    } else {

        (weight == 'x'); // include any random string letter to make non numeric characters, negative values, or number 0 invalid.
        cout<< "Invalid input. Please enter a positive weight." << "\n";

    }

    return 0;

    }
