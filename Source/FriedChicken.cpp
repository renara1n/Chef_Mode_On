#include "FriedChicken.h"

FriedChicken::FriedChicken() : Food("Fried Chicken") {

    addStep("Step 1",
        { "Heat pan", "Cut chicken",
          "Add salt", "Wash chicken" }, 3);

    addStep("Step 2",
        { "Dry chicken", "Marinate chicken",
          "Boil fast", "Cool flour" }, 1);

    addStep("Step 3",
        { "Add oil", "Skip flavor",
          "Cool chicken", "Prepare flour coating" }, 3);

    addStep("Step 4",
        { "Bake plain", "Coat chicken in flour",
          "Wash flour", "Freeze chicken" }, 1);

    addStep("Step 5",
        { "Cool oil", "Pour oil",
          "Remove pan", "Heat oil" }, 3);

    addStep("Step 6",
        { "Toast bread", "Cool chicken",
          "Deep fry chicken", "Boil meat" }, 2);

    addStep("Step 7",
        { "Cook more", "Drain oil and serve",
          "Cool chicken", "Burn chicken" }, 1);
}