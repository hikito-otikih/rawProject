#ifndef BOOK_RESOURCEIDENTIFIERS_HPP
#define BOOK_RESOURCEIDENTIFIERS_HPP


// Forward declaration of SFML classes
namespace sf
{
	class Texture;
	class Font;
	class Shader;
	class SoundBuffer;
}

namespace Textures
{
	enum ID
	{
		TitleScreen,
		Buttons,
		ExtraButtons,
		Explosion,
		Particle,
		FinishLine,
		BlueButton, 
		OrangeButton,
		NONE
	};
}

namespace Shaders
{
	enum ID
	{
	};
}

namespace Fonts
{
	enum ID
	{
		Main,
		Secondary,
		Third,
	};
}

namespace SoundEffect
{
	enum ID
	{
		Button,
		movechess,
		capturemove,
		movecheck,
		gameend,
		gamedraw,
	};
}

namespace Music
{
	enum ID
	{
		//MenuTheme,
		//MissionTheme,
		MusicTheme1,
		MusicTheme2,
		MusicTheme3,
		MusicMission1,
		MusicMission2,
		MusicMission3,
	};
}


// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID>			TextureHolder;
typedef ResourceHolder<sf::Font, Fonts::ID>					FontHolder;
typedef ResourceHolder<sf::Shader, Shaders::ID>				ShaderHolder;
typedef ResourceHolder<sf::SoundBuffer, SoundEffect::ID>	SoundBufferHolder;

#endif // BOOK_RESOURCEIDENTIFIERS_HPP
