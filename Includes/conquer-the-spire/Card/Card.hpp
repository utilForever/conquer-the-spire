// Copyright (c) 2019 Eddie Lee

// We are making our contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef CONQUERTHESPIRE_CARD_HPP
#define CONQUERTHESPIRE_CARD_HPP

#include<conquer-the-spire/Effect/Effect.hpp>
#define CURSE_CARD (-1)
#define COLORLESS_CARD (0)
#define IRONCLAD_CARD (1)
#define SILENT_CARD (2)
#define DEFECT_CARD (3)
#define WATCHER_CARD (4)

#define ATTACK_CARD (1)
#define SKILL_CARD (2)
#define POWER_CARD (3)
#define STATUS_CARD (4)

#include <string>

namespace Conquerthespire
{

class Card
{
    public:
        //! Default constructor.
        Card() = default;

        //! Default destructor.
        virtual ~Card() = default;

        //! Default copy constructor.
        Card(const Card& card) = default;

        //! Default move constructor.
        Card(Card&& card) = default;

        //! Default copy assignment operator.
        Card& operator = (const Card& card) = default;

        //! Default move assignment operator.
        Card& operator = (Card&& card) = default;

        std::string name;
        std::string text;

        vector<Effect> Cardeffect;
        int color;
        int type;
        int cost;
        int grade = 1;
        int maxgrade;
};

} // namespace Conquerthespire

#endif // CONQUERTHESPIRE_CARD_HPP
