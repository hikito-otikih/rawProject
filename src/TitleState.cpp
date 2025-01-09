#include <Book/TitleState.hpp>
#include <Book/Button.hpp>
#include <Book/Utility.hpp>
#include <Book/MusicPlayer.hpp>
#include <Book/ResourceHolder.hpp>
#include <Book/Player.hpp>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Sprite.hpp>

struct SnowParticle
{
	sf::CircleShape shape;
	float speed;
};

struct SnowFlake
{
	sf::Sprite sprite;
	float speed, rotateSpeed;
};


TitleState::TitleState(StateStack& stack, Context context)
: State(stack, context)
{
	sf::Vector2f windowSize(context.window->getSize());
}

void TitleState::draw()
{
	sf::RenderWindow& window = *getContext().window;

	window.setView(window.getDefaultView());

    sf::RectangleShape backgroundShape;
    backgroundShape.setFillColor(sf::Color(193,255,114));
    backgroundShape.setSize(sf::Vector2f(window.getSize().x, window.getSize().y));
	window.draw(backgroundShape);
	window.draw(mGUIContainer);
}

bool TitleState::update(sf::Time dt)
{
	return true;
}

bool TitleState::handleEvent(const sf::Event& event)
{
	mGUIContainer.handleEvent(event);
	return false;

	return true;
}