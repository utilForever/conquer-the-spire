// Copyright (c) 2019 Eddie Lee

// We are making our contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef EFFECT_HPP_INCLUDED
#define EFFECT_HPP_INCLUDED

#define RETAIN (1)
#define EXHAUST (2)
#define INNATE (3)
#define ETHEREAL (4)
#define UNPLAYABLE (5)

namespace Conquerthespire
{

class Effect
{
    public:
        //! Default constructor.
        Effect() = default;

        //! Default destructor.
        virtual ~Effect() = default;

        //! Default copy constructor.
        Effect(const Effect& effect) = default;

        //! Default move constructor.
        Effect(Effect&& effect) = default;

        //! Default copy assignment operator.
        Effect& operator = (const Effect& effect) = default;

        //! Default move assignment operator.
        Effect& operator = (Effect&& effect) = default;

        int type;
        int intensity;
};

} // namespace Conquerthespire

#endif // EFFECT_HPP_INCLUDED
