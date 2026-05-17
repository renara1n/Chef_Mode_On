#include "Fries.h"

Fries::Fries() : Food("Fries") {

    addStep("Step 1",
        { "Heat oil", "Cut potatoes",
          "Add salt", "Wash potatoes" }, 3);

    addStep("Step 2",
        { "Boil water", "Peel potatoes",
          "Wash knife", "Leave skin" }, 1);

    addStep("Step 3",
        { "Dry potatoes", "Heat pan",
          "Keep whole", "Cut into strips" }, 3);

    addStep("Step 4",
        { "Fry now", "Soak in water",
          "Add oil", "Skip soak" }, 1);

    addStep("Step 5",
        { "Cool potatoes", "Heat oil",
          "Dry potatoes", "Serve wet" }, 2);

    addStep("Step 6",
        { "Add cheese", "Deep fry potatoes",
          "Freeze fries", "Wash fries" }, 1);

    addStep("Step 7",
        { "Cook again", "Season and serve",
          "Cool fries", "Burn fries" }, 1);
}