// Copyright (c) 2019 Eddie Lee

// We are making our contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef CONQUERTHESPIRE_CARD_HPP
#define CONQUERTHESPIRE_CARD_HPP

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
};

} // namespace Conquerthespire

#endif // CONQUERTHESPIRE_CARD_HPP
