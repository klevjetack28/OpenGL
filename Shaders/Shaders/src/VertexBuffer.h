#pragma once

class VertexBuffer
{
private:
	unsigned int RendererID;
public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind();
	void Unbind();
};