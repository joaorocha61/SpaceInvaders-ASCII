#ifndef TEXTSPRITE_HPP
#define TEXTSPRITE_HPP

#include <string>
#include "SpriteBase.hpp"

class TextSprite : public SpriteBase
{
	//temporarios
	friend std::ostream &operator<<(std::ostream &, const TextSprite &);
public:
	TextSprite(std::string text):SpriteBase(text.length(),1) {this->text = text;}
	~TextSprite(){}
	
	void setText(std::string text) {this->text = text;this->largura = text.length();}
	
	//SpriteBase
	virtual void putAt(const SpriteBase &, unsigned = 0, unsigned = 0);
	virtual std::string whoami() const {return "TextSprite";}
	
	//RenderBase
	virtual void init() {};
	virtual void update() {};
private:
	std::string text;
	
	//SpriteBase
	virtual std::string getLinha(unsigned) const;
};

#endif // TEXTSPRITE_HPP
