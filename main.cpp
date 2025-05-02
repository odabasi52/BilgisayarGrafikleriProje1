#include "Headers/Mesh.h"

#define HEIGHT 600
#define WIDTH 800

GLuint cubeIndices[] =
{
    0, 1, 2, 2, 3, 0,  // Front face
    4, 5, 6, 6, 7, 4,  // Back face
    8, 9, 10, 10, 11, 8, // Left face
    12, 13, 14, 14, 15, 12, // Right face
    16, 17, 18, 18, 19, 16, // Top face
    20, 21, 22, 22, 23, 20  // Bottom face
};

Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.1f, 100.0f,  0.1f)},
	Vertex{glm::vec3(-0.1f, 100.0f, -0.1f)},
	Vertex{glm::vec3(0.1f, 100.0f, -0.1f)},
	Vertex{glm::vec3(0.1f, 100.0f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  100.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,   100.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,   100.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,   100.1f,  0.1f)}
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};

std::vector <GLuint> cubeInd(cubeIndices, cubeIndices + sizeof(cubeIndices) / sizeof(GLuint));
Mesh createCube(float x, float y, float z, const char* texturePath, GLuint rgb_mode){
	glm::vec3 offset(x, y, z);
	Vertex vertices[] =
	{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
		// Front face
		Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
		Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
		Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
		Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

		// Back face
		Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
		Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
		Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
		Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

		// Left face
		Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
		Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
		Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
		Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

		// Right face
		Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
		Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
		Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
		Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

		// Top face
		Vertex{glm::vec3(-0.5f,  0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
		Vertex{glm::vec3( 0.5f,  0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
		Vertex{glm::vec3( 0.5f,  0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
		Vertex{glm::vec3(-0.5f,  0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},  // Top-left

		// Bottom face
		Vertex{glm::vec3(-0.5f, -0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},  // Bottom-left
		Vertex{glm::vec3( 0.5f, -0.5f, -0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},  // Bottom-right
		Vertex{glm::vec3( 0.5f, -0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},  // Top-right
		Vertex{glm::vec3(-0.5f, -0.5f,  0.5f) - offset, glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}   // Top-left
	};
	Texture textures[]{Texture(texturePath, "diffuse", 0, rgb_mode, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> verts(vertices, vertices + sizeof(vertices) / sizeof(Vertex));
	std::vector <Texture> tex(textures, textures + sizeof(textures) / sizeof(Texture));
	Mesh cube(verts, cubeInd, tex);
	return cube;
}

Mesh createWhite(float x, float y, float z){
	return createCube(x, y, z, "Resources/white.png", GL_RGB);
}

Mesh createPlank(float x, float y, float z){
	return createCube(x, y, z, "Resources/plank.png", GL_RGB);
}

Mesh createRed(float x, float y, float z){
	return createCube(x, y, z, "Resources/red.png", GL_RGB);
}

Mesh createStone(float x, float y, float z){
	return createCube(x, y, z, "Resources/stone.png", GL_RGB);
}

int main()
{
	// Initialize GLFW
	glfwInit();

	// Create a GLFWwindow object of 800 by 800 pixels, naming it "YoutubeOpenGL"
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Bilgisayar Grafikleri - Proje 1", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

	int fbSizeX, fbSizeY;
    glfwGetFramebufferSize(window, &fbSizeX, &fbSizeY);
    glViewport(0, 0, fbSizeX, fbSizeY);

	

	// Generates Shader object using shaders defualt.vert and default.frag
	Shader shaderProgram("Shaders/vertex.shader", "Shaders/fragment.shader");

	// Shader for light cube
	Shader lightShader("Shaders/light.vertex", "Shaders/light.fragment");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	// Create light mesh

	Texture glassTextures[]{Texture("Resources/glass.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE)};
	std::vector <Texture> glassTex(glassTextures, glassTextures + sizeof(glassTextures) / sizeof(Texture));
	Mesh light(lightVerts, lightInd, glassTex);

	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.5f, 0.5f, 0.5f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	glm::vec3 objectPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 objectModel = glm::mat4(1.0f);
	objectModel = glm::translate(objectModel, objectPos);


	lightShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	shaderProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	// Enable depth test to prevent objects from being drawn over each other
	glEnable(GL_DEPTH_TEST);


	// create a camera
	Camera camera(WIDTH, HEIGHT, glm::vec3(0.0f, 0.3f, 2.0f));

	Mesh plank0 = createPlank(0.0f, 0.0f, 0.0f);
	Mesh plank1 = createPlank(0.0f, 1.0f, 0.0f);
	Mesh plank2 = createPlank(0.0f, 2.0f, 0.0f);
	Mesh plank3 = createPlank(0.0f, 3.0f, 0.0f);
	Mesh plank4 = createPlank(0.0f, 4.0f, 0.0f);
	Mesh plank5 = createPlank(0.0f, 5.0f, 0.0f);
	Mesh plank6 = createPlank(0.0f, 6.0f, 0.0f);
	Mesh plank7 = createPlank(0.0f, 7.0f, 0.0f);
	Mesh plank8 = createPlank(0.0f, 8.0f, 0.0f);
	Mesh plank9 = createPlank(0.0f, 9.0f, 0.0f);
	Mesh plank10 = createPlank(0.0f, 10.0f, 0.0f);
	Mesh plank11 = createPlank(0.0f, 11.0f, 0.0f);
	Mesh plank12 = createPlank(0.0f, 12.0f, 0.0f);
	Mesh plank13 = createPlank(0.0f, 13.0f, 0.0f);
	Mesh plank14 = createPlank(0.0f, 14.0f, 0.0f);
	Mesh plank16 = createPlank(0.0f, 14.0f, 0.0f);
	Mesh plank17 = createPlank(0.0f, 15.0f, 0.0f);
	Mesh plank18 = createPlank(0.0f, 16.0f, 0.0f);
	Mesh plank19 = createPlank(0.0f, 17.0f, 0.0f);
	Mesh plank15 = createPlank(1.0f, 1.0f, 0.0f);

	Mesh stone0 = createStone(-2.0f, 18.0f, -2.0f);
	Mesh stone1 = createStone(-1.0f, 18.0f, -2.0f);
	Mesh stone2 = createStone(0.0f, 18.0f, -2.0f);
	Mesh stone3 = createStone(1.0f, 18.0f, -2.0f);
	Mesh stone4 = createStone(2.0f, 18.0f, -2.0f);
	Mesh stone5 = createStone(-2.0f, 18.0f, -1.0f);
	Mesh stone6 = createStone(-1.0f, 18.0f, -1.0f);
	Mesh stone7 = createStone(0.0f, 18.0f, -1.0f);
	Mesh stone8 = createStone(1.0f, 18.0f, -1.0f);
	Mesh stone9 = createStone(2.0f, 18.0f, -1.0f);
	Mesh stone10 = createStone(-2.0f, 18.0f, 0.0f);
	Mesh stone11 = createStone(-1.0f, 18.0f, 0.0f);
	Mesh stone12 = createStone(0.0f, 18.0f, 0.0f);
	Mesh stone13 = createStone(1.0f, 18.0f, 0.0f);
	Mesh stone14 = createStone(2.0f, 18.0f, 0.0f);
	Mesh stone15 = createStone(-2.0f, 18.0f, 1.0f);
	Mesh stone16 = createStone(-1.0f, 18.0f, 1.0f);
	Mesh stone17 = createStone(0.0f, 18.0f, 1.0f);
	Mesh stone18 = createStone(1.0f, 18.0f, 1.0f);
	Mesh stone19 = createStone(2.0f, 18.0f, 1.0f);
	Mesh stone20 = createStone(-2.0f, 18.0f, 2.0f);
	Mesh stone21 = createStone(-1.0f, 18.0f, 2.0f);
	Mesh stone22 = createStone(0.0f, 18.0f, 2.0f);
	Mesh stone23 = createStone(1.0f, 18.0f, 2.0f);
	Mesh stone24 = createStone(2.0f, 18.0f, 2.0f);

	Mesh red0 = createRed(1.0f, 2.0f, 0.0f);
	Mesh red1 = createRed(1.0f, 3.0f, 0.0f);
	Mesh red2 = createRed(1.0f, 4.0f, 0.0f);
	Mesh red3 = createRed(1.0f, 5.0f, 0.0f);
	Mesh red4 = createRed(1.0f, 6.0f, 0.0f);
	Mesh red5 = createRed(1.0f, 7.0f, 0.0f);
	Mesh red6 = createRed(1.0f, 8.0f, 0.0f);
	Mesh red7 = createRed(1.0f, 9.0f, 0.0f);
	Mesh red8 = createRed(1.0f, 10.0f, 0.0f);

	Mesh red10 = createRed(2.0f, 2.0f, 0.0f);
	Mesh red11 = createRed(2.0f, 3.0f, 0.0f);
	Mesh red12 = createRed(2.0f, 4.0f, 0.0f);
	Mesh white10 = createWhite(2.0f, 5.0f, 0.0f);
	Mesh white11 = createWhite(2.0f, 6.0f, 0.0f);
	Mesh white12 = createWhite(2.0f, 7.0f, 0.0f);
	Mesh red16 = createRed(2.0f, 8.0f, 0.0f);
	Mesh red17 = createRed(2.0f, 9.0f, 0.0f);
	Mesh red18 = createRed(2.0f, 10.0f, 0.0f);

	Mesh red20 = createRed(3.0f, 2.0f, 1.0f);
	Mesh red21 = createRed(3.0f, 3.0f, 1.0f);
	Mesh white20 = createWhite(3.0f, 4.0f, 1.0f);
	Mesh red22 = createRed(3.0f, 5.0f, 1.0f);
	Mesh red23 = createRed(3.0f, 6.0f, 1.0f);
	Mesh red24 = createRed(3.0f, 7.0f, 1.0f);
	Mesh white21 = createWhite(3.0f, 8.0f, 1.0f);
	Mesh red25 = createRed(3.0f, 9.0f, 1.0f);
	Mesh red26 = createRed(3.0f, 10.0f, 1.0f);

	Mesh red30 = createRed(4.0f, 2.0f, 1.0f);
	Mesh red31 = createRed(4.0f, 3.0f, 1.0f);
	Mesh white30 = createWhite(4.0f, 4.0f, 1.0f);
	Mesh red32 = createRed(4.0f, 5.0f, 1.0f);
	Mesh red33 = createRed(4.0f, 6.0f, 1.0f);
	Mesh red34 = createRed(4.0f, 7.0f, 1.0f);
	Mesh white31 = createWhite(4.0f, 8.0f, 1.0f);
	Mesh red35 = createRed(4.0f, 9.0f, 1.0f);
	Mesh red36 = createRed(4.0f, 10.0f, 1.0f);

	Mesh red40 = createRed(5.0f, 2.0f, 2.0f);
	Mesh red41 = createRed(5.0f, 3.0f, 2.0f);
	Mesh white40 = createWhite(5.0f, 4.0f, 2.0f);
	Mesh red42 = createRed(5.0f, 5.0f, 2.0f);
	Mesh red43 = createRed(5.0f, 6.0f, 2.0f);
	Mesh red44 = createRed(5.0f, 7.0f, 2.0f);
	Mesh white41 = createWhite(5.0f, 8.0f, 2.0f);
	Mesh red45 = createRed(5.0f, 9.0f, 2.0f);
	Mesh red46 = createRed(5.0f, 10.0f, 2.0f);

	Mesh red50 = createRed(6.0f, 2.0f, 2.0f);
	Mesh red51 = createRed(6.0f, 3.0f, 2.0f);
	Mesh red52 = createRed(6.0f, 4.0f, 2.0f);
	Mesh red53 = createRed(6.0f, 5.0f, 2.0f);
	Mesh white50 = createWhite(6.0f, 6.0f, 2.0f);
	Mesh red54 = createRed(6.0f, 7.0f, 2.0f);
	Mesh red55 = createRed(6.0f, 8.0f, 2.0f);
	Mesh red56 = createRed(6.0f, 9.0f, 2.0f);
	Mesh red57 = createRed(6.0f, 10.0f, 2.0f);

	Mesh red60 = createRed(7.0f, 2.0f, 1.0f);
	Mesh red61 = createRed(7.0f, 3.0f, 1.0f);
	Mesh red62 = createRed(7.0f, 4.0f, 1.0f);
	Mesh white60 = createWhite(7.0f, 5.0f, 1.0f);
	Mesh white61 = createWhite(7.0f, 6.0f, 1.0f);
	Mesh white62 = createWhite(7.0f, 7.0f, 1.0f);
	Mesh red66 = createRed(7.0f, 8.0f, 1.0f);
	Mesh red67 = createRed(7.0f, 9.0f, 1.0f);
	Mesh red68 = createRed(7.0f, 10.0f, 1.0f);

	Mesh red70 = createRed(8.0f, 2.0f, 1.0f);
	Mesh red71 = createRed(8.0f, 3.0f, 1.0f);
	Mesh red72 = createRed(8.0f, 4.0f, 1.0f);
	Mesh red73 = createRed(8.0f, 5.0f, 1.0f);
	Mesh white70 = createWhite(8.0f, 6.0f, 1.0f);
	Mesh red74 = createRed(8.0f, 7.0f, 1.0f);
	Mesh red75 = createRed(8.0f, 8.0f, 1.0f);
	Mesh red76 = createRed(8.0f, 9.0f, 1.0f);
	Mesh red77 = createRed(8.0f, 10.0f, 1.0f);
	
	Mesh red80 = createRed(9.0f, 2.0f, 1.0f);
	Mesh red81 = createRed(9.0f, 3.0f, 1.0f);
	Mesh red82 = createRed(9.0f, 4.0f, 1.0f);
	Mesh red83 = createRed(9.0f, 5.0f, 1.0f);
	Mesh red84 = createRed(9.0f, 6.0f, 1.0f);
	Mesh red85 = createRed(9.0f, 7.0f, 1.0f);
	Mesh red86 = createRed(9.0f, 8.0f, 1.0f);
	Mesh red87 = createRed(9.0f, 9.0f, 1.0f);
	Mesh red88 = createRed(9.0f, 10.0f, 1.0f);
	

	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		stone0.Draw(shaderProgram, camera);
		stone1.Draw(shaderProgram, camera);
		stone2.Draw(shaderProgram, camera);
		stone3.Draw(shaderProgram, camera);
		stone4.Draw(shaderProgram, camera);
		stone5.Draw(shaderProgram, camera);
		stone6.Draw(shaderProgram, camera);
		stone7.Draw(shaderProgram, camera);
		stone8.Draw(shaderProgram, camera);
		stone9.Draw(shaderProgram, camera);
		stone10.Draw(shaderProgram, camera);
		stone11.Draw(shaderProgram, camera);
		stone12.Draw(shaderProgram, camera);
		stone13.Draw(shaderProgram, camera);
		stone14.Draw(shaderProgram, camera);
		stone15.Draw(shaderProgram, camera);
		stone16.Draw(shaderProgram, camera);
		stone17.Draw(shaderProgram, camera);
		stone18.Draw(shaderProgram, camera);
		stone19.Draw(shaderProgram, camera);
		stone20.Draw(shaderProgram, camera);
		stone21.Draw(shaderProgram, camera);
		stone22.Draw(shaderProgram, camera);
		stone23.Draw(shaderProgram, camera);
		stone24.Draw(shaderProgram, camera);

		plank0.Draw(shaderProgram, camera);
		plank1.Draw(shaderProgram, camera);
		plank2.Draw(shaderProgram, camera);
		plank3.Draw(shaderProgram, camera);
		plank4.Draw(shaderProgram, camera);
		plank5.Draw(shaderProgram, camera);
		plank6.Draw(shaderProgram, camera);
		plank7.Draw(shaderProgram, camera);
		plank8.Draw(shaderProgram, camera);
		plank9.Draw(shaderProgram, camera);
		plank10.Draw(shaderProgram, camera);
		plank11.Draw(shaderProgram, camera);
		plank12.Draw(shaderProgram, camera);
		plank13.Draw(shaderProgram, camera);
		plank14.Draw(shaderProgram, camera);
		plank15.Draw(shaderProgram, camera);
		plank16.Draw(shaderProgram, camera);
		plank17.Draw(shaderProgram, camera);
		plank18.Draw(shaderProgram, camera);
		plank19.Draw(shaderProgram, camera);

		red0.Draw(shaderProgram, camera);
		red1.Draw(shaderProgram, camera);
		red2.Draw(shaderProgram, camera);
		red3.Draw(shaderProgram, camera);
		red4.Draw(shaderProgram, camera);
		red5.Draw(shaderProgram, camera);
		red6.Draw(shaderProgram, camera);
		red7.Draw(shaderProgram, camera);
		red8.Draw(shaderProgram, camera);
		
		red10.Draw(shaderProgram, camera);
		red11.Draw(shaderProgram, camera);
		red12.Draw(shaderProgram, camera);
		white10.Draw(shaderProgram, camera);
		white11.Draw(shaderProgram, camera);
		white12.Draw(shaderProgram, camera);
		red16.Draw(shaderProgram, camera);
		red17.Draw(shaderProgram, camera);
		red18.Draw(shaderProgram, camera);

		red20.Draw(shaderProgram, camera);
		red21.Draw(shaderProgram, camera);
		white20.Draw(shaderProgram, camera);
		red22.Draw(shaderProgram, camera);
		red23.Draw(shaderProgram, camera);
		red24.Draw(shaderProgram, camera);
		white21.Draw(shaderProgram, camera);
		red25.Draw(shaderProgram, camera);
		red26.Draw(shaderProgram, camera);

		red30.Draw(shaderProgram, camera);
		red31.Draw(shaderProgram, camera);
		white30.Draw(shaderProgram, camera);
		red32.Draw(shaderProgram, camera);
		red33.Draw(shaderProgram, camera);
		red34.Draw(shaderProgram, camera);
		white31.Draw(shaderProgram, camera);
		red35.Draw(shaderProgram, camera);
		red36.Draw(shaderProgram, camera);

		red40.Draw(shaderProgram, camera);
		red41.Draw(shaderProgram, camera);
		white40.Draw(shaderProgram, camera);
		red42.Draw(shaderProgram, camera);
		red43.Draw(shaderProgram, camera);
		red44.Draw(shaderProgram, camera);
		white41.Draw(shaderProgram, camera);
		red45.Draw(shaderProgram, camera);
		red46.Draw(shaderProgram, camera);

		red50.Draw(shaderProgram, camera);
		red51.Draw(shaderProgram, camera);
		red52.Draw(shaderProgram, camera);
		red53.Draw(shaderProgram, camera);
		white50.Draw(shaderProgram, camera);
		red54.Draw(shaderProgram, camera);
		red55.Draw(shaderProgram, camera);
		red56.Draw(shaderProgram, camera);
		red57.Draw(shaderProgram, camera);

		red60.Draw(shaderProgram, camera);
		red61.Draw(shaderProgram, camera);
		red62.Draw(shaderProgram, camera);
		white60.Draw(shaderProgram, camera);
		white61.Draw(shaderProgram, camera);
		white62.Draw(shaderProgram, camera);
		red66.Draw(shaderProgram, camera);
		red67.Draw(shaderProgram, camera);
		red68.Draw(shaderProgram, camera);

		red70.Draw(shaderProgram, camera);
		red71.Draw(shaderProgram, camera);
		red72.Draw(shaderProgram, camera);
		red73.Draw(shaderProgram, camera);
		white70.Draw(shaderProgram, camera);
		red74.Draw(shaderProgram, camera);
		red75.Draw(shaderProgram, camera);
		red76.Draw(shaderProgram, camera);
		red77.Draw(shaderProgram, camera);

		red80.Draw(shaderProgram, camera);
		red81.Draw(shaderProgram, camera);
		red82.Draw(shaderProgram, camera);
		red83.Draw(shaderProgram, camera);
		red84.Draw(shaderProgram, camera);
		red85.Draw(shaderProgram, camera);
		red86.Draw(shaderProgram, camera);
		red87.Draw(shaderProgram, camera);
		red88.Draw(shaderProgram, camera);

		// Handles camera inputs
		camera.Inputs(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 100.0f);

		light.Draw(lightShader, camera);
		


		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	shaderProgram.Delete();
	lightShader.Delete();
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}