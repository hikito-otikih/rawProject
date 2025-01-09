#include <Book/MusicPlayer.hpp>

MusicPlayer::MusicPlayer()
: mMusic()
, mFilenames()
, mVolume(50.f)
{
	mFilenames[Music::MusicTheme1]	= "Media/Music/MusicTheme1.ogg";
	mFilenames[Music::MusicTheme2]	= "Media/Music/MusicTheme2.ogg";
	mFilenames[Music::MusicTheme3]	= "Media/Music/MusicTheme3.ogg";
	mFilenames[Music::MusicMission1] = "Media/Music/MusicMission1.ogg";
	mFilenames[Music::MusicMission2] = "Media/Music/MusicMission2.ogg";
	mFilenames[Music::MusicMission3] = "Media/Music/MusicMission3.ogg";
}

void MusicPlayer::play(Music::ID theme)
{
	std::string filename = mFilenames[theme];

	if (!mMusic.openFromFile(filename))
		throw std::runtime_error("Music " + filename + " could not be loaded.");

	mMusic.setVolume(mVolume);
	mMusic.setLoop(true);
	mMusic.play();
}

void MusicPlayer::stop()
{
	mMusic.stop();
}

void MusicPlayer::setVolume(float volume)
{
	mVolume = volume;
	mMusic.setVolume(mVolume);
}

void MusicPlayer::setPaused(bool paused)
{
	if (paused)
		mMusic.pause();
	else
		mMusic.play();
}
