#include <"IndexBuffer.h>

#include <"Renderer.h>

IndexBuffer::IndexBuffer(const void* data, unsigned int size)
    : m_Count(count)
{
    ASSERT(sizeof(unsigned int) == sizeof(Gluint))

    GlCall(glGenBuffers(1, &m_RendererID));
    GlCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_RendererID));
    GlCall(glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(unsigned int), positions, GL_STATIC_DRAW));
}

IndexBuffer::~IndexBuffer()
{
    GlCall(glDeleteBuffer(1, &m_RendererID))
}

void IndexBuffer::Bind() const
{
    GlCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_Renderer));
}

void IndexBuffer::Unbind() const
{
    GlCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0));
}