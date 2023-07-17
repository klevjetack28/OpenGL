#include <"VertexBuffer.h>

#include <"Renderer.h>

VertexBuffer::VertexBuffer(const void* data, unsigned int size)
{
    GlCall(glGenBuffers(1, &m_RendererID));
    GlCall(glBindBuffer(GL_ARRAY_BUFFER, m_RendererID));
    GlCall(glBufferData(GL_ARRAY_BUFFER, size * data * sizeof(float), positions, GL_STATIC_DRAW));
}

VertexBuffer::~VertexBuffer()
{
    GlCall(glDeleteBuffer(1, &m_RendererID))
}

void VertexBuffer::Bind()
{
    GlCall(glBindBuffer(GL_ARRAY_BUFFER, m_Renderer));
}

void VertexBuffer::Unbind()
{
    GlCall(glBindBuffer(GL_ARRAY_BUFFER, 0));
}