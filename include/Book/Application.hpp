#ifndef BOOK_APPLICATION_HPP
#define BOOK_APPLICATION_HPP

#include <Book/ResourceHolder.hpp>
#include <Book/ResourceIdentifiers.hpp>
#include <Book/Player.hpp>
#include <Book/StateStack.hpp>
#include <Book/MusicPlayer.hpp>
#include <Book/SoundPlayer.hpp>

#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>


class Application
{
	public:
								Application();
		void					run();
		

	private:
		void					processInput();
		void					update(sf::Time dt);
		void					render();

		void					registerStates();


	private:
		static const sf::Time	TimePerFrame;

		sf::RenderWindow		mWindow;
		TextureHolder			mTextures;
	  	FontHolder				mFonts;
		Player					mPlayer;

		MusicPlayer				mMusic;
		SoundPlayer				mSounds;
		StateStack				mStateStack;
};

#endif // BOOK_APPLICATION_HPP
