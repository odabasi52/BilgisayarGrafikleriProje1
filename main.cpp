#include "Headers/Mesh.h"
#include "Headers/Objects.h"


#define HEIGHT 600
#define WIDTH 800


Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.1f, 10.0f,  0.1f)},
	Vertex{glm::vec3(-0.1f, 10.0f, -0.1f)},
	Vertex{glm::vec3(0.1f, 10.0f, -0.1f)},
	Vertex{glm::vec3(0.1f, 10.0f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  10.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,   10.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,   10.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,   10.1f,  0.1f)}
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

int main()
{
	// Initialize GLFW
	glfwInit();

	// Create a GLFWwindow object of 800 by 800 pixels, naming it "YoutubeOpenGL"
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Bilgisayar Grafikleri - Proje 1", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

	int fbSizeX, fbSizeY;
    glfwGetFramebufferSize(window, &fbSizeX, &fbSizeY);
    glViewport(0, 0, fbSizeX, fbSizeY);

	

	// Generates Shader object using shaders defualt.vert and default.frag
	Shader shaderProgram("Shaders/vertex.shader", "Shaders/fragment.shader");
	std::vector <GLuint> cubeInd(cubeIndices, cubeIndices + sizeof(cubeIndices) / sizeof(GLuint));

	Texture coalTextures[]{Texture("Resources/coal.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> coalVerts(coalVertices, coalVertices + sizeof(coalVertices) / sizeof(Vertex));
	std::vector <Texture> coalTex(coalTextures, coalTextures + sizeof(coalTextures) / sizeof(Texture));
	Mesh coalCube(coalVerts, cubeInd, coalTex);

	Texture diamondTextures[]{Texture("Resources/diamond.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> diamondVerts(diamondVertices, diamondVertices + sizeof(diamondVertices) / sizeof(Vertex));
	std::vector <Texture> diamondTex(diamondTextures, diamondTextures + sizeof(diamondTextures) / sizeof(Texture));
	Mesh diamondCube(diamondVerts, cubeInd, diamondTex);

	Texture glassTextures[]{Texture("Resources/glass.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> glassVerts(glassVertices, glassVertices + sizeof(glassVertices) / sizeof(Vertex));
	std::vector <Texture> glassTex(glassTextures, glassTextures + sizeof(glassTextures) / sizeof(Texture));
	Mesh glassCube(glassVerts, cubeInd, glassTex);

	Texture libraryTextures[]{Texture("Resources/library.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> libraryVerts(libraryVertices, libraryVertices + sizeof(libraryVertices) / sizeof(Vertex));
	std::vector <Texture> libraryTex(libraryTextures, libraryTextures + sizeof(libraryTextures) / sizeof(Texture));
	Mesh libraryCube(libraryVerts, cubeInd, libraryTex);

	Texture netherTextures[]{Texture("Resources/nether.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> netherVerts(netherVertices, netherVertices + sizeof(netherVertices) / sizeof(Vertex));
	std::vector <Texture> netherTex(netherTextures, netherTextures + sizeof(netherTextures) / sizeof(Texture));
	Mesh netherCube(netherVerts, cubeInd, netherTex);

	Texture glowstoneTextures[]{Texture("Resources/glowstone.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> glowstoneVerts(glowstoneVertices, glowstoneVertices + sizeof(glowstoneVertices) / sizeof(Vertex));
	std::vector <Texture> glowstoneTex(glowstoneTextures, glowstoneTextures + sizeof(glowstoneTextures) / sizeof(Texture));
	Mesh glowstoneCube(glowstoneVerts, cubeInd, glowstoneTex);

	Texture redstoneTextures[]{Texture("Resources/redstone.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> redstoneVerts(redstoneVertices, redstoneVertices + sizeof(redstoneVertices) / sizeof(Vertex));
	std::vector <Texture> redstoneTex(redstoneTextures, redstoneTextures + sizeof(redstoneTextures) / sizeof(Texture));
	Mesh redstoneCube(redstoneVerts, cubeInd, redstoneTex);

	Texture plankTextures[]{Texture("Resources/plank.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> plankVerts(plankVertices, plankVertices + sizeof(plankVertices) / sizeof(Vertex));
	std::vector <Texture> plankTex(plankTextures, plankTextures + sizeof(plankTextures) / sizeof(Texture));
	Mesh plankCube(plankVerts, cubeInd, plankTex);

	Texture woolTextures[]{Texture("Resources/wool.png", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE)};
	std::vector <Vertex> woolVerts(woolVertices, woolVertices + sizeof(woolVertices) / sizeof(Vertex));
	std::vector <Texture> woolTex(woolTextures, woolTextures + sizeof(woolTextures) / sizeof(Texture));
	Mesh woolCube(woolVerts, cubeInd, woolTex);



	// Shader for light cube
	Shader lightShader("Shaders/light.vertex", "Shaders/light.fragment");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	// Create light mesh
	Mesh light(lightVerts, lightInd, coalTex);

	

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

	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		// Handles camera inputs
		camera.Inputs(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 100.0f);


		// Draws different meshes
		coalCube.Draw(shaderProgram, camera);
		diamondCube.Draw(shaderProgram, camera);
		libraryCube.Draw(shaderProgram, camera);
		netherCube.Draw(shaderProgram, camera);
		glowstoneCube.Draw(shaderProgram, camera);
		redstoneCube.Draw(shaderProgram, camera);
		plankCube.Draw(shaderProgram, camera);
		woolCube.Draw(shaderProgram, camera);
		

		// draw glass
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glassCube.Draw(shaderProgram, camera);
		glDisable(GL_BLEND);

		light.Draw(lightShader, camera);
		


		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	shaderProgram.Delete();
	lightShader.Delete();
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}