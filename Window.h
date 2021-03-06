//
// Created by francesco on 15/03/18.
//

#ifndef AA_JUMP_WINDOW_H
#define AA_JUMP_WINDOW_H

#include <SFML/Graphics.hpp>

class Window {
public:
    Window();

    Window(const std::string &title, const sf::Vector2u &size);

    ~Window();

    void BeginDraw();

    void EndDraw();

    void Update();

    bool IsDone() { return isDone; };

    sf::RenderWindow *GetRenderWindow();

    sf::Vector2u GetWindowSize();

    void Draw(sf::Drawable &drawable);

    void SetDone() { isDone = true; }//SETTA DONE A TRUE

private:
    void Setup(const std::string &title, const sf::Vector2u &size);

    void Destroy();

    void Create();

    sf::RenderWindow window;
    bool isDone;
    sf::Vector2u windowSize;
    std::string windowTitle;

};


#endif //AA_JUMP_WINDOW_H
