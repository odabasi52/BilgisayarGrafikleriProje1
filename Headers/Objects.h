#ifndef OBJECTS_H
#define OBJECTS_H

GLuint cubeIndices[] =
{
    0, 1, 2, 2, 3, 0,  // Front face
    4, 5, 6, 6, 7, 4,  // Back face
    8, 9, 10, 10, 11, 8, // Left face
    12, 13, 14, 14, 15, 12, // Right face
    16, 17, 18, 18, 19, 16, // Top face
    20, 21, 22, 22, 23, 20  // Bottom face
};


glm::vec3 offset_x(1.0f, 0.0f, 0.0f);
glm::vec3 offset_2x(2.0f, 0.0f, 0.0f);
glm::vec3 offset_z(0.0f, 0.0f, 1.0f);
glm::vec3 offset_2z(0.0f, 0.0f, 2.0f);

Vertex glassVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

Vertex diamondVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

Vertex coalVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

Vertex libraryVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

Vertex netherVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

Vertex glowstoneVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};


Vertex redstoneVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};


Vertex plankVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z - offset_x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

Vertex woolVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
    // Front face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Back face
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Left face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Right face
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Top face
    Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

    // Bottom face
    Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
    Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
    Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
    Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset_2z - offset_2x, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
};

#endif