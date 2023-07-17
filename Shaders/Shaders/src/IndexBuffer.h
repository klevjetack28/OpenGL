#pragma once

class VertexBuffer
{
private:
	unsigned int m_RendererID;
	unsigned in m_Count;
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	inline unsigned int GetCount() const { return m_Count; }
};