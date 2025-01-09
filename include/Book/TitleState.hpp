#ifndef BOOK_TITLESTATE_HPP
#define BOOK_TITLESTATE_HPP

#include <Book/State.hpp>
#include <Book/Container.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>


class TitleState : public State
{
	public:
							TitleState(StateStack& stack, Context context);

		virtual void		draw();
		virtual bool		update(sf::Time dt);
		virtual bool		handleEvent(const sf::Event& event);


	private:
		GUI::Container			mGUIContainer;
};

#endif // BOOK_TITLESTATE_HPP
