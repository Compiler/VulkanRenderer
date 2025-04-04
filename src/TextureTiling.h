#pragma once
#include <texture.h>
#include <vector>
#include <Vertex.h>
namespace Veloxr {

    struct TextureData {
        uint32_t width, height, channels;
        std::vector<unsigned char> pixelData;
    };

/*    struct Vertex {
        glm::vec4 pos;
        glm::vec4 texCoord;
        int textureUnit;
    };
*/

    struct TiledResult {
        std::vector<TextureData> tiles;
        std::vector<Vertex>      vertices;
    };


    class TextureTiling {
        
        public:
            TextureTiling() = default;
            std::vector<TextureData> tile(OIIOTexture& texture, uint32_t maxResolution = 4096*2);

            TiledResult tile2(OIIOTexture &texture, uint32_t maxResolution=4096*2);

    };

}
