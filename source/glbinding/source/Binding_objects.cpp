#include <glbinding/Binding.h>

#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/boolean.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/values.h>


using namespace gl;

namespace glbinding 
{

glbinding::Function<void, GLenum, GLfloat> Binding::Accum("glAccum");
glbinding::Function<void, GLenum, GLfixed> Binding::AccumxOES("glAccumxOES");
glbinding::Function<void, GLuint> Binding::ActiveProgramEXT("glActiveProgramEXT");
glbinding::Function<void, GLuint, GLuint> Binding::ActiveShaderProgram("glActiveShaderProgram");
glbinding::Function<void, GLenum> Binding::ActiveStencilFaceEXT("glActiveStencilFaceEXT");
glbinding::Function<void, GLenum> Binding::ActiveTexture("glActiveTexture");
glbinding::Function<void, GLenum> Binding::ActiveTextureARB("glActiveTextureARB");
glbinding::Function<void, GLuint, const GLchar *> Binding::ActiveVaryingNV("glActiveVaryingNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp1ATI("glAlphaFragmentOp1ATI");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp2ATI("glAlphaFragmentOp2ATI");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::AlphaFragmentOp3ATI("glAlphaFragmentOp3ATI");
glbinding::Function<void, GLenum, GLfloat> Binding::AlphaFunc("glAlphaFunc");
glbinding::Function<void, GLenum, GLfixed> Binding::AlphaFuncxOES("glAlphaFuncxOES");
glbinding::Function<void> Binding::ApplyFramebufferAttachmentCMAAINTEL("glApplyFramebufferAttachmentCMAAINTEL");
glbinding::Function<void, GLenum> Binding::ApplyTextureEXT("glApplyTextureEXT");
glbinding::Function<GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreProgramsResidentNV("glAreProgramsResidentNV");
glbinding::Function<GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreTexturesResident("glAreTexturesResident");
glbinding::Function<GLboolean, GLsizei, const GLuint *, GLboolean *> Binding::AreTexturesResidentEXT("glAreTexturesResidentEXT");
glbinding::Function<void, GLint> Binding::ArrayElement("glArrayElement");
glbinding::Function<void, GLint> Binding::ArrayElementEXT("glArrayElementEXT");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLuint, GLuint> Binding::ArrayObjectATI("glArrayObjectATI");
glbinding::Function<void, GLuint> Binding::AsyncMarkerSGIX("glAsyncMarkerSGIX");
glbinding::Function<void, GLhandleARB, GLhandleARB> Binding::AttachObjectARB("glAttachObjectARB");
glbinding::Function<void, GLuint, GLuint> Binding::AttachShader("glAttachShader");
glbinding::Function<void, GLenum> Binding::Begin("glBegin");
glbinding::Function<void, GLuint, GLenum> Binding::BeginConditionalRender("glBeginConditionalRender");
glbinding::Function<void, GLuint, GLenum> Binding::BeginConditionalRenderNV("glBeginConditionalRenderNV");
glbinding::Function<void, GLuint> Binding::BeginConditionalRenderNVX("glBeginConditionalRenderNVX");
glbinding::Function<void> Binding::BeginFragmentShaderATI("glBeginFragmentShaderATI");
glbinding::Function<void, GLuint> Binding::BeginOcclusionQueryNV("glBeginOcclusionQueryNV");
glbinding::Function<void, GLuint> Binding::BeginPerfMonitorAMD("glBeginPerfMonitorAMD");
glbinding::Function<void, GLuint> Binding::BeginPerfQueryINTEL("glBeginPerfQueryINTEL");
glbinding::Function<void, GLenum, GLuint> Binding::BeginQuery("glBeginQuery");
glbinding::Function<void, GLenum, GLuint> Binding::BeginQueryARB("glBeginQueryARB");
glbinding::Function<void, GLenum, GLuint, GLuint> Binding::BeginQueryIndexed("glBeginQueryIndexed");
glbinding::Function<void, GLenum> Binding::BeginTransformFeedback("glBeginTransformFeedback");
glbinding::Function<void, GLenum> Binding::BeginTransformFeedbackEXT("glBeginTransformFeedbackEXT");
glbinding::Function<void, GLenum> Binding::BeginTransformFeedbackNV("glBeginTransformFeedbackNV");
glbinding::Function<void> Binding::BeginVertexShaderEXT("glBeginVertexShaderEXT");
glbinding::Function<void, GLuint> Binding::BeginVideoCaptureNV("glBeginVideoCaptureNV");
glbinding::Function<void, GLuint, GLuint, const GLchar *> Binding::BindAttribLocation("glBindAttribLocation");
glbinding::Function<void, GLhandleARB, GLuint, const GLcharARB *> Binding::BindAttribLocationARB("glBindAttribLocationARB");
glbinding::Function<void, GLenum, GLuint> Binding::BindBuffer("glBindBuffer");
glbinding::Function<void, GLenum, GLuint> Binding::BindBufferARB("glBindBufferARB");
glbinding::Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBase("glBindBufferBase");
glbinding::Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBaseEXT("glBindBufferBaseEXT");
glbinding::Function<void, GLenum, GLuint, GLuint> Binding::BindBufferBaseNV("glBindBufferBaseNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetEXT("glBindBufferOffsetEXT");
glbinding::Function<void, GLenum, GLuint, GLuint, GLintptr> Binding::BindBufferOffsetNV("glBindBufferOffsetNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRange("glBindBufferRange");
glbinding::Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeEXT("glBindBufferRangeEXT");
glbinding::Function<void, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::BindBufferRangeNV("glBindBufferRangeNV");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLuint *> Binding::BindBuffersBase("glBindBuffersBase");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *> Binding::BindBuffersRange("glBindBuffersRange");
glbinding::Function<void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocation("glBindFragDataLocation");
glbinding::Function<void, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationEXT("glBindFragDataLocationEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, const GLchar *> Binding::BindFragDataLocationIndexed("glBindFragDataLocationIndexed");
glbinding::Function<void, GLuint> Binding::BindFragmentShaderATI("glBindFragmentShaderATI");
glbinding::Function<void, GLenum, GLuint> Binding::BindFramebuffer("glBindFramebuffer");
glbinding::Function<void, GLenum, GLuint> Binding::BindFramebufferEXT("glBindFramebufferEXT");
glbinding::Function<void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum> Binding::BindImageTexture("glBindImageTexture");
glbinding::Function<void, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint> Binding::BindImageTextureEXT("glBindImageTextureEXT");
glbinding::Function<void, GLuint, GLsizei, const GLuint *> Binding::BindImageTextures("glBindImageTextures");
glbinding::Function<GLuint, GLenum, GLenum> Binding::BindLightParameterEXT("glBindLightParameterEXT");
glbinding::Function<GLuint, GLenum, GLenum> Binding::BindMaterialParameterEXT("glBindMaterialParameterEXT");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::BindMultiTextureEXT("glBindMultiTextureEXT");
glbinding::Function<GLuint, GLenum> Binding::BindParameterEXT("glBindParameterEXT");
glbinding::Function<void, GLenum, GLuint> Binding::BindProgramARB("glBindProgramARB");
glbinding::Function<void, GLenum, GLuint> Binding::BindProgramNV("glBindProgramNV");
glbinding::Function<void, GLuint> Binding::BindProgramPipeline("glBindProgramPipeline");
glbinding::Function<void, GLenum, GLuint> Binding::BindRenderbuffer("glBindRenderbuffer");
glbinding::Function<void, GLenum, GLuint> Binding::BindRenderbufferEXT("glBindRenderbufferEXT");
glbinding::Function<void, GLuint, GLuint> Binding::BindSampler("glBindSampler");
glbinding::Function<void, GLuint, GLsizei, const GLuint *> Binding::BindSamplers("glBindSamplers");
glbinding::Function<GLuint, GLenum, GLenum, GLenum> Binding::BindTexGenParameterEXT("glBindTexGenParameterEXT");
glbinding::Function<void, GLenum, GLuint> Binding::BindTexture("glBindTexture");
glbinding::Function<void, GLenum, GLuint> Binding::BindTextureEXT("glBindTextureEXT");
glbinding::Function<void, GLuint, GLuint> Binding::BindTextureUnit("glBindTextureUnit");
glbinding::Function<GLuint, GLenum, GLenum> Binding::BindTextureUnitParameterEXT("glBindTextureUnitParameterEXT");
glbinding::Function<void, GLuint, GLsizei, const GLuint *> Binding::BindTextures("glBindTextures");
glbinding::Function<void, GLenum, GLuint> Binding::BindTransformFeedback("glBindTransformFeedback");
glbinding::Function<void, GLenum, GLuint> Binding::BindTransformFeedbackNV("glBindTransformFeedbackNV");
glbinding::Function<void, GLuint> Binding::BindVertexArray("glBindVertexArray");
glbinding::Function<void, GLuint> Binding::BindVertexArrayAPPLE("glBindVertexArrayAPPLE");
glbinding::Function<void, GLuint, GLuint, GLintptr, GLsizei> Binding::BindVertexBuffer("glBindVertexBuffer");
glbinding::Function<void, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *> Binding::BindVertexBuffers("glBindVertexBuffers");
glbinding::Function<void, GLuint> Binding::BindVertexShaderEXT("glBindVertexShaderEXT");
glbinding::Function<void, GLuint, GLuint, GLenum, GLintptrARB> Binding::BindVideoCaptureStreamBufferNV("glBindVideoCaptureStreamBufferNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLenum, GLuint> Binding::BindVideoCaptureStreamTextureNV("glBindVideoCaptureStreamTextureNV");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::Binormal3bEXT("glBinormal3bEXT");
glbinding::Function<void, const GLbyte *> Binding::Binormal3bvEXT("glBinormal3bvEXT");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Binormal3dEXT("glBinormal3dEXT");
glbinding::Function<void, const GLdouble *> Binding::Binormal3dvEXT("glBinormal3dvEXT");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Binormal3fEXT("glBinormal3fEXT");
glbinding::Function<void, const GLfloat *> Binding::Binormal3fvEXT("glBinormal3fvEXT");
glbinding::Function<void, GLint, GLint, GLint> Binding::Binormal3iEXT("glBinormal3iEXT");
glbinding::Function<void, const GLint *> Binding::Binormal3ivEXT("glBinormal3ivEXT");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::Binormal3sEXT("glBinormal3sEXT");
glbinding::Function<void, const GLshort *> Binding::Binormal3svEXT("glBinormal3svEXT");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::BinormalPointerEXT("glBinormalPointerEXT");
glbinding::Function<void, GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *> Binding::Bitmap("glBitmap");
glbinding::Function<void, GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte *> Binding::BitmapxOES("glBitmapxOES");
glbinding::Function<void> Binding::BlendBarrierKHR("glBlendBarrierKHR");
glbinding::Function<void> Binding::BlendBarrierNV("glBlendBarrierNV");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColor("glBlendColor");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::BlendColorEXT("glBlendColorEXT");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::BlendColorxOES("glBlendColorxOES");
glbinding::Function<void, GLenum> Binding::BlendEquation("glBlendEquation");
glbinding::Function<void, GLenum> Binding::BlendEquationEXT("glBlendEquationEXT");
glbinding::Function<void, GLuint, GLenum> Binding::BlendEquationIndexedAMD("glBlendEquationIndexedAMD");
glbinding::Function<void, GLenum, GLenum> Binding::BlendEquationSeparate("glBlendEquationSeparate");
glbinding::Function<void, GLenum, GLenum> Binding::BlendEquationSeparateEXT("glBlendEquationSeparateEXT");
glbinding::Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateIndexedAMD("glBlendEquationSeparateIndexedAMD");
glbinding::Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparatei("glBlendEquationSeparatei");
glbinding::Function<void, GLuint, GLenum, GLenum> Binding::BlendEquationSeparateiARB("glBlendEquationSeparateiARB");
glbinding::Function<void, GLuint, GLenum> Binding::BlendEquationi("glBlendEquationi");
glbinding::Function<void, GLuint, GLenum> Binding::BlendEquationiARB("glBlendEquationiARB");
glbinding::Function<void, GLenum, GLenum> Binding::BlendFunc("glBlendFunc");
glbinding::Function<void, GLuint, GLenum, GLenum> Binding::BlendFuncIndexedAMD("glBlendFuncIndexedAMD");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparate("glBlendFuncSeparate");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateEXT("glBlendFuncSeparateEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateINGR("glBlendFuncSeparateINGR");
glbinding::Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateIndexedAMD("glBlendFuncSeparateIndexedAMD");
glbinding::Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparatei("glBlendFuncSeparatei");
glbinding::Function<void, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::BlendFuncSeparateiARB("glBlendFuncSeparateiARB");
glbinding::Function<void, GLuint, GLenum, GLenum> Binding::BlendFunci("glBlendFunci");
glbinding::Function<void, GLuint, GLenum, GLenum> Binding::BlendFunciARB("glBlendFunciARB");
glbinding::Function<void, GLenum, GLint> Binding::BlendParameteriNV("glBlendParameteriNV");
glbinding::Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebuffer("glBlitFramebuffer");
glbinding::Function<void, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitFramebufferEXT("glBlitFramebufferEXT");
glbinding::Function<void, GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, ClearBufferMask, GLenum> Binding::BlitNamedFramebuffer("glBlitNamedFramebuffer");
glbinding::Function<void, GLenum, GLuint, GLuint64EXT, GLsizeiptr> Binding::BufferAddressRangeNV("glBufferAddressRangeNV");
glbinding::Function<void, GLenum, GLsizeiptr, const void *, GLenum> Binding::BufferData("glBufferData");
glbinding::Function<void, GLenum, GLsizeiptrARB, const void *, GLenum> Binding::BufferDataARB("glBufferDataARB");
glbinding::Function<void, GLenum, GLintptr, GLsizeiptr, GLboolean> Binding::BufferPageCommitmentARB("glBufferPageCommitmentARB");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::BufferParameteriAPPLE("glBufferParameteriAPPLE");
glbinding::Function<void, GLenum, GLsizeiptr, const void *, BufferStorageMask> Binding::BufferStorage("glBufferStorage");
glbinding::Function<void, GLenum, GLintptr, GLsizeiptr, const void *> Binding::BufferSubData("glBufferSubData");
glbinding::Function<void, GLenum, GLintptrARB, GLsizeiptrARB, const void *> Binding::BufferSubDataARB("glBufferSubDataARB");
glbinding::Function<void, GLuint> Binding::CallCommandListNV("glCallCommandListNV");
glbinding::Function<void, GLuint> Binding::CallList("glCallList");
glbinding::Function<void, GLsizei, GLenum, const void *> Binding::CallLists("glCallLists");
glbinding::Function<GLenum, GLenum> Binding::CheckFramebufferStatus("glCheckFramebufferStatus");
glbinding::Function<GLenum, GLenum> Binding::CheckFramebufferStatusEXT("glCheckFramebufferStatusEXT");
glbinding::Function<GLenum, GLuint, GLenum> Binding::CheckNamedFramebufferStatus("glCheckNamedFramebufferStatus");
glbinding::Function<GLenum, GLuint, GLenum> Binding::CheckNamedFramebufferStatusEXT("glCheckNamedFramebufferStatusEXT");
glbinding::Function<void, GLenum, GLenum> Binding::ClampColor("glClampColor");
glbinding::Function<void, GLenum, GLenum> Binding::ClampColorARB("glClampColorARB");
glbinding::Function<void, ClearBufferMask> Binding::Clear("glClear");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearAccum("glClearAccum");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::ClearAccumxOES("glClearAccumxOES");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum, const void *> Binding::ClearBufferData("glClearBufferData");
glbinding::Function<void, GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *> Binding::ClearBufferSubData("glClearBufferSubData");
glbinding::Function<void, GLenum, GLint, GLfloat, GLint> Binding::ClearBufferfi("glClearBufferfi");
glbinding::Function<void, GLenum, GLint, const GLfloat *> Binding::ClearBufferfv("glClearBufferfv");
glbinding::Function<void, GLenum, GLint, const GLint *> Binding::ClearBufferiv("glClearBufferiv");
glbinding::Function<void, GLenum, GLint, const GLuint *> Binding::ClearBufferuiv("glClearBufferuiv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ClearColor("glClearColor");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::ClearColorIiEXT("glClearColorIiEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint> Binding::ClearColorIuiEXT("glClearColorIuiEXT");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::ClearColorxOES("glClearColorxOES");
glbinding::Function<void, GLdouble> Binding::ClearDepth("glClearDepth");
glbinding::Function<void, GLdouble> Binding::ClearDepthdNV("glClearDepthdNV");
glbinding::Function<void, GLfloat> Binding::ClearDepthf("glClearDepthf");
glbinding::Function<void, GLclampf> Binding::ClearDepthfOES("glClearDepthfOES");
glbinding::Function<void, GLfixed> Binding::ClearDepthxOES("glClearDepthxOES");
glbinding::Function<void, GLfloat> Binding::ClearIndex("glClearIndex");
glbinding::Function<void, GLuint, GLenum, GLenum, GLenum, const void *> Binding::ClearNamedBufferData("glClearNamedBufferData");
glbinding::Function<void, GLuint, GLenum, GLenum, GLenum, const void *> Binding::ClearNamedBufferDataEXT("glClearNamedBufferDataEXT");
glbinding::Function<void, GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void *> Binding::ClearNamedBufferSubData("glClearNamedBufferSubData");
glbinding::Function<void, GLuint, GLenum, GLsizeiptr, GLsizeiptr, GLenum, GLenum, const void *> Binding::ClearNamedBufferSubDataEXT("glClearNamedBufferSubDataEXT");
glbinding::Function<void, GLuint, GLenum, const GLfloat, GLint> Binding::ClearNamedFramebufferfi("glClearNamedFramebufferfi");
glbinding::Function<void, GLuint, GLenum, GLint, const GLfloat *> Binding::ClearNamedFramebufferfv("glClearNamedFramebufferfv");
glbinding::Function<void, GLuint, GLenum, GLint, const GLint *> Binding::ClearNamedFramebufferiv("glClearNamedFramebufferiv");
glbinding::Function<void, GLuint, GLenum, GLint, const GLuint *> Binding::ClearNamedFramebufferuiv("glClearNamedFramebufferuiv");
glbinding::Function<void, GLint> Binding::ClearStencil("glClearStencil");
glbinding::Function<void, GLuint, GLint, GLenum, GLenum, const void *> Binding::ClearTexImage("glClearTexImage");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ClearTexSubImage("glClearTexSubImage");
glbinding::Function<void, GLenum> Binding::ClientActiveTexture("glClientActiveTexture");
glbinding::Function<void, GLenum> Binding::ClientActiveTextureARB("glClientActiveTextureARB");
glbinding::Function<void, GLenum> Binding::ClientActiveVertexStreamATI("glClientActiveVertexStreamATI");
glbinding::Function<void, ClientAttribMask> Binding::ClientAttribDefaultEXT("glClientAttribDefaultEXT");
glbinding::Function<GLenum, GLsync, SyncObjectMask, GLuint64> Binding::ClientWaitSync("glClientWaitSync");
glbinding::Function<void, GLenum, GLenum> Binding::ClipControl("glClipControl");
glbinding::Function<void, GLenum, const GLdouble *> Binding::ClipPlane("glClipPlane");
glbinding::Function<void, GLenum, const GLfloat *> Binding::ClipPlanefOES("glClipPlanefOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::ClipPlanexOES("glClipPlanexOES");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::Color3b("glColor3b");
glbinding::Function<void, const GLbyte *> Binding::Color3bv("glColor3bv");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Color3d("glColor3d");
glbinding::Function<void, const GLdouble *> Binding::Color3dv("glColor3dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Color3f("glColor3f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Color3fVertex3fSUN("glColor3fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *> Binding::Color3fVertex3fvSUN("glColor3fVertex3fvSUN");
glbinding::Function<void, const GLfloat *> Binding::Color3fv("glColor3fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Color3hNV("glColor3hNV");
glbinding::Function<void, const GLhalfNV *> Binding::Color3hvNV("glColor3hvNV");
glbinding::Function<void, GLint, GLint, GLint> Binding::Color3i("glColor3i");
glbinding::Function<void, const GLint *> Binding::Color3iv("glColor3iv");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::Color3s("glColor3s");
glbinding::Function<void, const GLshort *> Binding::Color3sv("glColor3sv");
glbinding::Function<void, GLubyte, GLubyte, GLubyte> Binding::Color3ub("glColor3ub");
glbinding::Function<void, const GLubyte *> Binding::Color3ubv("glColor3ubv");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::Color3ui("glColor3ui");
glbinding::Function<void, const GLuint *> Binding::Color3uiv("glColor3uiv");
glbinding::Function<void, GLushort, GLushort, GLushort> Binding::Color3us("glColor3us");
glbinding::Function<void, const GLushort *> Binding::Color3usv("glColor3usv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::Color3xOES("glColor3xOES");
glbinding::Function<void, const GLfixed *> Binding::Color3xvOES("glColor3xvOES");
glbinding::Function<void, GLbyte, GLbyte, GLbyte, GLbyte> Binding::Color4b("glColor4b");
glbinding::Function<void, const GLbyte *> Binding::Color4bv("glColor4bv");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Color4d("glColor4d");
glbinding::Function<void, const GLdouble *> Binding::Color4dv("glColor4dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Color4f("glColor4f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Color4fNormal3fVertex3fSUN("glColor4fNormal3fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *, const GLfloat *> Binding::Color4fNormal3fVertex3fvSUN("glColor4fNormal3fVertex3fvSUN");
glbinding::Function<void, const GLfloat *> Binding::Color4fv("glColor4fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Color4hNV("glColor4hNV");
glbinding::Function<void, const GLhalfNV *> Binding::Color4hvNV("glColor4hvNV");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::Color4i("glColor4i");
glbinding::Function<void, const GLint *> Binding::Color4iv("glColor4iv");
glbinding::Function<void, GLshort, GLshort, GLshort, GLshort> Binding::Color4s("glColor4s");
glbinding::Function<void, const GLshort *> Binding::Color4sv("glColor4sv");
glbinding::Function<void, GLubyte, GLubyte, GLubyte, GLubyte> Binding::Color4ub("glColor4ub");
glbinding::Function<void, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat> Binding::Color4ubVertex2fSUN("glColor4ubVertex2fSUN");
glbinding::Function<void, const GLubyte *, const GLfloat *> Binding::Color4ubVertex2fvSUN("glColor4ubVertex2fvSUN");
glbinding::Function<void, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::Color4ubVertex3fSUN("glColor4ubVertex3fSUN");
glbinding::Function<void, const GLubyte *, const GLfloat *> Binding::Color4ubVertex3fvSUN("glColor4ubVertex3fvSUN");
glbinding::Function<void, const GLubyte *> Binding::Color4ubv("glColor4ubv");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint> Binding::Color4ui("glColor4ui");
glbinding::Function<void, const GLuint *> Binding::Color4uiv("glColor4uiv");
glbinding::Function<void, GLushort, GLushort, GLushort, GLushort> Binding::Color4us("glColor4us");
glbinding::Function<void, const GLushort *> Binding::Color4usv("glColor4usv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::Color4xOES("glColor4xOES");
glbinding::Function<void, const GLfixed *> Binding::Color4xvOES("glColor4xvOES");
glbinding::Function<void, GLint, GLenum, GLsizei> Binding::ColorFormatNV("glColorFormatNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ColorFragmentOp1ATI("glColorFragmentOp1ATI");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ColorFragmentOp2ATI("glColorFragmentOp2ATI");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ColorFragmentOp3ATI("glColorFragmentOp3ATI");
glbinding::Function<void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMask("glColorMask");
glbinding::Function<void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaskIndexedEXT("glColorMaskIndexedEXT");
glbinding::Function<void, GLuint, GLboolean, GLboolean, GLboolean, GLboolean> Binding::ColorMaski("glColorMaski");
glbinding::Function<void, GLenum, GLenum> Binding::ColorMaterial("glColorMaterial");
glbinding::Function<void, GLenum, GLuint> Binding::ColorP3ui("glColorP3ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::ColorP3uiv("glColorP3uiv");
glbinding::Function<void, GLenum, GLuint> Binding::ColorP4ui("glColorP4ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::ColorP4uiv("glColorP4uiv");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::ColorPointer("glColorPointer");
glbinding::Function<void, GLint, GLenum, GLsizei, GLsizei, const void *> Binding::ColorPointerEXT("glColorPointerEXT");
glbinding::Function<void, GLint, GLenum, GLint, const void **, GLint> Binding::ColorPointerListIBM("glColorPointerListIBM");
glbinding::Function<void, GLint, GLenum, const void **> Binding::ColorPointervINTEL("glColorPointervINTEL");
glbinding::Function<void, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ColorSubTable("glColorSubTable");
glbinding::Function<void, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ColorSubTableEXT("glColorSubTableEXT");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ColorTable("glColorTable");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ColorTableEXT("glColorTableEXT");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::ColorTableParameterfv("glColorTableParameterfv");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::ColorTableParameterfvSGI("glColorTableParameterfvSGI");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::ColorTableParameteriv("glColorTableParameteriv");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::ColorTableParameterivSGI("glColorTableParameterivSGI");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ColorTableSGI("glColorTableSGI");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum> Binding::CombinerInputNV("glCombinerInputNV");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean> Binding::CombinerOutputNV("glCombinerOutputNV");
glbinding::Function<void, GLenum, GLfloat> Binding::CombinerParameterfNV("glCombinerParameterfNV");
glbinding::Function<void, GLenum, const GLfloat *> Binding::CombinerParameterfvNV("glCombinerParameterfvNV");
glbinding::Function<void, GLenum, GLint> Binding::CombinerParameteriNV("glCombinerParameteriNV");
glbinding::Function<void, GLenum, const GLint *> Binding::CombinerParameterivNV("glCombinerParameterivNV");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::CombinerStageParameterfvNV("glCombinerStageParameterfvNV");
glbinding::Function<void, GLuint, GLuint> Binding::CommandListSegmentsNV("glCommandListSegmentsNV");
glbinding::Function<void, GLuint> Binding::CompileCommandListNV("glCompileCommandListNV");
glbinding::Function<void, GLuint> Binding::CompileShader("glCompileShader");
glbinding::Function<void, GLhandleARB> Binding::CompileShaderARB("glCompileShaderARB");
glbinding::Function<void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::CompileShaderIncludeARB("glCompileShaderIncludeARB");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedMultiTexImage1DEXT("glCompressedMultiTexImage1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedMultiTexImage2DEXT("glCompressedMultiTexImage2DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedMultiTexImage3DEXT("glCompressedMultiTexImage3DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedMultiTexSubImage1DEXT("glCompressedMultiTexSubImage1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedMultiTexSubImage2DEXT("glCompressedMultiTexSubImage2DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedMultiTexSubImage3DEXT("glCompressedMultiTexSubImage3DEXT");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage1D("glCompressedTexImage1D");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage1DARB("glCompressedTexImage1DARB");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2D("glCompressedTexImage2D");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage2DARB("glCompressedTexImage2DARB");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3D("glCompressedTexImage3D");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTexImage3DARB("glCompressedTexImage3DARB");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage1D("glCompressedTexSubImage1D");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage1DARB("glCompressedTexSubImage1DARB");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2D("glCompressedTexSubImage2D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage2DARB("glCompressedTexSubImage2DARB");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3D("glCompressedTexSubImage3D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTexSubImage3DARB("glCompressedTexSubImage3DARB");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTextureImage1DEXT("glCompressedTextureImage1DEXT");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTextureImage2DEXT("glCompressedTextureImage2DEXT");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *> Binding::CompressedTextureImage3DEXT("glCompressedTextureImage3DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage1D("glCompressedTextureSubImage1D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage1DEXT("glCompressedTextureSubImage1DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage2D("glCompressedTextureSubImage2D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage2DEXT("glCompressedTextureSubImage2DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage3D("glCompressedTextureSubImage3D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *> Binding::CompressedTextureSubImage3DEXT("glCompressedTextureSubImage3DEXT");
glbinding::Function<void, GLenum, GLfloat> Binding::ConservativeRasterParameterfNV("glConservativeRasterParameterfNV");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter1D("glConvolutionFilter1D");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter1DEXT("glConvolutionFilter1DEXT");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter2D("glConvolutionFilter2D");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::ConvolutionFilter2DEXT("glConvolutionFilter2DEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::ConvolutionParameterf("glConvolutionParameterf");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::ConvolutionParameterfEXT("glConvolutionParameterfEXT");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::ConvolutionParameterfv("glConvolutionParameterfv");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::ConvolutionParameterfvEXT("glConvolutionParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::ConvolutionParameteri("glConvolutionParameteri");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::ConvolutionParameteriEXT("glConvolutionParameteriEXT");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::ConvolutionParameteriv("glConvolutionParameteriv");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::ConvolutionParameterivEXT("glConvolutionParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::ConvolutionParameterxOES("glConvolutionParameterxOES");
glbinding::Function<void, GLenum, GLenum, const GLfixed *> Binding::ConvolutionParameterxvOES("glConvolutionParameterxvOES");
glbinding::Function<void, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr> Binding::CopyBufferSubData("glCopyBufferSubData");
glbinding::Function<void, GLenum, GLsizei, GLint, GLint, GLsizei> Binding::CopyColorSubTable("glCopyColorSubTable");
glbinding::Function<void, GLenum, GLsizei, GLint, GLint, GLsizei> Binding::CopyColorSubTableEXT("glCopyColorSubTableEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyColorTable("glCopyColorTable");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyColorTableSGI("glCopyColorTableSGI");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyConvolutionFilter1D("glCopyConvolutionFilter1D");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei> Binding::CopyConvolutionFilter1DEXT("glCopyConvolutionFilter1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei> Binding::CopyConvolutionFilter2D("glCopyConvolutionFilter2D");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei> Binding::CopyConvolutionFilter2DEXT("glCopyConvolutionFilter2DEXT");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubData("glCopyImageSubData");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::CopyImageSubDataNV("glCopyImageSubDataNV");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyMultiTexImage1DEXT("glCopyMultiTexImage1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyMultiTexImage2DEXT("glCopyMultiTexImage2DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyMultiTexSubImage1DEXT("glCopyMultiTexSubImage1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyMultiTexSubImage2DEXT("glCopyMultiTexSubImage2DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyMultiTexSubImage3DEXT("glCopyMultiTexSubImage3DEXT");
glbinding::Function<void, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::CopyNamedBufferSubData("glCopyNamedBufferSubData");
glbinding::Function<void, GLuint, GLuint> Binding::CopyPathNV("glCopyPathNV");
glbinding::Function<void, GLint, GLint, GLsizei, GLsizei, GLenum> Binding::CopyPixels("glCopyPixels");
glbinding::Function<void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyTexImage1D("glCopyTexImage1D");
glbinding::Function<void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyTexImage1DEXT("glCopyTexImage1DEXT");
glbinding::Function<void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2D("glCopyTexImage2D");
glbinding::Function<void, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTexImage2DEXT("glCopyTexImage2DEXT");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTexSubImage1D("glCopyTexSubImage1D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTexSubImage1DEXT("glCopyTexSubImage1DEXT");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2D("glCopyTexSubImage2D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage2DEXT("glCopyTexSubImage2DEXT");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3D("glCopyTexSubImage3D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTexSubImage3DEXT("glCopyTexSubImage3DEXT");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint> Binding::CopyTextureImage1DEXT("glCopyTextureImage1DEXT");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint> Binding::CopyTextureImage2DEXT("glCopyTextureImage2DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTextureSubImage1D("glCopyTextureSubImage1D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei> Binding::CopyTextureSubImage1DEXT("glCopyTextureSubImage1DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage2D("glCopyTextureSubImage2D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage2DEXT("glCopyTextureSubImage2DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage3D("glCopyTextureSubImage3D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei> Binding::CopyTextureSubImage3DEXT("glCopyTextureSubImage3DEXT");
glbinding::Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverFillPathInstancedNV("glCoverFillPathInstancedNV");
glbinding::Function<void, GLuint, GLenum> Binding::CoverFillPathNV("glCoverFillPathNV");
glbinding::Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLenum, const GLfloat *> Binding::CoverStrokePathInstancedNV("glCoverStrokePathInstancedNV");
glbinding::Function<void, GLuint, GLenum> Binding::CoverStrokePathNV("glCoverStrokePathNV");
glbinding::Function<void, GLenum> Binding::CoverageModulationNV("glCoverageModulationNV");
glbinding::Function<void, GLsizei, const GLfloat *> Binding::CoverageModulationTableNV("glCoverageModulationTableNV");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateBuffers("glCreateBuffers");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateCommandListsNV("glCreateCommandListsNV");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateFramebuffers("glCreateFramebuffers");
glbinding::Function<void, GLuint, GLuint *> Binding::CreatePerfQueryINTEL("glCreatePerfQueryINTEL");
glbinding::Function<GLuint> Binding::CreateProgram("glCreateProgram");
glbinding::Function<GLhandleARB> Binding::CreateProgramObjectARB("glCreateProgramObjectARB");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateProgramPipelines("glCreateProgramPipelines");
glbinding::Function<void, GLenum, GLsizei, GLuint *> Binding::CreateQueries("glCreateQueries");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateRenderbuffers("glCreateRenderbuffers");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateSamplers("glCreateSamplers");
glbinding::Function<GLuint, GLenum> Binding::CreateShader("glCreateShader");
glbinding::Function<GLhandleARB, GLenum> Binding::CreateShaderObjectARB("glCreateShaderObjectARB");
glbinding::Function<GLuint, GLenum, const GLchar *> Binding::CreateShaderProgramEXT("glCreateShaderProgramEXT");
glbinding::Function<GLuint, GLenum, GLsizei, const GLchar *const*> Binding::CreateShaderProgramv("glCreateShaderProgramv");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateStatesNV("glCreateStatesNV");
glbinding::Function<GLsync, _cl_context *, _cl_event *, UnusedMask> Binding::CreateSyncFromCLeventARB("glCreateSyncFromCLeventARB");
glbinding::Function<void, GLenum, GLsizei, GLuint *> Binding::CreateTextures("glCreateTextures");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateTransformFeedbacks("glCreateTransformFeedbacks");
glbinding::Function<void, GLsizei, GLuint *> Binding::CreateVertexArrays("glCreateVertexArrays");
glbinding::Function<void, GLenum> Binding::CullFace("glCullFace");
glbinding::Function<void, GLenum, GLdouble *> Binding::CullParameterdvEXT("glCullParameterdvEXT");
glbinding::Function<void, GLenum, GLfloat *> Binding::CullParameterfvEXT("glCullParameterfvEXT");
glbinding::Function<void, GLint> Binding::CurrentPaletteMatrixARB("glCurrentPaletteMatrixARB");
glbinding::Function<void, GLDEBUGPROC, const void *> Binding::DebugMessageCallback("glDebugMessageCallback");
glbinding::Function<void, GLDEBUGPROCAMD, void *> Binding::DebugMessageCallbackAMD("glDebugMessageCallbackAMD");
glbinding::Function<void, GLDEBUGPROCARB, const void *> Binding::DebugMessageCallbackARB("glDebugMessageCallbackARB");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControl("glDebugMessageControl");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageControlARB("glDebugMessageControlARB");
glbinding::Function<void, GLenum, GLenum, GLsizei, const GLuint *, GLboolean> Binding::DebugMessageEnableAMD("glDebugMessageEnableAMD");
glbinding::Function<void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsert("glDebugMessageInsert");
glbinding::Function<void, GLenum, GLenum, GLuint, GLsizei, const GLchar *> Binding::DebugMessageInsertAMD("glDebugMessageInsertAMD");
glbinding::Function<void, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *> Binding::DebugMessageInsertARB("glDebugMessageInsertARB");
glbinding::Function<void, FfdMaskSGIX> Binding::DeformSGIX("glDeformSGIX");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::DeformationMap3dSGIX("glDeformationMap3dSGIX");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::DeformationMap3fSGIX("glDeformationMap3fSGIX");
glbinding::Function<void, GLuint, GLsizei> Binding::DeleteAsyncMarkersSGIX("glDeleteAsyncMarkersSGIX");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteBuffers("glDeleteBuffers");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteBuffersARB("glDeleteBuffersARB");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteCommandListsNV("glDeleteCommandListsNV");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteFencesAPPLE("glDeleteFencesAPPLE");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteFencesNV("glDeleteFencesNV");
glbinding::Function<void, GLuint> Binding::DeleteFragmentShaderATI("glDeleteFragmentShaderATI");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteFramebuffers("glDeleteFramebuffers");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteFramebuffersEXT("glDeleteFramebuffersEXT");
glbinding::Function<void, GLuint, GLsizei> Binding::DeleteLists("glDeleteLists");
glbinding::Function<void, GLint, const GLchar *> Binding::DeleteNamedStringARB("glDeleteNamedStringARB");
glbinding::Function<void, GLenum, GLuint, const GLuint *> Binding::DeleteNamesAMD("glDeleteNamesAMD");
glbinding::Function<void, GLhandleARB> Binding::DeleteObjectARB("glDeleteObjectARB");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteOcclusionQueriesNV("glDeleteOcclusionQueriesNV");
glbinding::Function<void, GLuint, GLsizei> Binding::DeletePathsNV("glDeletePathsNV");
glbinding::Function<void, GLsizei, GLuint *> Binding::DeletePerfMonitorsAMD("glDeletePerfMonitorsAMD");
glbinding::Function<void, GLuint> Binding::DeletePerfQueryINTEL("glDeletePerfQueryINTEL");
glbinding::Function<void, GLuint> Binding::DeleteProgram("glDeleteProgram");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteProgramPipelines("glDeleteProgramPipelines");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteProgramsARB("glDeleteProgramsARB");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteProgramsNV("glDeleteProgramsNV");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteQueries("glDeleteQueries");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteQueriesARB("glDeleteQueriesARB");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteRenderbuffers("glDeleteRenderbuffers");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteRenderbuffersEXT("glDeleteRenderbuffersEXT");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteSamplers("glDeleteSamplers");
glbinding::Function<void, GLuint> Binding::DeleteShader("glDeleteShader");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteStatesNV("glDeleteStatesNV");
glbinding::Function<void, GLsync> Binding::DeleteSync("glDeleteSync");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteTextures("glDeleteTextures");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteTexturesEXT("glDeleteTexturesEXT");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacks("glDeleteTransformFeedbacks");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteTransformFeedbacksNV("glDeleteTransformFeedbacksNV");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteVertexArrays("glDeleteVertexArrays");
glbinding::Function<void, GLsizei, const GLuint *> Binding::DeleteVertexArraysAPPLE("glDeleteVertexArraysAPPLE");
glbinding::Function<void, GLuint> Binding::DeleteVertexShaderEXT("glDeleteVertexShaderEXT");
glbinding::Function<void, GLclampd, GLclampd> Binding::DepthBoundsEXT("glDepthBoundsEXT");
glbinding::Function<void, GLdouble, GLdouble> Binding::DepthBoundsdNV("glDepthBoundsdNV");
glbinding::Function<void, GLenum> Binding::DepthFunc("glDepthFunc");
glbinding::Function<void, GLboolean> Binding::DepthMask("glDepthMask");
glbinding::Function<void, GLdouble, GLdouble> Binding::DepthRange("glDepthRange");
glbinding::Function<void, GLuint, GLsizei, const GLdouble *> Binding::DepthRangeArrayv("glDepthRangeArrayv");
glbinding::Function<void, GLuint, GLdouble, GLdouble> Binding::DepthRangeIndexed("glDepthRangeIndexed");
glbinding::Function<void, GLdouble, GLdouble> Binding::DepthRangedNV("glDepthRangedNV");
glbinding::Function<void, GLfloat, GLfloat> Binding::DepthRangef("glDepthRangef");
glbinding::Function<void, GLclampf, GLclampf> Binding::DepthRangefOES("glDepthRangefOES");
glbinding::Function<void, GLfixed, GLfixed> Binding::DepthRangexOES("glDepthRangexOES");
glbinding::Function<void, GLhandleARB, GLhandleARB> Binding::DetachObjectARB("glDetachObjectARB");
glbinding::Function<void, GLuint, GLuint> Binding::DetachShader("glDetachShader");
glbinding::Function<void, GLenum, GLsizei, const GLfloat *> Binding::DetailTexFuncSGIS("glDetailTexFuncSGIS");
glbinding::Function<void, GLenum> Binding::Disable("glDisable");
glbinding::Function<void, GLenum> Binding::DisableClientState("glDisableClientState");
glbinding::Function<void, GLenum, GLuint> Binding::DisableClientStateIndexedEXT("glDisableClientStateIndexedEXT");
glbinding::Function<void, GLenum, GLuint> Binding::DisableClientStateiEXT("glDisableClientStateiEXT");
glbinding::Function<void, GLenum, GLuint> Binding::DisableIndexedEXT("glDisableIndexedEXT");
glbinding::Function<void, GLuint> Binding::DisableVariantClientStateEXT("glDisableVariantClientStateEXT");
glbinding::Function<void, GLuint, GLuint> Binding::DisableVertexArrayAttrib("glDisableVertexArrayAttrib");
glbinding::Function<void, GLuint, GLuint> Binding::DisableVertexArrayAttribEXT("glDisableVertexArrayAttribEXT");
glbinding::Function<void, GLuint, GLenum> Binding::DisableVertexArrayEXT("glDisableVertexArrayEXT");
glbinding::Function<void, GLuint, GLenum> Binding::DisableVertexAttribAPPLE("glDisableVertexAttribAPPLE");
glbinding::Function<void, GLuint> Binding::DisableVertexAttribArray("glDisableVertexAttribArray");
glbinding::Function<void, GLuint> Binding::DisableVertexAttribArrayARB("glDisableVertexAttribArrayARB");
glbinding::Function<void, GLenum, GLuint> Binding::Disablei("glDisablei");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::DispatchCompute("glDispatchCompute");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::DispatchComputeGroupSizeARB("glDispatchComputeGroupSizeARB");
glbinding::Function<void, GLintptr> Binding::DispatchComputeIndirect("glDispatchComputeIndirect");
glbinding::Function<void, GLenum, GLint, GLsizei> Binding::DrawArrays("glDrawArrays");
glbinding::Function<void, GLenum, GLint, GLsizei> Binding::DrawArraysEXT("glDrawArraysEXT");
glbinding::Function<void, GLenum, const void *> Binding::DrawArraysIndirect("glDrawArraysIndirect");
glbinding::Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstanced("glDrawArraysInstanced");
glbinding::Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedARB("glDrawArraysInstancedARB");
glbinding::Function<void, GLenum, GLint, GLsizei, GLsizei, GLuint> Binding::DrawArraysInstancedBaseInstance("glDrawArraysInstancedBaseInstance");
glbinding::Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawArraysInstancedEXT("glDrawArraysInstancedEXT");
glbinding::Function<void, GLenum> Binding::DrawBuffer("glDrawBuffer");
glbinding::Function<void, GLsizei, const GLenum *> Binding::DrawBuffers("glDrawBuffers");
glbinding::Function<void, GLsizei, const GLenum *> Binding::DrawBuffersARB("glDrawBuffersARB");
glbinding::Function<void, GLsizei, const GLenum *> Binding::DrawBuffersATI("glDrawBuffersATI");
glbinding::Function<void, GLenum, const GLuint64 *, const GLsizei *, GLuint> Binding::DrawCommandsAddressNV("glDrawCommandsAddressNV");
glbinding::Function<void, GLenum, GLuint, const GLintptr *, const GLsizei *, GLuint> Binding::DrawCommandsNV("glDrawCommandsNV");
glbinding::Function<void, const GLuint64 *, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::DrawCommandsStatesAddressNV("glDrawCommandsStatesAddressNV");
glbinding::Function<void, GLuint, const GLintptr *, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::DrawCommandsStatesNV("glDrawCommandsStatesNV");
glbinding::Function<void, GLenum, GLint, GLsizei> Binding::DrawElementArrayAPPLE("glDrawElementArrayAPPLE");
glbinding::Function<void, GLenum, GLsizei> Binding::DrawElementArrayATI("glDrawElementArrayATI");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *> Binding::DrawElements("glDrawElements");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLint> Binding::DrawElementsBaseVertex("glDrawElementsBaseVertex");
glbinding::Function<void, GLenum, GLenum, const void *> Binding::DrawElementsIndirect("glDrawElementsIndirect");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstanced("glDrawElementsInstanced");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedARB("glDrawElementsInstancedARB");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint> Binding::DrawElementsInstancedBaseInstance("glDrawElementsInstancedBaseInstance");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint> Binding::DrawElementsInstancedBaseVertex("glDrawElementsInstancedBaseVertex");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint> Binding::DrawElementsInstancedBaseVertexBaseInstance("glDrawElementsInstancedBaseVertexBaseInstance");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLsizei> Binding::DrawElementsInstancedEXT("glDrawElementsInstancedEXT");
glbinding::Function<void, GLenum, GLint, GLsizei, GLsizei> Binding::DrawMeshArraysSUN("glDrawMeshArraysSUN");
glbinding::Function<void, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::DrawPixels("glDrawPixels");
glbinding::Function<void, GLenum, GLuint, GLuint, GLint, GLsizei> Binding::DrawRangeElementArrayAPPLE("glDrawRangeElementArrayAPPLE");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei> Binding::DrawRangeElementArrayATI("glDrawRangeElementArrayATI");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElements("glDrawRangeElements");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint> Binding::DrawRangeElementsBaseVertex("glDrawRangeElementsBaseVertex");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *> Binding::DrawRangeElementsEXT("glDrawRangeElementsEXT");
glbinding::Function<void, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::DrawTextureNV("glDrawTextureNV");
glbinding::Function<void, GLenum, GLuint> Binding::DrawTransformFeedback("glDrawTransformFeedback");
glbinding::Function<void, GLenum, GLuint, GLsizei> Binding::DrawTransformFeedbackInstanced("glDrawTransformFeedbackInstanced");
glbinding::Function<void, GLenum, GLuint> Binding::DrawTransformFeedbackNV("glDrawTransformFeedbackNV");
glbinding::Function<void, GLenum, GLuint, GLuint> Binding::DrawTransformFeedbackStream("glDrawTransformFeedbackStream");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei> Binding::DrawTransformFeedbackStreamInstanced("glDrawTransformFeedbackStreamInstanced");
glbinding::Function<void, GLboolean> Binding::EdgeFlag("glEdgeFlag");
glbinding::Function<void, GLsizei> Binding::EdgeFlagFormatNV("glEdgeFlagFormatNV");
glbinding::Function<void, GLsizei, const void *> Binding::EdgeFlagPointer("glEdgeFlagPointer");
glbinding::Function<void, GLsizei, GLsizei, const GLboolean *> Binding::EdgeFlagPointerEXT("glEdgeFlagPointerEXT");
glbinding::Function<void, GLint, const GLboolean **, GLint> Binding::EdgeFlagPointerListIBM("glEdgeFlagPointerListIBM");
glbinding::Function<void, const GLboolean *> Binding::EdgeFlagv("glEdgeFlagv");
glbinding::Function<void, GLenum, const void *> Binding::ElementPointerAPPLE("glElementPointerAPPLE");
glbinding::Function<void, GLenum, const void *> Binding::ElementPointerATI("glElementPointerATI");
glbinding::Function<void, GLenum> Binding::Enable("glEnable");
glbinding::Function<void, GLenum> Binding::EnableClientState("glEnableClientState");
glbinding::Function<void, GLenum, GLuint> Binding::EnableClientStateIndexedEXT("glEnableClientStateIndexedEXT");
glbinding::Function<void, GLenum, GLuint> Binding::EnableClientStateiEXT("glEnableClientStateiEXT");
glbinding::Function<void, GLenum, GLuint> Binding::EnableIndexedEXT("glEnableIndexedEXT");
glbinding::Function<void, GLuint> Binding::EnableVariantClientStateEXT("glEnableVariantClientStateEXT");
glbinding::Function<void, GLuint, GLuint> Binding::EnableVertexArrayAttrib("glEnableVertexArrayAttrib");
glbinding::Function<void, GLuint, GLuint> Binding::EnableVertexArrayAttribEXT("glEnableVertexArrayAttribEXT");
glbinding::Function<void, GLuint, GLenum> Binding::EnableVertexArrayEXT("glEnableVertexArrayEXT");
glbinding::Function<void, GLuint, GLenum> Binding::EnableVertexAttribAPPLE("glEnableVertexAttribAPPLE");
glbinding::Function<void, GLuint> Binding::EnableVertexAttribArray("glEnableVertexAttribArray");
glbinding::Function<void, GLuint> Binding::EnableVertexAttribArrayARB("glEnableVertexAttribArrayARB");
glbinding::Function<void, GLenum, GLuint> Binding::Enablei("glEnablei");
glbinding::Function<void> Binding::End("glEnd");
glbinding::Function<void> Binding::EndConditionalRender("glEndConditionalRender");
glbinding::Function<void> Binding::EndConditionalRenderNV("glEndConditionalRenderNV");
glbinding::Function<void> Binding::EndConditionalRenderNVX("glEndConditionalRenderNVX");
glbinding::Function<void> Binding::EndFragmentShaderATI("glEndFragmentShaderATI");
glbinding::Function<void> Binding::EndList("glEndList");
glbinding::Function<void> Binding::EndOcclusionQueryNV("glEndOcclusionQueryNV");
glbinding::Function<void, GLuint> Binding::EndPerfMonitorAMD("glEndPerfMonitorAMD");
glbinding::Function<void, GLuint> Binding::EndPerfQueryINTEL("glEndPerfQueryINTEL");
glbinding::Function<void, GLenum> Binding::EndQuery("glEndQuery");
glbinding::Function<void, GLenum> Binding::EndQueryARB("glEndQueryARB");
glbinding::Function<void, GLenum, GLuint> Binding::EndQueryIndexed("glEndQueryIndexed");
glbinding::Function<void> Binding::EndTransformFeedback("glEndTransformFeedback");
glbinding::Function<void> Binding::EndTransformFeedbackEXT("glEndTransformFeedbackEXT");
glbinding::Function<void> Binding::EndTransformFeedbackNV("glEndTransformFeedbackNV");
glbinding::Function<void> Binding::EndVertexShaderEXT("glEndVertexShaderEXT");
glbinding::Function<void, GLuint> Binding::EndVideoCaptureNV("glEndVideoCaptureNV");
glbinding::Function<void, GLdouble> Binding::EvalCoord1d("glEvalCoord1d");
glbinding::Function<void, const GLdouble *> Binding::EvalCoord1dv("glEvalCoord1dv");
glbinding::Function<void, GLfloat> Binding::EvalCoord1f("glEvalCoord1f");
glbinding::Function<void, const GLfloat *> Binding::EvalCoord1fv("glEvalCoord1fv");
glbinding::Function<void, GLfixed> Binding::EvalCoord1xOES("glEvalCoord1xOES");
glbinding::Function<void, const GLfixed *> Binding::EvalCoord1xvOES("glEvalCoord1xvOES");
glbinding::Function<void, GLdouble, GLdouble> Binding::EvalCoord2d("glEvalCoord2d");
glbinding::Function<void, const GLdouble *> Binding::EvalCoord2dv("glEvalCoord2dv");
glbinding::Function<void, GLfloat, GLfloat> Binding::EvalCoord2f("glEvalCoord2f");
glbinding::Function<void, const GLfloat *> Binding::EvalCoord2fv("glEvalCoord2fv");
glbinding::Function<void, GLfixed, GLfixed> Binding::EvalCoord2xOES("glEvalCoord2xOES");
glbinding::Function<void, const GLfixed *> Binding::EvalCoord2xvOES("glEvalCoord2xvOES");
glbinding::Function<void, GLenum, GLenum> Binding::EvalMapsNV("glEvalMapsNV");
glbinding::Function<void, GLenum, GLint, GLint> Binding::EvalMesh1("glEvalMesh1");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint> Binding::EvalMesh2("glEvalMesh2");
glbinding::Function<void, GLint> Binding::EvalPoint1("glEvalPoint1");
glbinding::Function<void, GLint, GLint> Binding::EvalPoint2("glEvalPoint2");
glbinding::Function<void> Binding::EvaluateDepthValuesARB("glEvaluateDepthValuesARB");
glbinding::Function<void, GLenum, GLuint, const GLfloat *> Binding::ExecuteProgramNV("glExecuteProgramNV");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::ExtractComponentEXT("glExtractComponentEXT");
glbinding::Function<void, GLsizei, GLenum, GLfloat *> Binding::FeedbackBuffer("glFeedbackBuffer");
glbinding::Function<void, GLsizei, GLenum, const GLfixed *> Binding::FeedbackBufferxOES("glFeedbackBufferxOES");
glbinding::Function<GLsync, GLenum, UnusedMask> Binding::FenceSync("glFenceSync");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum> Binding::FinalCombinerInputNV("glFinalCombinerInputNV");
glbinding::Function<void> Binding::Finish("glFinish");
glbinding::Function<GLint, GLuint *> Binding::FinishAsyncSGIX("glFinishAsyncSGIX");
glbinding::Function<void, GLuint> Binding::FinishFenceAPPLE("glFinishFenceAPPLE");
glbinding::Function<void, GLuint> Binding::FinishFenceNV("glFinishFenceNV");
glbinding::Function<void, GLenum, GLint> Binding::FinishObjectAPPLE("glFinishObjectAPPLE");
glbinding::Function<void> Binding::FinishTextureSUNX("glFinishTextureSUNX");
glbinding::Function<void> Binding::Flush("glFlush");
glbinding::Function<void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRange("glFlushMappedBufferRange");
glbinding::Function<void, GLenum, GLintptr, GLsizeiptr> Binding::FlushMappedBufferRangeAPPLE("glFlushMappedBufferRangeAPPLE");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRange("glFlushMappedNamedBufferRange");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr> Binding::FlushMappedNamedBufferRangeEXT("glFlushMappedNamedBufferRangeEXT");
glbinding::Function<void, GLenum> Binding::FlushPixelDataRangeNV("glFlushPixelDataRangeNV");
glbinding::Function<void> Binding::FlushRasterSGIX("glFlushRasterSGIX");
glbinding::Function<void, GLenum> Binding::FlushStaticDataIBM("glFlushStaticDataIBM");
glbinding::Function<void, GLsizei, void *> Binding::FlushVertexArrayRangeAPPLE("glFlushVertexArrayRangeAPPLE");
glbinding::Function<void> Binding::FlushVertexArrayRangeNV("glFlushVertexArrayRangeNV");
glbinding::Function<void, GLenum, GLsizei> Binding::FogCoordFormatNV("glFogCoordFormatNV");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::FogCoordPointer("glFogCoordPointer");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::FogCoordPointerEXT("glFogCoordPointerEXT");
glbinding::Function<void, GLenum, GLint, const void **, GLint> Binding::FogCoordPointerListIBM("glFogCoordPointerListIBM");
glbinding::Function<void, GLdouble> Binding::FogCoordd("glFogCoordd");
glbinding::Function<void, GLdouble> Binding::FogCoorddEXT("glFogCoorddEXT");
glbinding::Function<void, const GLdouble *> Binding::FogCoorddv("glFogCoorddv");
glbinding::Function<void, const GLdouble *> Binding::FogCoorddvEXT("glFogCoorddvEXT");
glbinding::Function<void, GLfloat> Binding::FogCoordf("glFogCoordf");
glbinding::Function<void, GLfloat> Binding::FogCoordfEXT("glFogCoordfEXT");
glbinding::Function<void, const GLfloat *> Binding::FogCoordfv("glFogCoordfv");
glbinding::Function<void, const GLfloat *> Binding::FogCoordfvEXT("glFogCoordfvEXT");
glbinding::Function<void, GLhalfNV> Binding::FogCoordhNV("glFogCoordhNV");
glbinding::Function<void, const GLhalfNV *> Binding::FogCoordhvNV("glFogCoordhvNV");
glbinding::Function<void, GLsizei, const GLfloat *> Binding::FogFuncSGIS("glFogFuncSGIS");
glbinding::Function<void, GLenum, GLfloat> Binding::Fogf("glFogf");
glbinding::Function<void, GLenum, const GLfloat *> Binding::Fogfv("glFogfv");
glbinding::Function<void, GLenum, GLint> Binding::Fogi("glFogi");
glbinding::Function<void, GLenum, const GLint *> Binding::Fogiv("glFogiv");
glbinding::Function<void, GLenum, GLfixed> Binding::FogxOES("glFogxOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::FogxvOES("glFogxvOES");
glbinding::Function<void, GLenum, GLenum> Binding::FragmentColorMaterialSGIX("glFragmentColorMaterialSGIX");
glbinding::Function<void, GLuint> Binding::FragmentCoverageColorNV("glFragmentCoverageColorNV");
glbinding::Function<void, GLenum, GLfloat> Binding::FragmentLightModelfSGIX("glFragmentLightModelfSGIX");
glbinding::Function<void, GLenum, const GLfloat *> Binding::FragmentLightModelfvSGIX("glFragmentLightModelfvSGIX");
glbinding::Function<void, GLenum, GLint> Binding::FragmentLightModeliSGIX("glFragmentLightModeliSGIX");
glbinding::Function<void, GLenum, const GLint *> Binding::FragmentLightModelivSGIX("glFragmentLightModelivSGIX");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::FragmentLightfSGIX("glFragmentLightfSGIX");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::FragmentLightfvSGIX("glFragmentLightfvSGIX");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::FragmentLightiSGIX("glFragmentLightiSGIX");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::FragmentLightivSGIX("glFragmentLightivSGIX");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::FragmentMaterialfSGIX("glFragmentMaterialfSGIX");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::FragmentMaterialfvSGIX("glFragmentMaterialfvSGIX");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::FragmentMaterialiSGIX("glFragmentMaterialiSGIX");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::FragmentMaterialivSGIX("glFragmentMaterialivSGIX");
glbinding::Function<void> Binding::FrameTerminatorGREMEDY("glFrameTerminatorGREMEDY");
glbinding::Function<void, GLint> Binding::FrameZoomSGIX("glFrameZoomSGIX");
glbinding::Function<void, GLuint, GLenum> Binding::FramebufferDrawBufferEXT("glFramebufferDrawBufferEXT");
glbinding::Function<void, GLuint, GLsizei, const GLenum *> Binding::FramebufferDrawBuffersEXT("glFramebufferDrawBuffersEXT");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::FramebufferParameteri("glFramebufferParameteri");
glbinding::Function<void, GLuint, GLenum> Binding::FramebufferReadBufferEXT("glFramebufferReadBufferEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbuffer("glFramebufferRenderbuffer");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint> Binding::FramebufferRenderbufferEXT("glFramebufferRenderbufferEXT");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvARB("glFramebufferSampleLocationsfvARB");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::FramebufferSampleLocationsfvNV("glFramebufferSampleLocationsfvNV");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture("glFramebufferTexture");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1D("glFramebufferTexture1D");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture1DEXT("glFramebufferTexture1DEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2D("glFramebufferTexture2D");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTexture2DEXT("glFramebufferTexture2DEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3D("glFramebufferTexture3D");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTexture3DEXT("glFramebufferTexture3DEXT");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureARB("glFramebufferTextureARB");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint> Binding::FramebufferTextureEXT("glFramebufferTextureEXT");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceARB("glFramebufferTextureFaceARB");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint, GLenum> Binding::FramebufferTextureFaceEXT("glFramebufferTextureFaceEXT");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayer("glFramebufferTextureLayer");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerARB("glFramebufferTextureLayerARB");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint, GLint> Binding::FramebufferTextureLayerEXT("glFramebufferTextureLayerEXT");
glbinding::Function<void, GLenum, GLenum, GLuint, GLint, GLint, GLsizei> Binding::FramebufferTextureMultiviewOVR("glFramebufferTextureMultiviewOVR");
glbinding::Function<void, GLuint> Binding::FreeObjectBufferATI("glFreeObjectBufferATI");
glbinding::Function<void, GLenum> Binding::FrontFace("glFrontFace");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Frustum("glFrustum");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::FrustumfOES("glFrustumfOES");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::FrustumxOES("glFrustumxOES");
glbinding::Function<GLuint, GLsizei> Binding::GenAsyncMarkersSGIX("glGenAsyncMarkersSGIX");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenBuffers("glGenBuffers");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenBuffersARB("glGenBuffersARB");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenFencesAPPLE("glGenFencesAPPLE");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenFencesNV("glGenFencesNV");
glbinding::Function<GLuint, GLuint> Binding::GenFragmentShadersATI("glGenFragmentShadersATI");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenFramebuffers("glGenFramebuffers");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenFramebuffersEXT("glGenFramebuffersEXT");
glbinding::Function<GLuint, GLsizei> Binding::GenLists("glGenLists");
glbinding::Function<void, GLenum, GLuint, GLuint *> Binding::GenNamesAMD("glGenNamesAMD");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenOcclusionQueriesNV("glGenOcclusionQueriesNV");
glbinding::Function<GLuint, GLsizei> Binding::GenPathsNV("glGenPathsNV");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenPerfMonitorsAMD("glGenPerfMonitorsAMD");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenProgramPipelines("glGenProgramPipelines");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenProgramsARB("glGenProgramsARB");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenProgramsNV("glGenProgramsNV");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenQueries("glGenQueries");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenQueriesARB("glGenQueriesARB");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenRenderbuffers("glGenRenderbuffers");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenRenderbuffersEXT("glGenRenderbuffersEXT");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenSamplers("glGenSamplers");
glbinding::Function<GLuint, GLenum, GLenum, GLenum, GLuint> Binding::GenSymbolsEXT("glGenSymbolsEXT");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenTextures("glGenTextures");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenTexturesEXT("glGenTexturesEXT");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenTransformFeedbacks("glGenTransformFeedbacks");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenTransformFeedbacksNV("glGenTransformFeedbacksNV");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenVertexArrays("glGenVertexArrays");
glbinding::Function<void, GLsizei, GLuint *> Binding::GenVertexArraysAPPLE("glGenVertexArraysAPPLE");
glbinding::Function<GLuint, GLuint> Binding::GenVertexShadersEXT("glGenVertexShadersEXT");
glbinding::Function<void, GLenum> Binding::GenerateMipmap("glGenerateMipmap");
glbinding::Function<void, GLenum> Binding::GenerateMipmapEXT("glGenerateMipmapEXT");
glbinding::Function<void, GLenum, GLenum> Binding::GenerateMultiTexMipmapEXT("glGenerateMultiTexMipmapEXT");
glbinding::Function<void, GLuint> Binding::GenerateTextureMipmap("glGenerateTextureMipmap");
glbinding::Function<void, GLuint, GLenum> Binding::GenerateTextureMipmapEXT("glGenerateTextureMipmapEXT");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint *> Binding::GetActiveAtomicCounterBufferiv("glGetActiveAtomicCounterBufferiv");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *> Binding::GetActiveAttrib("glGetActiveAttrib");
glbinding::Function<void, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *> Binding::GetActiveAttribARB("glGetActiveAttribARB");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveSubroutineName("glGetActiveSubroutineName");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveSubroutineUniformName("glGetActiveSubroutineUniformName");
glbinding::Function<void, GLuint, GLenum, GLuint, GLenum, GLint *> Binding::GetActiveSubroutineUniformiv("glGetActiveSubroutineUniformiv");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *> Binding::GetActiveUniform("glGetActiveUniform");
glbinding::Function<void, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *> Binding::GetActiveUniformARB("glGetActiveUniformARB");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveUniformBlockName("glGetActiveUniformBlockName");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint *> Binding::GetActiveUniformBlockiv("glGetActiveUniformBlockiv");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetActiveUniformName("glGetActiveUniformName");
glbinding::Function<void, GLuint, GLsizei, const GLuint *, GLenum, GLint *> Binding::GetActiveUniformsiv("glGetActiveUniformsiv");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetActiveVaryingNV("glGetActiveVaryingNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetArrayObjectfvATI("glGetArrayObjectfvATI");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetArrayObjectivATI("glGetArrayObjectivATI");
glbinding::Function<void, GLhandleARB, GLsizei, GLsizei *, GLhandleARB *> Binding::GetAttachedObjectsARB("glGetAttachedObjectsARB");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLuint *> Binding::GetAttachedShaders("glGetAttachedShaders");
glbinding::Function<GLint, GLuint, const GLchar *> Binding::GetAttribLocation("glGetAttribLocation");
glbinding::Function<GLint, GLhandleARB, const GLcharARB *> Binding::GetAttribLocationARB("glGetAttribLocationARB");
glbinding::Function<void, GLenum, GLuint, GLboolean *> Binding::GetBooleanIndexedvEXT("glGetBooleanIndexedvEXT");
glbinding::Function<void, GLenum, GLuint, GLboolean *> Binding::GetBooleani_v("glGetBooleani_v");
glbinding::Function<void, GLenum, GLboolean *> Binding::GetBooleanv("glGetBooleanv");
glbinding::Function<void, GLenum, GLenum, GLint64 *> Binding::GetBufferParameteri64v("glGetBufferParameteri64v");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetBufferParameteriv("glGetBufferParameteriv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetBufferParameterivARB("glGetBufferParameterivARB");
glbinding::Function<void, GLenum, GLenum, GLuint64EXT *> Binding::GetBufferParameterui64vNV("glGetBufferParameterui64vNV");
glbinding::Function<void, GLenum, GLenum, void **> Binding::GetBufferPointerv("glGetBufferPointerv");
glbinding::Function<void, GLenum, GLenum, void **> Binding::GetBufferPointervARB("glGetBufferPointervARB");
glbinding::Function<void, GLenum, GLintptr, GLsizeiptr, void *> Binding::GetBufferSubData("glGetBufferSubData");
glbinding::Function<void, GLenum, GLintptrARB, GLsizeiptrARB, void *> Binding::GetBufferSubDataARB("glGetBufferSubDataARB");
glbinding::Function<void, GLenum, GLdouble *> Binding::GetClipPlane("glGetClipPlane");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetClipPlanefOES("glGetClipPlanefOES");
glbinding::Function<void, GLenum, GLfixed *> Binding::GetClipPlanexOES("glGetClipPlanexOES");
glbinding::Function<void, GLenum, GLenum, GLenum, void *> Binding::GetColorTable("glGetColorTable");
glbinding::Function<void, GLenum, GLenum, GLenum, void *> Binding::GetColorTableEXT("glGetColorTableEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetColorTableParameterfv("glGetColorTableParameterfv");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetColorTableParameterfvEXT("glGetColorTableParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetColorTableParameterfvSGI("glGetColorTableParameterfvSGI");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetColorTableParameteriv("glGetColorTableParameteriv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetColorTableParameterivEXT("glGetColorTableParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetColorTableParameterivSGI("glGetColorTableParameterivSGI");
glbinding::Function<void, GLenum, GLenum, GLenum, void *> Binding::GetColorTableSGI("glGetColorTableSGI");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum, GLfloat *> Binding::GetCombinerInputParameterfvNV("glGetCombinerInputParameterfvNV");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum, GLint *> Binding::GetCombinerInputParameterivNV("glGetCombinerInputParameterivNV");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetCombinerOutputParameterfvNV("glGetCombinerOutputParameterfvNV");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetCombinerOutputParameterivNV("glGetCombinerOutputParameterivNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetCombinerStageParameterfvNV("glGetCombinerStageParameterfvNV");
glbinding::Function<GLuint, GLenum, GLuint> Binding::GetCommandHeaderNV("glGetCommandHeaderNV");
glbinding::Function<void, GLenum, GLenum, GLint, void *> Binding::GetCompressedMultiTexImageEXT("glGetCompressedMultiTexImageEXT");
glbinding::Function<void, GLenum, GLint, void *> Binding::GetCompressedTexImage("glGetCompressedTexImage");
glbinding::Function<void, GLenum, GLint, void *> Binding::GetCompressedTexImageARB("glGetCompressedTexImageARB");
glbinding::Function<void, GLuint, GLint, GLsizei, void *> Binding::GetCompressedTextureImage("glGetCompressedTextureImage");
glbinding::Function<void, GLuint, GLenum, GLint, void *> Binding::GetCompressedTextureImageEXT("glGetCompressedTextureImageEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, void *> Binding::GetCompressedTextureSubImage("glGetCompressedTextureSubImage");
glbinding::Function<void, GLenum, GLenum, GLenum, void *> Binding::GetConvolutionFilter("glGetConvolutionFilter");
glbinding::Function<void, GLenum, GLenum, GLenum, void *> Binding::GetConvolutionFilterEXT("glGetConvolutionFilterEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetConvolutionParameterfv("glGetConvolutionParameterfv");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetConvolutionParameterfvEXT("glGetConvolutionParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetConvolutionParameteriv("glGetConvolutionParameteriv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetConvolutionParameterivEXT("glGetConvolutionParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetConvolutionParameterxvOES("glGetConvolutionParameterxvOES");
glbinding::Function<void, GLsizei, GLfloat *> Binding::GetCoverageModulationTableNV("glGetCoverageModulationTableNV");
glbinding::Function<GLuint, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *> Binding::GetDebugMessageLog("glGetDebugMessageLog");
glbinding::Function<GLuint, GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar *> Binding::GetDebugMessageLogAMD("glGetDebugMessageLogAMD");
glbinding::Function<GLuint, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *> Binding::GetDebugMessageLogARB("glGetDebugMessageLogARB");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetDetailTexFuncSGIS("glGetDetailTexFuncSGIS");
glbinding::Function<void, GLenum, GLuint, GLdouble *> Binding::GetDoubleIndexedvEXT("glGetDoubleIndexedvEXT");
glbinding::Function<void, GLenum, GLuint, GLdouble *> Binding::GetDoublei_v("glGetDoublei_v");
glbinding::Function<void, GLenum, GLuint, GLdouble *> Binding::GetDoublei_vEXT("glGetDoublei_vEXT");
glbinding::Function<void, GLenum, GLdouble *> Binding::GetDoublev("glGetDoublev");
glbinding::Function<GLenum> Binding::GetError("glGetError");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetFenceivNV("glGetFenceivNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetFinalCombinerInputParameterfvNV("glGetFinalCombinerInputParameterfvNV");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetFinalCombinerInputParameterivNV("glGetFinalCombinerInputParameterivNV");
glbinding::Function<void, GLuint *> Binding::GetFirstPerfQueryIdINTEL("glGetFirstPerfQueryIdINTEL");
glbinding::Function<void, GLenum, GLfixed *> Binding::GetFixedvOES("glGetFixedvOES");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetFloatIndexedvEXT("glGetFloatIndexedvEXT");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetFloati_v("glGetFloati_v");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetFloati_vEXT("glGetFloati_vEXT");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetFloatv("glGetFloatv");
glbinding::Function<void, GLfloat *> Binding::GetFogFuncSGIS("glGetFogFuncSGIS");
glbinding::Function<GLint, GLuint, const GLchar *> Binding::GetFragDataIndex("glGetFragDataIndex");
glbinding::Function<GLint, GLuint, const GLchar *> Binding::GetFragDataLocation("glGetFragDataLocation");
glbinding::Function<GLint, GLuint, const GLchar *> Binding::GetFragDataLocationEXT("glGetFragDataLocationEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetFragmentLightfvSGIX("glGetFragmentLightfvSGIX");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetFragmentLightivSGIX("glGetFragmentLightivSGIX");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetFragmentMaterialfvSGIX("glGetFragmentMaterialfvSGIX");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetFragmentMaterialivSGIX("glGetFragmentMaterialivSGIX");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameteriv("glGetFramebufferAttachmentParameteriv");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetFramebufferAttachmentParameterivEXT("glGetFramebufferAttachmentParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetFramebufferParameteriv("glGetFramebufferParameteriv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetFramebufferParameterivEXT("glGetFramebufferParameterivEXT");
glbinding::Function<GLenum> Binding::GetGraphicsResetStatus("glGetGraphicsResetStatus");
glbinding::Function<GLenum> Binding::GetGraphicsResetStatusARB("glGetGraphicsResetStatusARB");
glbinding::Function<GLhandleARB, GLenum> Binding::GetHandleARB("glGetHandleARB");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetHistogram("glGetHistogram");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetHistogramEXT("glGetHistogramEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetHistogramParameterfv("glGetHistogramParameterfv");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetHistogramParameterfvEXT("glGetHistogramParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetHistogramParameteriv("glGetHistogramParameteriv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetHistogramParameterivEXT("glGetHistogramParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetHistogramParameterxvOES("glGetHistogramParameterxvOES");
glbinding::Function<GLuint64, GLuint, GLint, GLboolean, GLint, GLenum> Binding::GetImageHandleARB("glGetImageHandleARB");
glbinding::Function<GLuint64, GLuint, GLint, GLboolean, GLint, GLenum> Binding::GetImageHandleNV("glGetImageHandleNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetImageTransformParameterfvHP("glGetImageTransformParameterfvHP");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetImageTransformParameterivHP("glGetImageTransformParameterivHP");
glbinding::Function<void, GLhandleARB, GLsizei, GLsizei *, GLcharARB *> Binding::GetInfoLogARB("glGetInfoLogARB");
glbinding::Function<GLint> Binding::GetInstrumentsSGIX("glGetInstrumentsSGIX");
glbinding::Function<void, GLenum, GLuint, GLint64 *> Binding::GetInteger64i_v("glGetInteger64i_v");
glbinding::Function<void, GLenum, GLint64 *> Binding::GetInteger64v("glGetInteger64v");
glbinding::Function<void, GLenum, GLuint, GLint *> Binding::GetIntegerIndexedvEXT("glGetIntegerIndexedvEXT");
glbinding::Function<void, GLenum, GLuint, GLint *> Binding::GetIntegeri_v("glGetIntegeri_v");
glbinding::Function<void, GLenum, GLuint, GLuint64EXT *> Binding::GetIntegerui64i_vNV("glGetIntegerui64i_vNV");
glbinding::Function<void, GLenum, GLuint64EXT *> Binding::GetIntegerui64vNV("glGetIntegerui64vNV");
glbinding::Function<void, GLenum, GLint *> Binding::GetIntegerv("glGetIntegerv");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLenum, GLsizei, GLint *> Binding::GetInternalformatSampleivNV("glGetInternalformatSampleivNV");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, GLint64 *> Binding::GetInternalformati64v("glGetInternalformati64v");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, GLint *> Binding::GetInternalformativ("glGetInternalformativ");
glbinding::Function<void, GLuint, GLenum, GLboolean *> Binding::GetInvariantBooleanvEXT("glGetInvariantBooleanvEXT");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetInvariantFloatvEXT("glGetInvariantFloatvEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetInvariantIntegervEXT("glGetInvariantIntegervEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetLightfv("glGetLightfv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetLightiv("glGetLightiv");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetLightxOES("glGetLightxOES");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetListParameterfvSGIX("glGetListParameterfvSGIX");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetListParameterivSGIX("glGetListParameterivSGIX");
glbinding::Function<void, GLuint, GLenum, GLboolean *> Binding::GetLocalConstantBooleanvEXT("glGetLocalConstantBooleanvEXT");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetLocalConstantFloatvEXT("glGetLocalConstantFloatvEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetLocalConstantIntegervEXT("glGetLocalConstantIntegervEXT");
glbinding::Function<void, GLenum, GLuint, GLenum, GLfloat *> Binding::GetMapAttribParameterfvNV("glGetMapAttribParameterfvNV");
glbinding::Function<void, GLenum, GLuint, GLenum, GLint *> Binding::GetMapAttribParameterivNV("glGetMapAttribParameterivNV");
glbinding::Function<void, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, void *> Binding::GetMapControlPointsNV("glGetMapControlPointsNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetMapParameterfvNV("glGetMapParameterfvNV");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetMapParameterivNV("glGetMapParameterivNV");
glbinding::Function<void, GLenum, GLenum, GLdouble *> Binding::GetMapdv("glGetMapdv");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetMapfv("glGetMapfv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetMapiv("glGetMapiv");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetMapxvOES("glGetMapxvOES");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetMaterialfv("glGetMaterialfv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetMaterialiv("glGetMaterialiv");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::GetMaterialxOES("glGetMaterialxOES");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetMinmax("glGetMinmax");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, void *> Binding::GetMinmaxEXT("glGetMinmaxEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetMinmaxParameterfv("glGetMinmaxParameterfv");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetMinmaxParameterfvEXT("glGetMinmaxParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetMinmaxParameteriv("glGetMinmaxParameteriv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetMinmaxParameterivEXT("glGetMinmaxParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetMultiTexEnvfvEXT("glGetMultiTexEnvfvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexEnvivEXT("glGetMultiTexEnvivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLdouble *> Binding::GetMultiTexGendvEXT("glGetMultiTexGendvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetMultiTexGenfvEXT("glGetMultiTexGenfvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexGenivEXT("glGetMultiTexGenivEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLenum, void *> Binding::GetMultiTexImageEXT("glGetMultiTexImageEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLfloat *> Binding::GetMultiTexLevelParameterfvEXT("glGetMultiTexLevelParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLenum, GLint *> Binding::GetMultiTexLevelParameterivEXT("glGetMultiTexLevelParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexParameterIivEXT("glGetMultiTexParameterIivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint *> Binding::GetMultiTexParameterIuivEXT("glGetMultiTexParameterIuivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat *> Binding::GetMultiTexParameterfvEXT("glGetMultiTexParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint *> Binding::GetMultiTexParameterivEXT("glGetMultiTexParameterivEXT");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetMultisamplefv("glGetMultisamplefv");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetMultisamplefvNV("glGetMultisamplefvNV");
glbinding::Function<void, GLuint, GLenum, GLint64 *> Binding::GetNamedBufferParameteri64v("glGetNamedBufferParameteri64v");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetNamedBufferParameteriv("glGetNamedBufferParameteriv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetNamedBufferParameterivEXT("glGetNamedBufferParameterivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint64EXT *> Binding::GetNamedBufferParameterui64vNV("glGetNamedBufferParameterui64vNV");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetNamedBufferPointerv("glGetNamedBufferPointerv");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetNamedBufferPointervEXT("glGetNamedBufferPointervEXT");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr, void *> Binding::GetNamedBufferSubData("glGetNamedBufferSubData");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr, void *> Binding::GetNamedBufferSubDataEXT("glGetNamedBufferSubDataEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetNamedFramebufferAttachmentParameteriv("glGetNamedFramebufferAttachmentParameteriv");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetNamedFramebufferAttachmentParameterivEXT("glGetNamedFramebufferAttachmentParameterivEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetNamedFramebufferParameteriv("glGetNamedFramebufferParameteriv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetNamedFramebufferParameterivEXT("glGetNamedFramebufferParameterivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint *> Binding::GetNamedProgramLocalParameterIivEXT("glGetNamedProgramLocalParameterIivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLuint *> Binding::GetNamedProgramLocalParameterIuivEXT("glGetNamedProgramLocalParameterIuivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLdouble *> Binding::GetNamedProgramLocalParameterdvEXT("glGetNamedProgramLocalParameterdvEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLfloat *> Binding::GetNamedProgramLocalParameterfvEXT("glGetNamedProgramLocalParameterfvEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, void *> Binding::GetNamedProgramStringEXT("glGetNamedProgramStringEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetNamedProgramivEXT("glGetNamedProgramivEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetNamedRenderbufferParameteriv("glGetNamedRenderbufferParameteriv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetNamedRenderbufferParameterivEXT("glGetNamedRenderbufferParameterivEXT");
glbinding::Function<void, GLint, const GLchar *, GLsizei, GLint *, GLchar *> Binding::GetNamedStringARB("glGetNamedStringARB");
glbinding::Function<void, GLint, const GLchar *, GLenum, GLint *> Binding::GetNamedStringivARB("glGetNamedStringivARB");
glbinding::Function<void, GLuint, GLuint *> Binding::GetNextPerfQueryIdINTEL("glGetNextPerfQueryIdINTEL");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetObjectBufferfvATI("glGetObjectBufferfvATI");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetObjectBufferivATI("glGetObjectBufferivATI");
glbinding::Function<void, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetObjectLabel("glGetObjectLabel");
glbinding::Function<void, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetObjectLabelEXT("glGetObjectLabelEXT");
glbinding::Function<void, GLhandleARB, GLenum, GLfloat *> Binding::GetObjectParameterfvARB("glGetObjectParameterfvARB");
glbinding::Function<void, GLenum, GLuint, GLenum, GLint *> Binding::GetObjectParameterivAPPLE("glGetObjectParameterivAPPLE");
glbinding::Function<void, GLhandleARB, GLenum, GLint *> Binding::GetObjectParameterivARB("glGetObjectParameterivARB");
glbinding::Function<void, const void *, GLsizei, GLsizei *, GLchar *> Binding::GetObjectPtrLabel("glGetObjectPtrLabel");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetOcclusionQueryivNV("glGetOcclusionQueryivNV");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetOcclusionQueryuivNV("glGetOcclusionQueryuivNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetPathColorGenfvNV("glGetPathColorGenfvNV");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetPathColorGenivNV("glGetPathColorGenivNV");
glbinding::Function<void, GLuint, GLubyte *> Binding::GetPathCommandsNV("glGetPathCommandsNV");
glbinding::Function<void, GLuint, GLfloat *> Binding::GetPathCoordsNV("glGetPathCoordsNV");
glbinding::Function<void, GLuint, GLfloat *> Binding::GetPathDashArrayNV("glGetPathDashArrayNV");
glbinding::Function<GLfloat, GLuint, GLsizei, GLsizei> Binding::GetPathLengthNV("glGetPathLengthNV");
glbinding::Function<void, PathRenderingMaskNV, GLuint, GLsizei, GLsizei, GLfloat *> Binding::GetPathMetricRangeNV("glGetPathMetricRangeNV");
glbinding::Function<void, PathRenderingMaskNV, GLsizei, GLenum, const void *, GLuint, GLsizei, GLfloat *> Binding::GetPathMetricsNV("glGetPathMetricsNV");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetPathParameterfvNV("glGetPathParameterfvNV");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetPathParameterivNV("glGetPathParameterivNV");
glbinding::Function<void, GLenum, GLsizei, GLenum, const void *, GLuint, GLfloat, GLfloat, GLenum, GLfloat *> Binding::GetPathSpacingNV("glGetPathSpacingNV");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetPathTexGenfvNV("glGetPathTexGenfvNV");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetPathTexGenivNV("glGetPathTexGenivNV");
glbinding::Function<void, GLuint, GLuint, GLuint, GLchar *, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *, GLuint64 *> Binding::GetPerfCounterInfoINTEL("glGetPerfCounterInfoINTEL");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLuint *, GLint *> Binding::GetPerfMonitorCounterDataAMD("glGetPerfMonitorCounterDataAMD");
glbinding::Function<void, GLuint, GLuint, GLenum, void *> Binding::GetPerfMonitorCounterInfoAMD("glGetPerfMonitorCounterInfoAMD");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetPerfMonitorCounterStringAMD("glGetPerfMonitorCounterStringAMD");
glbinding::Function<void, GLuint, GLint *, GLint *, GLsizei, GLuint *> Binding::GetPerfMonitorCountersAMD("glGetPerfMonitorCountersAMD");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetPerfMonitorGroupStringAMD("glGetPerfMonitorGroupStringAMD");
glbinding::Function<void, GLint *, GLsizei, GLuint *> Binding::GetPerfMonitorGroupsAMD("glGetPerfMonitorGroupsAMD");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLvoid *, GLuint *> Binding::GetPerfQueryDataINTEL("glGetPerfQueryDataINTEL");
glbinding::Function<void, GLchar *, GLuint *> Binding::GetPerfQueryIdByNameINTEL("glGetPerfQueryIdByNameINTEL");
glbinding::Function<void, GLuint, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *> Binding::GetPerfQueryInfoINTEL("glGetPerfQueryInfoINTEL");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetPixelMapfv("glGetPixelMapfv");
glbinding::Function<void, GLenum, GLuint *> Binding::GetPixelMapuiv("glGetPixelMapuiv");
glbinding::Function<void, GLenum, GLushort *> Binding::GetPixelMapusv("glGetPixelMapusv");
glbinding::Function<void, GLenum, GLint, GLfixed *> Binding::GetPixelMapxv("glGetPixelMapxv");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetPixelTexGenParameterfvSGIS("glGetPixelTexGenParameterfvSGIS");
glbinding::Function<void, GLenum, GLint *> Binding::GetPixelTexGenParameterivSGIS("glGetPixelTexGenParameterivSGIS");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetPixelTransformParameterfvEXT("glGetPixelTransformParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetPixelTransformParameterivEXT("glGetPixelTransformParameterivEXT");
glbinding::Function<void, GLenum, GLuint, void **> Binding::GetPointerIndexedvEXT("glGetPointerIndexedvEXT");
glbinding::Function<void, GLenum, GLuint, void **> Binding::GetPointeri_vEXT("glGetPointeri_vEXT");
glbinding::Function<void, GLenum, void **> Binding::GetPointerv("glGetPointerv");
glbinding::Function<void, GLenum, void **> Binding::GetPointervEXT("glGetPointervEXT");
glbinding::Function<void, GLubyte *> Binding::GetPolygonStipple("glGetPolygonStipple");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLenum *, void *> Binding::GetProgramBinary("glGetProgramBinary");
glbinding::Function<void, GLenum, GLuint, GLint *> Binding::GetProgramEnvParameterIivNV("glGetProgramEnvParameterIivNV");
glbinding::Function<void, GLenum, GLuint, GLuint *> Binding::GetProgramEnvParameterIuivNV("glGetProgramEnvParameterIuivNV");
glbinding::Function<void, GLenum, GLuint, GLdouble *> Binding::GetProgramEnvParameterdvARB("glGetProgramEnvParameterdvARB");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetProgramEnvParameterfvARB("glGetProgramEnvParameterfvARB");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramInfoLog("glGetProgramInfoLog");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetProgramInterfaceiv("glGetProgramInterfaceiv");
glbinding::Function<void, GLenum, GLuint, GLint *> Binding::GetProgramLocalParameterIivNV("glGetProgramLocalParameterIivNV");
glbinding::Function<void, GLenum, GLuint, GLuint *> Binding::GetProgramLocalParameterIuivNV("glGetProgramLocalParameterIuivNV");
glbinding::Function<void, GLenum, GLuint, GLdouble *> Binding::GetProgramLocalParameterdvARB("glGetProgramLocalParameterdvARB");
glbinding::Function<void, GLenum, GLuint, GLfloat *> Binding::GetProgramLocalParameterfvARB("glGetProgramLocalParameterfvARB");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, GLdouble *> Binding::GetProgramNamedParameterdvNV("glGetProgramNamedParameterdvNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, GLfloat *> Binding::GetProgramNamedParameterfvNV("glGetProgramNamedParameterfvNV");
glbinding::Function<void, GLenum, GLuint, GLenum, GLdouble *> Binding::GetProgramParameterdvNV("glGetProgramParameterdvNV");
glbinding::Function<void, GLenum, GLuint, GLenum, GLfloat *> Binding::GetProgramParameterfvNV("glGetProgramParameterfvNV");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramPipelineInfoLog("glGetProgramPipelineInfoLog");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetProgramPipelineiv("glGetProgramPipelineiv");
glbinding::Function<GLuint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceIndex("glGetProgramResourceIndex");
glbinding::Function<GLint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceLocation("glGetProgramResourceLocation");
glbinding::Function<GLint, GLuint, GLenum, const GLchar *> Binding::GetProgramResourceLocationIndex("glGetProgramResourceLocationIndex");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetProgramResourceName("glGetProgramResourceName");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLfloat *> Binding::GetProgramResourcefvNV("glGetProgramResourcefvNV");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *> Binding::GetProgramResourceiv("glGetProgramResourceiv");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetProgramStageiv("glGetProgramStageiv");
glbinding::Function<void, GLenum, GLenum, void *> Binding::GetProgramStringARB("glGetProgramStringARB");
glbinding::Function<void, GLuint, GLenum, GLubyte *> Binding::GetProgramStringNV("glGetProgramStringNV");
glbinding::Function<void, GLenum, GLuint, GLuint *> Binding::GetProgramSubroutineParameteruivNV("glGetProgramSubroutineParameteruivNV");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetProgramiv("glGetProgramiv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetProgramivARB("glGetProgramivARB");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetProgramivNV("glGetProgramivNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjecti64v("glGetQueryBufferObjecti64v");
glbinding::Function<void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjectiv("glGetQueryBufferObjectiv");
glbinding::Function<void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjectui64v("glGetQueryBufferObjectui64v");
glbinding::Function<void, GLuint, GLuint, GLenum, GLintptr> Binding::GetQueryBufferObjectuiv("glGetQueryBufferObjectuiv");
glbinding::Function<void, GLenum, GLuint, GLenum, GLint *> Binding::GetQueryIndexediv("glGetQueryIndexediv");
glbinding::Function<void, GLuint, GLenum, GLint64 *> Binding::GetQueryObjecti64v("glGetQueryObjecti64v");
glbinding::Function<void, GLuint, GLenum, GLint64 *> Binding::GetQueryObjecti64vEXT("glGetQueryObjecti64vEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetQueryObjectiv("glGetQueryObjectiv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetQueryObjectivARB("glGetQueryObjectivARB");
glbinding::Function<void, GLuint, GLenum, GLuint64 *> Binding::GetQueryObjectui64v("glGetQueryObjectui64v");
glbinding::Function<void, GLuint, GLenum, GLuint64 *> Binding::GetQueryObjectui64vEXT("glGetQueryObjectui64vEXT");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetQueryObjectuiv("glGetQueryObjectuiv");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetQueryObjectuivARB("glGetQueryObjectuivARB");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetQueryiv("glGetQueryiv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetQueryivARB("glGetQueryivARB");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameteriv("glGetRenderbufferParameteriv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetRenderbufferParameterivEXT("glGetRenderbufferParameterivEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetSamplerParameterIiv("glGetSamplerParameterIiv");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetSamplerParameterIuiv("glGetSamplerParameterIuiv");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetSamplerParameterfv("glGetSamplerParameterfv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetSamplerParameteriv("glGetSamplerParameteriv");
glbinding::Function<void, GLenum, GLenum, GLenum, void *, void *, void *> Binding::GetSeparableFilter("glGetSeparableFilter");
glbinding::Function<void, GLenum, GLenum, GLenum, void *, void *, void *> Binding::GetSeparableFilterEXT("glGetSeparableFilterEXT");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetShaderInfoLog("glGetShaderInfoLog");
glbinding::Function<void, GLenum, GLenum, GLint *, GLint *> Binding::GetShaderPrecisionFormat("glGetShaderPrecisionFormat");
glbinding::Function<void, GLuint, GLsizei, GLsizei *, GLchar *> Binding::GetShaderSource("glGetShaderSource");
glbinding::Function<void, GLhandleARB, GLsizei, GLsizei *, GLcharARB *> Binding::GetShaderSourceARB("glGetShaderSourceARB");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetShaderiv("glGetShaderiv");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetSharpenTexFuncSGIS("glGetSharpenTexFuncSGIS");
glbinding::Function<GLushort, GLenum> Binding::GetStageIndexNV("glGetStageIndexNV");
glbinding::Function<const GLubyte *, GLenum> Binding::GetString("glGetString");
glbinding::Function<const GLubyte *, GLenum, GLuint> Binding::GetStringi("glGetStringi");
glbinding::Function<GLuint, GLuint, GLenum, const GLchar *> Binding::GetSubroutineIndex("glGetSubroutineIndex");
glbinding::Function<GLint, GLuint, GLenum, const GLchar *> Binding::GetSubroutineUniformLocation("glGetSubroutineUniformLocation");
glbinding::Function<void, GLsync, GLenum, GLsizei, GLsizei *, GLint *> Binding::GetSynciv("glGetSynciv");
glbinding::Function<void, GLenum, GLfloat *> Binding::GetTexBumpParameterfvATI("glGetTexBumpParameterfvATI");
glbinding::Function<void, GLenum, GLint *> Binding::GetTexBumpParameterivATI("glGetTexBumpParameterivATI");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetTexEnvfv("glGetTexEnvfv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetTexEnviv("glGetTexEnviv");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetTexEnvxvOES("glGetTexEnvxvOES");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetTexFilterFuncSGIS("glGetTexFilterFuncSGIS");
glbinding::Function<void, GLenum, GLenum, GLdouble *> Binding::GetTexGendv("glGetTexGendv");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetTexGenfv("glGetTexGenfv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetTexGeniv("glGetTexGeniv");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetTexGenxvOES("glGetTexGenxvOES");
glbinding::Function<void, GLenum, GLint, GLenum, GLenum, void *> Binding::GetTexImage("glGetTexImage");
glbinding::Function<void, GLenum, GLint, GLenum, GLfloat *> Binding::GetTexLevelParameterfv("glGetTexLevelParameterfv");
glbinding::Function<void, GLenum, GLint, GLenum, GLint *> Binding::GetTexLevelParameteriv("glGetTexLevelParameteriv");
glbinding::Function<void, GLenum, GLint, GLenum, GLfixed *> Binding::GetTexLevelParameterxvOES("glGetTexLevelParameterxvOES");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetTexParameterIiv("glGetTexParameterIiv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetTexParameterIivEXT("glGetTexParameterIivEXT");
glbinding::Function<void, GLenum, GLenum, GLuint *> Binding::GetTexParameterIuiv("glGetTexParameterIuiv");
glbinding::Function<void, GLenum, GLenum, GLuint *> Binding::GetTexParameterIuivEXT("glGetTexParameterIuivEXT");
glbinding::Function<void, GLenum, GLenum, void **> Binding::GetTexParameterPointervAPPLE("glGetTexParameterPointervAPPLE");
glbinding::Function<void, GLenum, GLenum, GLfloat *> Binding::GetTexParameterfv("glGetTexParameterfv");
glbinding::Function<void, GLenum, GLenum, GLint *> Binding::GetTexParameteriv("glGetTexParameteriv");
glbinding::Function<void, GLenum, GLenum, GLfixed *> Binding::GetTexParameterxvOES("glGetTexParameterxvOES");
glbinding::Function<GLuint64, GLuint> Binding::GetTextureHandleARB("glGetTextureHandleARB");
glbinding::Function<GLuint64, GLuint> Binding::GetTextureHandleNV("glGetTextureHandleNV");
glbinding::Function<void, GLuint, GLint, GLenum, GLenum, GLsizei, void *> Binding::GetTextureImage("glGetTextureImage");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLenum, void *> Binding::GetTextureImageEXT("glGetTextureImageEXT");
glbinding::Function<void, GLuint, GLint, GLenum, GLfloat *> Binding::GetTextureLevelParameterfv("glGetTextureLevelParameterfv");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLfloat *> Binding::GetTextureLevelParameterfvEXT("glGetTextureLevelParameterfvEXT");
glbinding::Function<void, GLuint, GLint, GLenum, GLint *> Binding::GetTextureLevelParameteriv("glGetTextureLevelParameteriv");
glbinding::Function<void, GLuint, GLenum, GLint, GLenum, GLint *> Binding::GetTextureLevelParameterivEXT("glGetTextureLevelParameterivEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetTextureParameterIiv("glGetTextureParameterIiv");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetTextureParameterIivEXT("glGetTextureParameterIivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetTextureParameterIuiv("glGetTextureParameterIuiv");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint *> Binding::GetTextureParameterIuivEXT("glGetTextureParameterIuivEXT");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetTextureParameterfv("glGetTextureParameterfv");
glbinding::Function<void, GLuint, GLenum, GLenum, GLfloat *> Binding::GetTextureParameterfvEXT("glGetTextureParameterfvEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetTextureParameteriv("glGetTextureParameteriv");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint *> Binding::GetTextureParameterivEXT("glGetTextureParameterivEXT");
glbinding::Function<GLuint64, GLuint, GLuint> Binding::GetTextureSamplerHandleARB("glGetTextureSamplerHandleARB");
glbinding::Function<GLuint64, GLuint, GLuint> Binding::GetTextureSamplerHandleNV("glGetTextureSamplerHandleNV");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::GetTextureSubImage("glGetTextureSubImage");
glbinding::Function<void, GLenum, GLuint, GLenum, GLint *> Binding::GetTrackMatrixivNV("glGetTrackMatrixivNV");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetTransformFeedbackVarying("glGetTransformFeedbackVarying");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *> Binding::GetTransformFeedbackVaryingEXT("glGetTransformFeedbackVaryingEXT");
glbinding::Function<void, GLuint, GLuint, GLint *> Binding::GetTransformFeedbackVaryingNV("glGetTransformFeedbackVaryingNV");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint64 *> Binding::GetTransformFeedbacki64_v("glGetTransformFeedbacki64_v");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint *> Binding::GetTransformFeedbacki_v("glGetTransformFeedbacki_v");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetTransformFeedbackiv("glGetTransformFeedbackiv");
glbinding::Function<GLuint, GLuint, const GLchar *> Binding::GetUniformBlockIndex("glGetUniformBlockIndex");
glbinding::Function<GLint, GLuint, GLint> Binding::GetUniformBufferSizeEXT("glGetUniformBufferSizeEXT");
glbinding::Function<void, GLuint, GLsizei, const GLchar *const*, GLuint *> Binding::GetUniformIndices("glGetUniformIndices");
glbinding::Function<GLint, GLuint, const GLchar *> Binding::GetUniformLocation("glGetUniformLocation");
glbinding::Function<GLint, GLhandleARB, const GLcharARB *> Binding::GetUniformLocationARB("glGetUniformLocationARB");
glbinding::Function<GLintptr, GLuint, GLint> Binding::GetUniformOffsetEXT("glGetUniformOffsetEXT");
glbinding::Function<void, GLenum, GLint, GLuint *> Binding::GetUniformSubroutineuiv("glGetUniformSubroutineuiv");
glbinding::Function<void, GLuint, GLint, GLdouble *> Binding::GetUniformdv("glGetUniformdv");
glbinding::Function<void, GLuint, GLint, GLfloat *> Binding::GetUniformfv("glGetUniformfv");
glbinding::Function<void, GLhandleARB, GLint, GLfloat *> Binding::GetUniformfvARB("glGetUniformfvARB");
glbinding::Function<void, GLuint, GLint, GLint64 *> Binding::GetUniformi64vARB("glGetUniformi64vARB");
glbinding::Function<void, GLuint, GLint, GLint64EXT *> Binding::GetUniformi64vNV("glGetUniformi64vNV");
glbinding::Function<void, GLuint, GLint, GLint *> Binding::GetUniformiv("glGetUniformiv");
glbinding::Function<void, GLhandleARB, GLint, GLint *> Binding::GetUniformivARB("glGetUniformivARB");
glbinding::Function<void, GLuint, GLint, GLuint64 *> Binding::GetUniformui64vARB("glGetUniformui64vARB");
glbinding::Function<void, GLuint, GLint, GLuint64EXT *> Binding::GetUniformui64vNV("glGetUniformui64vNV");
glbinding::Function<void, GLuint, GLint, GLuint *> Binding::GetUniformuiv("glGetUniformuiv");
glbinding::Function<void, GLuint, GLint, GLuint *> Binding::GetUniformuivEXT("glGetUniformuivEXT");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetVariantArrayObjectfvATI("glGetVariantArrayObjectfvATI");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVariantArrayObjectivATI("glGetVariantArrayObjectivATI");
glbinding::Function<void, GLuint, GLenum, GLboolean *> Binding::GetVariantBooleanvEXT("glGetVariantBooleanvEXT");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetVariantFloatvEXT("glGetVariantFloatvEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVariantIntegervEXT("glGetVariantIntegervEXT");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetVariantPointervEXT("glGetVariantPointervEXT");
glbinding::Function<GLint, GLuint, const GLchar *> Binding::GetVaryingLocationNV("glGetVaryingLocationNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint64 *> Binding::GetVertexArrayIndexed64iv("glGetVertexArrayIndexed64iv");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint *> Binding::GetVertexArrayIndexediv("glGetVertexArrayIndexediv");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint *> Binding::GetVertexArrayIntegeri_vEXT("glGetVertexArrayIntegeri_vEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexArrayIntegervEXT("glGetVertexArrayIntegervEXT");
glbinding::Function<void, GLuint, GLuint, GLenum, void **> Binding::GetVertexArrayPointeri_vEXT("glGetVertexArrayPointeri_vEXT");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetVertexArrayPointervEXT("glGetVertexArrayPointervEXT");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexArrayiv("glGetVertexArrayiv");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribArrayObjectfvATI("glGetVertexAttribArrayObjectfvATI");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribArrayObjectivATI("glGetVertexAttribArrayObjectivATI");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribIiv("glGetVertexAttribIiv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribIivEXT("glGetVertexAttribIivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetVertexAttribIuiv("glGetVertexAttribIuiv");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetVertexAttribIuivEXT("glGetVertexAttribIuivEXT");
glbinding::Function<void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribLdv("glGetVertexAttribLdv");
glbinding::Function<void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribLdvEXT("glGetVertexAttribLdvEXT");
glbinding::Function<void, GLuint, GLenum, GLint64EXT *> Binding::GetVertexAttribLi64vNV("glGetVertexAttribLi64vNV");
glbinding::Function<void, GLuint, GLenum, GLuint64EXT *> Binding::GetVertexAttribLui64vARB("glGetVertexAttribLui64vARB");
glbinding::Function<void, GLuint, GLenum, GLuint64EXT *> Binding::GetVertexAttribLui64vNV("glGetVertexAttribLui64vNV");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetVertexAttribPointerv("glGetVertexAttribPointerv");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetVertexAttribPointervARB("glGetVertexAttribPointervARB");
glbinding::Function<void, GLuint, GLenum, void **> Binding::GetVertexAttribPointervNV("glGetVertexAttribPointervNV");
glbinding::Function<void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribdv("glGetVertexAttribdv");
glbinding::Function<void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribdvARB("glGetVertexAttribdvARB");
glbinding::Function<void, GLuint, GLenum, GLdouble *> Binding::GetVertexAttribdvNV("glGetVertexAttribdvNV");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfv("glGetVertexAttribfv");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfvARB("glGetVertexAttribfvARB");
glbinding::Function<void, GLuint, GLenum, GLfloat *> Binding::GetVertexAttribfvNV("glGetVertexAttribfvNV");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribiv("glGetVertexAttribiv");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribivARB("glGetVertexAttribivARB");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVertexAttribivNV("glGetVertexAttribivNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLdouble *> Binding::GetVideoCaptureStreamdvNV("glGetVideoCaptureStreamdvNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLfloat *> Binding::GetVideoCaptureStreamfvNV("glGetVideoCaptureStreamfvNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint *> Binding::GetVideoCaptureStreamivNV("glGetVideoCaptureStreamivNV");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVideoCaptureivNV("glGetVideoCaptureivNV");
glbinding::Function<void, GLuint, GLenum, GLint64EXT *> Binding::GetVideoi64vNV("glGetVideoi64vNV");
glbinding::Function<void, GLuint, GLenum, GLint *> Binding::GetVideoivNV("glGetVideoivNV");
glbinding::Function<void, GLuint, GLenum, GLuint64EXT *> Binding::GetVideoui64vNV("glGetVideoui64vNV");
glbinding::Function<void, GLuint, GLenum, GLuint *> Binding::GetVideouivNV("glGetVideouivNV");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnColorTable("glGetnColorTable");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnColorTableARB("glGetnColorTableARB");
glbinding::Function<void, GLenum, GLint, GLsizei, void *> Binding::GetnCompressedTexImage("glGetnCompressedTexImage");
glbinding::Function<void, GLenum, GLint, GLsizei, void *> Binding::GetnCompressedTexImageARB("glGetnCompressedTexImageARB");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnConvolutionFilter("glGetnConvolutionFilter");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, void *> Binding::GetnConvolutionFilterARB("glGetnConvolutionFilterARB");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnHistogram("glGetnHistogram");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnHistogramARB("glGetnHistogramARB");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLdouble *> Binding::GetnMapdv("glGetnMapdv");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLdouble *> Binding::GetnMapdvARB("glGetnMapdvARB");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLfloat *> Binding::GetnMapfv("glGetnMapfv");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLfloat *> Binding::GetnMapfvARB("glGetnMapfvARB");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLint *> Binding::GetnMapiv("glGetnMapiv");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLint *> Binding::GetnMapivARB("glGetnMapivARB");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnMinmax("glGetnMinmax");
glbinding::Function<void, GLenum, GLboolean, GLenum, GLenum, GLsizei, void *> Binding::GetnMinmaxARB("glGetnMinmaxARB");
glbinding::Function<void, GLenum, GLsizei, GLfloat *> Binding::GetnPixelMapfv("glGetnPixelMapfv");
glbinding::Function<void, GLenum, GLsizei, GLfloat *> Binding::GetnPixelMapfvARB("glGetnPixelMapfvARB");
glbinding::Function<void, GLenum, GLsizei, GLuint *> Binding::GetnPixelMapuiv("glGetnPixelMapuiv");
glbinding::Function<void, GLenum, GLsizei, GLuint *> Binding::GetnPixelMapuivARB("glGetnPixelMapuivARB");
glbinding::Function<void, GLenum, GLsizei, GLushort *> Binding::GetnPixelMapusv("glGetnPixelMapusv");
glbinding::Function<void, GLenum, GLsizei, GLushort *> Binding::GetnPixelMapusvARB("glGetnPixelMapusvARB");
glbinding::Function<void, GLsizei, GLubyte *> Binding::GetnPolygonStipple("glGetnPolygonStipple");
glbinding::Function<void, GLsizei, GLubyte *> Binding::GetnPolygonStippleARB("glGetnPolygonStippleARB");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, void *, GLsizei, void *, void *> Binding::GetnSeparableFilter("glGetnSeparableFilter");
glbinding::Function<void, GLenum, GLenum, GLenum, GLsizei, void *, GLsizei, void *, void *> Binding::GetnSeparableFilterARB("glGetnSeparableFilterARB");
glbinding::Function<void, GLenum, GLint, GLenum, GLenum, GLsizei, void *> Binding::GetnTexImage("glGetnTexImage");
glbinding::Function<void, GLenum, GLint, GLenum, GLenum, GLsizei, void *> Binding::GetnTexImageARB("glGetnTexImageARB");
glbinding::Function<void, GLuint, GLint, GLsizei, GLdouble *> Binding::GetnUniformdv("glGetnUniformdv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLdouble *> Binding::GetnUniformdvARB("glGetnUniformdvARB");
glbinding::Function<void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfv("glGetnUniformfv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLfloat *> Binding::GetnUniformfvARB("glGetnUniformfvARB");
glbinding::Function<void, GLuint, GLint, GLsizei, GLint64 *> Binding::GetnUniformi64vARB("glGetnUniformi64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformiv("glGetnUniformiv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLint *> Binding::GetnUniformivARB("glGetnUniformivARB");
glbinding::Function<void, GLuint, GLint, GLsizei, GLuint64 *> Binding::GetnUniformui64vARB("glGetnUniformui64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, GLuint *> Binding::GetnUniformuiv("glGetnUniformuiv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLuint *> Binding::GetnUniformuivARB("glGetnUniformuivARB");
glbinding::Function<void, GLbyte> Binding::GlobalAlphaFactorbSUN("glGlobalAlphaFactorbSUN");
glbinding::Function<void, GLdouble> Binding::GlobalAlphaFactordSUN("glGlobalAlphaFactordSUN");
glbinding::Function<void, GLfloat> Binding::GlobalAlphaFactorfSUN("glGlobalAlphaFactorfSUN");
glbinding::Function<void, GLint> Binding::GlobalAlphaFactoriSUN("glGlobalAlphaFactoriSUN");
glbinding::Function<void, GLshort> Binding::GlobalAlphaFactorsSUN("glGlobalAlphaFactorsSUN");
glbinding::Function<void, GLubyte> Binding::GlobalAlphaFactorubSUN("glGlobalAlphaFactorubSUN");
glbinding::Function<void, GLuint> Binding::GlobalAlphaFactoruiSUN("glGlobalAlphaFactoruiSUN");
glbinding::Function<void, GLushort> Binding::GlobalAlphaFactorusSUN("glGlobalAlphaFactorusSUN");
glbinding::Function<void, GLenum, GLenum> Binding::Hint("glHint");
glbinding::Function<void, GLenum, GLint> Binding::HintPGI("glHintPGI");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLboolean> Binding::Histogram("glHistogram");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLboolean> Binding::HistogramEXT("glHistogramEXT");
glbinding::Function<void, GLenum, const void *> Binding::IglooInterfaceSGIX("glIglooInterfaceSGIX");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::ImageTransformParameterfHP("glImageTransformParameterfHP");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::ImageTransformParameterfvHP("glImageTransformParameterfvHP");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::ImageTransformParameteriHP("glImageTransformParameteriHP");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::ImageTransformParameterivHP("glImageTransformParameterivHP");
glbinding::Function<GLsync, GLenum, GLintptr, UnusedMask> Binding::ImportSyncEXT("glImportSyncEXT");
glbinding::Function<void, GLenum, GLsizei> Binding::IndexFormatNV("glIndexFormatNV");
glbinding::Function<void, GLenum, GLclampf> Binding::IndexFuncEXT("glIndexFuncEXT");
glbinding::Function<void, GLuint> Binding::IndexMask("glIndexMask");
glbinding::Function<void, GLenum, GLenum> Binding::IndexMaterialEXT("glIndexMaterialEXT");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::IndexPointer("glIndexPointer");
glbinding::Function<void, GLenum, GLsizei, GLsizei, const void *> Binding::IndexPointerEXT("glIndexPointerEXT");
glbinding::Function<void, GLenum, GLint, const void **, GLint> Binding::IndexPointerListIBM("glIndexPointerListIBM");
glbinding::Function<void, GLdouble> Binding::Indexd("glIndexd");
glbinding::Function<void, const GLdouble *> Binding::Indexdv("glIndexdv");
glbinding::Function<void, GLfloat> Binding::Indexf("glIndexf");
glbinding::Function<void, const GLfloat *> Binding::Indexfv("glIndexfv");
glbinding::Function<void, GLint> Binding::Indexi("glIndexi");
glbinding::Function<void, const GLint *> Binding::Indexiv("glIndexiv");
glbinding::Function<void, GLshort> Binding::Indexs("glIndexs");
glbinding::Function<void, const GLshort *> Binding::Indexsv("glIndexsv");
glbinding::Function<void, GLubyte> Binding::Indexub("glIndexub");
glbinding::Function<void, const GLubyte *> Binding::Indexubv("glIndexubv");
glbinding::Function<void, GLfixed> Binding::IndexxOES("glIndexxOES");
glbinding::Function<void, const GLfixed *> Binding::IndexxvOES("glIndexxvOES");
glbinding::Function<void> Binding::InitNames("glInitNames");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::InsertComponentEXT("glInsertComponentEXT");
glbinding::Function<void, GLsizei, const GLchar *> Binding::InsertEventMarkerEXT("glInsertEventMarkerEXT");
glbinding::Function<void, GLsizei, GLint *> Binding::InstrumentsBufferSGIX("glInstrumentsBufferSGIX");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::InterleavedArrays("glInterleavedArrays");
glbinding::Function<void, GLuint, GLuint, GLuint, GLfloat> Binding::InterpolatePathsNV("glInterpolatePathsNV");
glbinding::Function<void, GLuint> Binding::InvalidateBufferData("glInvalidateBufferData");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr> Binding::InvalidateBufferSubData("glInvalidateBufferSubData");
glbinding::Function<void, GLenum, GLsizei, const GLenum *> Binding::InvalidateFramebuffer("glInvalidateFramebuffer");
glbinding::Function<void, GLuint, GLsizei, const GLenum *> Binding::InvalidateNamedFramebufferData("glInvalidateNamedFramebufferData");
glbinding::Function<void, GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateNamedFramebufferSubData("glInvalidateNamedFramebufferSubData");
glbinding::Function<void, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei> Binding::InvalidateSubFramebuffer("glInvalidateSubFramebuffer");
glbinding::Function<void, GLuint, GLint> Binding::InvalidateTexImage("glInvalidateTexImage");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei> Binding::InvalidateTexSubImage("glInvalidateTexSubImage");
glbinding::Function<GLboolean, GLuint> Binding::IsAsyncMarkerSGIX("glIsAsyncMarkerSGIX");
glbinding::Function<GLboolean, GLuint> Binding::IsBuffer("glIsBuffer");
glbinding::Function<GLboolean, GLuint> Binding::IsBufferARB("glIsBufferARB");
glbinding::Function<GLboolean, GLenum> Binding::IsBufferResidentNV("glIsBufferResidentNV");
glbinding::Function<GLboolean, GLuint> Binding::IsCommandListNV("glIsCommandListNV");
glbinding::Function<GLboolean, GLenum> Binding::IsEnabled("glIsEnabled");
glbinding::Function<GLboolean, GLenum, GLuint> Binding::IsEnabledIndexedEXT("glIsEnabledIndexedEXT");
glbinding::Function<GLboolean, GLenum, GLuint> Binding::IsEnabledi("glIsEnabledi");
glbinding::Function<GLboolean, GLuint> Binding::IsFenceAPPLE("glIsFenceAPPLE");
glbinding::Function<GLboolean, GLuint> Binding::IsFenceNV("glIsFenceNV");
glbinding::Function<GLboolean, GLuint> Binding::IsFramebuffer("glIsFramebuffer");
glbinding::Function<GLboolean, GLuint> Binding::IsFramebufferEXT("glIsFramebufferEXT");
glbinding::Function<GLboolean, GLuint64> Binding::IsImageHandleResidentARB("glIsImageHandleResidentARB");
glbinding::Function<GLboolean, GLuint64> Binding::IsImageHandleResidentNV("glIsImageHandleResidentNV");
glbinding::Function<GLboolean, GLuint> Binding::IsList("glIsList");
glbinding::Function<GLboolean, GLenum, GLuint> Binding::IsNameAMD("glIsNameAMD");
glbinding::Function<GLboolean, GLuint> Binding::IsNamedBufferResidentNV("glIsNamedBufferResidentNV");
glbinding::Function<GLboolean, GLint, const GLchar *> Binding::IsNamedStringARB("glIsNamedStringARB");
glbinding::Function<GLboolean, GLuint> Binding::IsObjectBufferATI("glIsObjectBufferATI");
glbinding::Function<GLboolean, GLuint> Binding::IsOcclusionQueryNV("glIsOcclusionQueryNV");
glbinding::Function<GLboolean, GLuint> Binding::IsPathNV("glIsPathNV");
glbinding::Function<GLboolean, GLuint, GLuint, GLfloat, GLfloat> Binding::IsPointInFillPathNV("glIsPointInFillPathNV");
glbinding::Function<GLboolean, GLuint, GLfloat, GLfloat> Binding::IsPointInStrokePathNV("glIsPointInStrokePathNV");
glbinding::Function<GLboolean, GLuint> Binding::IsProgram("glIsProgram");
glbinding::Function<GLboolean, GLuint> Binding::IsProgramARB("glIsProgramARB");
glbinding::Function<GLboolean, GLuint> Binding::IsProgramNV("glIsProgramNV");
glbinding::Function<GLboolean, GLuint> Binding::IsProgramPipeline("glIsProgramPipeline");
glbinding::Function<GLboolean, GLuint> Binding::IsQuery("glIsQuery");
glbinding::Function<GLboolean, GLuint> Binding::IsQueryARB("glIsQueryARB");
glbinding::Function<GLboolean, GLuint> Binding::IsRenderbuffer("glIsRenderbuffer");
glbinding::Function<GLboolean, GLuint> Binding::IsRenderbufferEXT("glIsRenderbufferEXT");
glbinding::Function<GLboolean, GLuint> Binding::IsSampler("glIsSampler");
glbinding::Function<GLboolean, GLuint> Binding::IsShader("glIsShader");
glbinding::Function<GLboolean, GLuint> Binding::IsStateNV("glIsStateNV");
glbinding::Function<GLboolean, GLsync> Binding::IsSync("glIsSync");
glbinding::Function<GLboolean, GLuint> Binding::IsTexture("glIsTexture");
glbinding::Function<GLboolean, GLuint> Binding::IsTextureEXT("glIsTextureEXT");
glbinding::Function<GLboolean, GLuint64> Binding::IsTextureHandleResidentARB("glIsTextureHandleResidentARB");
glbinding::Function<GLboolean, GLuint64> Binding::IsTextureHandleResidentNV("glIsTextureHandleResidentNV");
glbinding::Function<GLboolean, GLuint> Binding::IsTransformFeedback("glIsTransformFeedback");
glbinding::Function<GLboolean, GLuint> Binding::IsTransformFeedbackNV("glIsTransformFeedbackNV");
glbinding::Function<GLboolean, GLuint, GLenum> Binding::IsVariantEnabledEXT("glIsVariantEnabledEXT");
glbinding::Function<GLboolean, GLuint> Binding::IsVertexArray("glIsVertexArray");
glbinding::Function<GLboolean, GLuint> Binding::IsVertexArrayAPPLE("glIsVertexArrayAPPLE");
glbinding::Function<GLboolean, GLuint, GLenum> Binding::IsVertexAttribEnabledAPPLE("glIsVertexAttribEnabledAPPLE");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLchar *> Binding::LabelObjectEXT("glLabelObjectEXT");
glbinding::Function<void, GLenum, GLint> Binding::LightEnviSGIX("glLightEnviSGIX");
glbinding::Function<void, GLenum, GLfloat> Binding::LightModelf("glLightModelf");
glbinding::Function<void, GLenum, const GLfloat *> Binding::LightModelfv("glLightModelfv");
glbinding::Function<void, GLenum, GLint> Binding::LightModeli("glLightModeli");
glbinding::Function<void, GLenum, const GLint *> Binding::LightModeliv("glLightModeliv");
glbinding::Function<void, GLenum, GLfixed> Binding::LightModelxOES("glLightModelxOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::LightModelxvOES("glLightModelxvOES");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::Lightf("glLightf");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::Lightfv("glLightfv");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::Lighti("glLighti");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::Lightiv("glLightiv");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::LightxOES("glLightxOES");
glbinding::Function<void, GLenum, GLenum, const GLfixed *> Binding::LightxvOES("glLightxvOES");
glbinding::Function<void, GLint, GLushort> Binding::LineStipple("glLineStipple");
glbinding::Function<void, GLfloat> Binding::LineWidth("glLineWidth");
glbinding::Function<void, GLfixed> Binding::LineWidthxOES("glLineWidthxOES");
glbinding::Function<void, GLuint> Binding::LinkProgram("glLinkProgram");
glbinding::Function<void, GLhandleARB> Binding::LinkProgramARB("glLinkProgramARB");
glbinding::Function<void, GLuint> Binding::ListBase("glListBase");
glbinding::Function<void, GLuint, GLuint, const void **, const GLsizei *, const GLuint *, const GLuint *, GLuint> Binding::ListDrawCommandsStatesClientNV("glListDrawCommandsStatesClientNV");
glbinding::Function<void, GLuint, GLenum, GLfloat> Binding::ListParameterfSGIX("glListParameterfSGIX");
glbinding::Function<void, GLuint, GLenum, const GLfloat *> Binding::ListParameterfvSGIX("glListParameterfvSGIX");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::ListParameteriSGIX("glListParameteriSGIX");
glbinding::Function<void, GLuint, GLenum, const GLint *> Binding::ListParameterivSGIX("glListParameterivSGIX");
glbinding::Function<void> Binding::LoadIdentity("glLoadIdentity");
glbinding::Function<void, FfdMaskSGIX> Binding::LoadIdentityDeformationMapSGIX("glLoadIdentityDeformationMapSGIX");
glbinding::Function<void, const GLdouble *> Binding::LoadMatrixd("glLoadMatrixd");
glbinding::Function<void, const GLfloat *> Binding::LoadMatrixf("glLoadMatrixf");
glbinding::Function<void, const GLfixed *> Binding::LoadMatrixxOES("glLoadMatrixxOES");
glbinding::Function<void, GLuint> Binding::LoadName("glLoadName");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLubyte *> Binding::LoadProgramNV("glLoadProgramNV");
glbinding::Function<void, const GLdouble *> Binding::LoadTransposeMatrixd("glLoadTransposeMatrixd");
glbinding::Function<void, const GLdouble *> Binding::LoadTransposeMatrixdARB("glLoadTransposeMatrixdARB");
glbinding::Function<void, const GLfloat *> Binding::LoadTransposeMatrixf("glLoadTransposeMatrixf");
glbinding::Function<void, const GLfloat *> Binding::LoadTransposeMatrixfARB("glLoadTransposeMatrixfARB");
glbinding::Function<void, const GLfixed *> Binding::LoadTransposeMatrixxOES("glLoadTransposeMatrixxOES");
glbinding::Function<void, GLint, GLsizei> Binding::LockArraysEXT("glLockArraysEXT");
glbinding::Function<void, GLenum> Binding::LogicOp("glLogicOp");
glbinding::Function<void, GLenum> Binding::MakeBufferNonResidentNV("glMakeBufferNonResidentNV");
glbinding::Function<void, GLenum, GLenum> Binding::MakeBufferResidentNV("glMakeBufferResidentNV");
glbinding::Function<void, GLuint64> Binding::MakeImageHandleNonResidentARB("glMakeImageHandleNonResidentARB");
glbinding::Function<void, GLuint64> Binding::MakeImageHandleNonResidentNV("glMakeImageHandleNonResidentNV");
glbinding::Function<void, GLuint64, GLenum> Binding::MakeImageHandleResidentARB("glMakeImageHandleResidentARB");
glbinding::Function<void, GLuint64, GLenum> Binding::MakeImageHandleResidentNV("glMakeImageHandleResidentNV");
glbinding::Function<void, GLuint> Binding::MakeNamedBufferNonResidentNV("glMakeNamedBufferNonResidentNV");
glbinding::Function<void, GLuint, GLenum> Binding::MakeNamedBufferResidentNV("glMakeNamedBufferResidentNV");
glbinding::Function<void, GLuint64> Binding::MakeTextureHandleNonResidentARB("glMakeTextureHandleNonResidentARB");
glbinding::Function<void, GLuint64> Binding::MakeTextureHandleNonResidentNV("glMakeTextureHandleNonResidentNV");
glbinding::Function<void, GLuint64> Binding::MakeTextureHandleResidentARB("glMakeTextureHandleResidentARB");
glbinding::Function<void, GLuint64> Binding::MakeTextureHandleResidentNV("glMakeTextureHandleResidentNV");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::Map1d("glMap1d");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::Map1f("glMap1f");
glbinding::Function<void, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed> Binding::Map1xOES("glMap1xOES");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::Map2d("glMap2d");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::Map2f("glMap2f");
glbinding::Function<void, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed> Binding::Map2xOES("glMap2xOES");
glbinding::Function<void *, GLenum, GLenum> Binding::MapBuffer("glMapBuffer");
glbinding::Function<void *, GLenum, GLenum> Binding::MapBufferARB("glMapBufferARB");
glbinding::Function<void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRange("glMapBufferRange");
glbinding::Function<void, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const void *> Binding::MapControlPointsNV("glMapControlPointsNV");
glbinding::Function<void, GLint, GLdouble, GLdouble> Binding::MapGrid1d("glMapGrid1d");
glbinding::Function<void, GLint, GLfloat, GLfloat> Binding::MapGrid1f("glMapGrid1f");
glbinding::Function<void, GLint, GLfixed, GLfixed> Binding::MapGrid1xOES("glMapGrid1xOES");
glbinding::Function<void, GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble> Binding::MapGrid2d("glMapGrid2d");
glbinding::Function<void, GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat> Binding::MapGrid2f("glMapGrid2f");
glbinding::Function<void, GLint, GLfixed, GLfixed, GLfixed, GLfixed> Binding::MapGrid2xOES("glMapGrid2xOES");
glbinding::Function<void *, GLuint, GLenum> Binding::MapNamedBuffer("glMapNamedBuffer");
glbinding::Function<void *, GLuint, GLenum> Binding::MapNamedBufferEXT("glMapNamedBufferEXT");
glbinding::Function<void *, GLuint, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapNamedBufferRange("glMapNamedBufferRange");
glbinding::Function<void *, GLuint, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapNamedBufferRangeEXT("glMapNamedBufferRangeEXT");
glbinding::Function<void *, GLuint> Binding::MapObjectBufferATI("glMapObjectBufferATI");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::MapParameterfvNV("glMapParameterfvNV");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::MapParameterivNV("glMapParameterivNV");
glbinding::Function<void *, GLuint, GLint, MapBufferUsageMask, GLint *, GLenum *> Binding::MapTexture2DINTEL("glMapTexture2DINTEL");
glbinding::Function<void, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::MapVertexAttrib1dAPPLE("glMapVertexAttrib1dAPPLE");
glbinding::Function<void, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::MapVertexAttrib1fAPPLE("glMapVertexAttrib1fAPPLE");
glbinding::Function<void, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::MapVertexAttrib2dAPPLE("glMapVertexAttrib2dAPPLE");
glbinding::Function<void, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::MapVertexAttrib2fAPPLE("glMapVertexAttrib2fAPPLE");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::Materialf("glMaterialf");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::Materialfv("glMaterialfv");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::Materiali("glMateriali");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::Materialiv("glMaterialiv");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::MaterialxOES("glMaterialxOES");
glbinding::Function<void, GLenum, GLenum, const GLfixed *> Binding::MaterialxvOES("glMaterialxvOES");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixFrustumEXT("glMatrixFrustumEXT");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::MatrixIndexPointerARB("glMatrixIndexPointerARB");
glbinding::Function<void, GLint, const GLubyte *> Binding::MatrixIndexubvARB("glMatrixIndexubvARB");
glbinding::Function<void, GLint, const GLuint *> Binding::MatrixIndexuivARB("glMatrixIndexuivARB");
glbinding::Function<void, GLint, const GLushort *> Binding::MatrixIndexusvARB("glMatrixIndexusvARB");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixLoad3x2fNV("glMatrixLoad3x2fNV");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixLoad3x3fNV("glMatrixLoad3x3fNV");
glbinding::Function<void, GLenum> Binding::MatrixLoadIdentityEXT("glMatrixLoadIdentityEXT");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixLoadTranspose3x3fNV("glMatrixLoadTranspose3x3fNV");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MatrixLoadTransposedEXT("glMatrixLoadTransposedEXT");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixLoadTransposefEXT("glMatrixLoadTransposefEXT");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MatrixLoaddEXT("glMatrixLoaddEXT");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixLoadfEXT("glMatrixLoadfEXT");
glbinding::Function<void, GLenum> Binding::MatrixMode("glMatrixMode");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixMult3x2fNV("glMatrixMult3x2fNV");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixMult3x3fNV("glMatrixMult3x3fNV");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixMultTranspose3x3fNV("glMatrixMultTranspose3x3fNV");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MatrixMultTransposedEXT("glMatrixMultTransposedEXT");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixMultTransposefEXT("glMatrixMultTransposefEXT");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MatrixMultdEXT("glMatrixMultdEXT");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MatrixMultfEXT("glMatrixMultfEXT");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixOrthoEXT("glMatrixOrthoEXT");
glbinding::Function<void, GLenum> Binding::MatrixPopEXT("glMatrixPopEXT");
glbinding::Function<void, GLenum> Binding::MatrixPushEXT("glMatrixPushEXT");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixRotatedEXT("glMatrixRotatedEXT");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MatrixRotatefEXT("glMatrixRotatefEXT");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixScaledEXT("glMatrixScaledEXT");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixScalefEXT("glMatrixScalefEXT");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixTranslatedEXT("glMatrixTranslatedEXT");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixTranslatefEXT("glMatrixTranslatefEXT");
glbinding::Function<void, GLuint> Binding::MaxShaderCompilerThreadsARB("glMaxShaderCompilerThreadsARB");
glbinding::Function<void, MemoryBarrierMask> Binding::MemoryBarrier("glMemoryBarrier");
glbinding::Function<void, MemoryBarrierMask> Binding::MemoryBarrierByRegion("glMemoryBarrierByRegion");
glbinding::Function<void, MemoryBarrierMask> Binding::MemoryBarrierEXT("glMemoryBarrierEXT");
glbinding::Function<void, GLfloat> Binding::MinSampleShading("glMinSampleShading");
glbinding::Function<void, GLfloat> Binding::MinSampleShadingARB("glMinSampleShadingARB");
glbinding::Function<void, GLenum, GLenum, GLboolean> Binding::Minmax("glMinmax");
glbinding::Function<void, GLenum, GLenum, GLboolean> Binding::MinmaxEXT("glMinmaxEXT");
glbinding::Function<void, const GLdouble *> Binding::MultMatrixd("glMultMatrixd");
glbinding::Function<void, const GLfloat *> Binding::MultMatrixf("glMultMatrixf");
glbinding::Function<void, const GLfixed *> Binding::MultMatrixxOES("glMultMatrixxOES");
glbinding::Function<void, const GLdouble *> Binding::MultTransposeMatrixd("glMultTransposeMatrixd");
glbinding::Function<void, const GLdouble *> Binding::MultTransposeMatrixdARB("glMultTransposeMatrixdARB");
glbinding::Function<void, const GLfloat *> Binding::MultTransposeMatrixf("glMultTransposeMatrixf");
glbinding::Function<void, const GLfloat *> Binding::MultTransposeMatrixfARB("glMultTransposeMatrixfARB");
glbinding::Function<void, const GLfixed *> Binding::MultTransposeMatrixxOES("glMultTransposeMatrixxOES");
glbinding::Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArrays("glMultiDrawArrays");
glbinding::Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArraysEXT("glMultiDrawArraysEXT");
glbinding::Function<void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirect("glMultiDrawArraysIndirect");
glbinding::Function<void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectAMD("glMultiDrawArraysIndirectAMD");
glbinding::Function<void, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint> Binding::MultiDrawArraysIndirectBindlessCountNV("glMultiDrawArraysIndirectBindlessCountNV");
glbinding::Function<void, GLenum, const void *, GLsizei, GLsizei, GLint> Binding::MultiDrawArraysIndirectBindlessNV("glMultiDrawArraysIndirectBindlessNV");
glbinding::Function<void, GLenum, GLintptr, GLintptr, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectCountARB("glMultiDrawArraysIndirectCountARB");
glbinding::Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawElementArrayAPPLE("glMultiDrawElementArrayAPPLE");
glbinding::Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElements("glMultiDrawElements");
glbinding::Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertex("glMultiDrawElementsBaseVertex");
glbinding::Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElementsEXT("glMultiDrawElementsEXT");
glbinding::Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirect("glMultiDrawElementsIndirect");
glbinding::Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectAMD("glMultiDrawElementsIndirectAMD");
glbinding::Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint> Binding::MultiDrawElementsIndirectBindlessCountNV("glMultiDrawElementsIndirectBindlessCountNV");
glbinding::Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei, GLint> Binding::MultiDrawElementsIndirectBindlessNV("glMultiDrawElementsIndirectBindlessNV");
glbinding::Function<void, GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectCountARB("glMultiDrawElementsIndirectCountARB");
glbinding::Function<void, GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawRangeElementArrayAPPLE("glMultiDrawRangeElementArrayAPPLE");
glbinding::Function<void, const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint> Binding::MultiModeDrawArraysIBM("glMultiModeDrawArraysIBM");
glbinding::Function<void, const GLenum *, const GLsizei *, GLenum, const void *const*, GLsizei, GLint> Binding::MultiModeDrawElementsIBM("glMultiModeDrawElementsIBM");
glbinding::Function<void, GLenum, GLenum, GLenum, GLuint> Binding::MultiTexBufferEXT("glMultiTexBufferEXT");
glbinding::Function<void, GLenum, GLbyte> Binding::MultiTexCoord1bOES("glMultiTexCoord1bOES");
glbinding::Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord1bvOES("glMultiTexCoord1bvOES");
glbinding::Function<void, GLenum, GLdouble> Binding::MultiTexCoord1d("glMultiTexCoord1d");
glbinding::Function<void, GLenum, GLdouble> Binding::MultiTexCoord1dARB("glMultiTexCoord1dARB");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord1dv("glMultiTexCoord1dv");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord1dvARB("glMultiTexCoord1dvARB");
glbinding::Function<void, GLenum, GLfloat> Binding::MultiTexCoord1f("glMultiTexCoord1f");
glbinding::Function<void, GLenum, GLfloat> Binding::MultiTexCoord1fARB("glMultiTexCoord1fARB");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord1fv("glMultiTexCoord1fv");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord1fvARB("glMultiTexCoord1fvARB");
glbinding::Function<void, GLenum, GLhalfNV> Binding::MultiTexCoord1hNV("glMultiTexCoord1hNV");
glbinding::Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord1hvNV("glMultiTexCoord1hvNV");
glbinding::Function<void, GLenum, GLint> Binding::MultiTexCoord1i("glMultiTexCoord1i");
glbinding::Function<void, GLenum, GLint> Binding::MultiTexCoord1iARB("glMultiTexCoord1iARB");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord1iv("glMultiTexCoord1iv");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord1ivARB("glMultiTexCoord1ivARB");
glbinding::Function<void, GLenum, GLshort> Binding::MultiTexCoord1s("glMultiTexCoord1s");
glbinding::Function<void, GLenum, GLshort> Binding::MultiTexCoord1sARB("glMultiTexCoord1sARB");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord1sv("glMultiTexCoord1sv");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord1svARB("glMultiTexCoord1svARB");
glbinding::Function<void, GLenum, GLfixed> Binding::MultiTexCoord1xOES("glMultiTexCoord1xOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord1xvOES("glMultiTexCoord1xvOES");
glbinding::Function<void, GLenum, GLbyte, GLbyte> Binding::MultiTexCoord2bOES("glMultiTexCoord2bOES");
glbinding::Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord2bvOES("glMultiTexCoord2bvOES");
glbinding::Function<void, GLenum, GLdouble, GLdouble> Binding::MultiTexCoord2d("glMultiTexCoord2d");
glbinding::Function<void, GLenum, GLdouble, GLdouble> Binding::MultiTexCoord2dARB("glMultiTexCoord2dARB");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord2dv("glMultiTexCoord2dv");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord2dvARB("glMultiTexCoord2dvARB");
glbinding::Function<void, GLenum, GLfloat, GLfloat> Binding::MultiTexCoord2f("glMultiTexCoord2f");
glbinding::Function<void, GLenum, GLfloat, GLfloat> Binding::MultiTexCoord2fARB("glMultiTexCoord2fARB");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord2fv("glMultiTexCoord2fv");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord2fvARB("glMultiTexCoord2fvARB");
glbinding::Function<void, GLenum, GLhalfNV, GLhalfNV> Binding::MultiTexCoord2hNV("glMultiTexCoord2hNV");
glbinding::Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord2hvNV("glMultiTexCoord2hvNV");
glbinding::Function<void, GLenum, GLint, GLint> Binding::MultiTexCoord2i("glMultiTexCoord2i");
glbinding::Function<void, GLenum, GLint, GLint> Binding::MultiTexCoord2iARB("glMultiTexCoord2iARB");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord2iv("glMultiTexCoord2iv");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord2ivARB("glMultiTexCoord2ivARB");
glbinding::Function<void, GLenum, GLshort, GLshort> Binding::MultiTexCoord2s("glMultiTexCoord2s");
glbinding::Function<void, GLenum, GLshort, GLshort> Binding::MultiTexCoord2sARB("glMultiTexCoord2sARB");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord2sv("glMultiTexCoord2sv");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord2svARB("glMultiTexCoord2svARB");
glbinding::Function<void, GLenum, GLfixed, GLfixed> Binding::MultiTexCoord2xOES("glMultiTexCoord2xOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord2xvOES("glMultiTexCoord2xvOES");
glbinding::Function<void, GLenum, GLbyte, GLbyte, GLbyte> Binding::MultiTexCoord3bOES("glMultiTexCoord3bOES");
glbinding::Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord3bvOES("glMultiTexCoord3bvOES");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord3d("glMultiTexCoord3d");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord3dARB("glMultiTexCoord3dARB");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord3dv("glMultiTexCoord3dv");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord3dvARB("glMultiTexCoord3dvARB");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord3f("glMultiTexCoord3f");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord3fARB("glMultiTexCoord3fARB");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord3fv("glMultiTexCoord3fv");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord3fvARB("glMultiTexCoord3fvARB");
glbinding::Function<void, GLenum, GLhalfNV, GLhalfNV, GLhalfNV> Binding::MultiTexCoord3hNV("glMultiTexCoord3hNV");
glbinding::Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord3hvNV("glMultiTexCoord3hvNV");
glbinding::Function<void, GLenum, GLint, GLint, GLint> Binding::MultiTexCoord3i("glMultiTexCoord3i");
glbinding::Function<void, GLenum, GLint, GLint, GLint> Binding::MultiTexCoord3iARB("glMultiTexCoord3iARB");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord3iv("glMultiTexCoord3iv");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord3ivARB("glMultiTexCoord3ivARB");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort> Binding::MultiTexCoord3s("glMultiTexCoord3s");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort> Binding::MultiTexCoord3sARB("glMultiTexCoord3sARB");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord3sv("glMultiTexCoord3sv");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord3svARB("glMultiTexCoord3svARB");
glbinding::Function<void, GLenum, GLfixed, GLfixed, GLfixed> Binding::MultiTexCoord3xOES("glMultiTexCoord3xOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord3xvOES("glMultiTexCoord3xvOES");
glbinding::Function<void, GLenum, GLbyte, GLbyte, GLbyte, GLbyte> Binding::MultiTexCoord4bOES("glMultiTexCoord4bOES");
glbinding::Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord4bvOES("glMultiTexCoord4bvOES");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord4d("glMultiTexCoord4d");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord4dARB("glMultiTexCoord4dARB");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord4dv("glMultiTexCoord4dv");
glbinding::Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord4dvARB("glMultiTexCoord4dvARB");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord4f("glMultiTexCoord4f");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord4fARB("glMultiTexCoord4fARB");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord4fv("glMultiTexCoord4fv");
glbinding::Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord4fvARB("glMultiTexCoord4fvARB");
glbinding::Function<void, GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::MultiTexCoord4hNV("glMultiTexCoord4hNV");
glbinding::Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord4hvNV("glMultiTexCoord4hvNV");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint> Binding::MultiTexCoord4i("glMultiTexCoord4i");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint> Binding::MultiTexCoord4iARB("glMultiTexCoord4iARB");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord4iv("glMultiTexCoord4iv");
glbinding::Function<void, GLenum, const GLint *> Binding::MultiTexCoord4ivARB("glMultiTexCoord4ivARB");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::MultiTexCoord4s("glMultiTexCoord4s");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::MultiTexCoord4sARB("glMultiTexCoord4sARB");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord4sv("glMultiTexCoord4sv");
glbinding::Function<void, GLenum, const GLshort *> Binding::MultiTexCoord4svARB("glMultiTexCoord4svARB");
glbinding::Function<void, GLenum, GLfixed, GLfixed, GLfixed, GLfixed> Binding::MultiTexCoord4xOES("glMultiTexCoord4xOES");
glbinding::Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord4xvOES("glMultiTexCoord4xvOES");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP1ui("glMultiTexCoordP1ui");
glbinding::Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP1uiv("glMultiTexCoordP1uiv");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP2ui("glMultiTexCoordP2ui");
glbinding::Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP2uiv("glMultiTexCoordP2uiv");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP3ui("glMultiTexCoordP3ui");
glbinding::Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP3uiv("glMultiTexCoordP3uiv");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP4ui("glMultiTexCoordP4ui");
glbinding::Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP4uiv("glMultiTexCoordP4uiv");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, const void *> Binding::MultiTexCoordPointerEXT("glMultiTexCoordPointerEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexEnvfEXT("glMultiTexEnvfEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexEnvfvEXT("glMultiTexEnvfvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexEnviEXT("glMultiTexEnviEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexEnvivEXT("glMultiTexEnvivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLdouble> Binding::MultiTexGendEXT("glMultiTexGendEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLdouble *> Binding::MultiTexGendvEXT("glMultiTexGendvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexGenfEXT("glMultiTexGenfEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexGenfvEXT("glMultiTexGenfvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexGeniEXT("glMultiTexGeniEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexGenivEXT("glMultiTexGenivEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage1DEXT("glMultiTexImage1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage2DEXT("glMultiTexImage2DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage3DEXT("glMultiTexImage3DEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexParameterIivEXT("glMultiTexParameterIivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLuint *> Binding::MultiTexParameterIuivEXT("glMultiTexParameterIuivEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexParameterfEXT("glMultiTexParameterfEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexParameterfvEXT("glMultiTexParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexParameteriEXT("glMultiTexParameteriEXT");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexParameterivEXT("glMultiTexParameterivEXT");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::MultiTexRenderbufferEXT("glMultiTexRenderbufferEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage1DEXT("glMultiTexSubImage1DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage2DEXT("glMultiTexSubImage2DEXT");
glbinding::Function<void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage3DEXT("glMultiTexSubImage3DEXT");
glbinding::Function<void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferData("glNamedBufferData");
glbinding::Function<void, GLuint, GLsizeiptr, const void *, GLenum> Binding::NamedBufferDataEXT("glNamedBufferDataEXT");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentARB("glNamedBufferPageCommitmentARB");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr, GLboolean> Binding::NamedBufferPageCommitmentEXT("glNamedBufferPageCommitmentEXT");
glbinding::Function<void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorage("glNamedBufferStorage");
glbinding::Function<void, GLuint, GLsizeiptr, const void *, BufferStorageMask> Binding::NamedBufferStorageEXT("glNamedBufferStorageEXT");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubData("glNamedBufferSubData");
glbinding::Function<void, GLuint, GLintptr, GLsizeiptr, const void *> Binding::NamedBufferSubDataEXT("glNamedBufferSubDataEXT");
glbinding::Function<void, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr> Binding::NamedCopyBufferSubDataEXT("glNamedCopyBufferSubDataEXT");
glbinding::Function<void, GLuint, GLenum> Binding::NamedFramebufferDrawBuffer("glNamedFramebufferDrawBuffer");
glbinding::Function<void, GLuint, GLsizei, const GLenum *> Binding::NamedFramebufferDrawBuffers("glNamedFramebufferDrawBuffers");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteri("glNamedFramebufferParameteri");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::NamedFramebufferParameteriEXT("glNamedFramebufferParameteriEXT");
glbinding::Function<void, GLuint, GLenum> Binding::NamedFramebufferReadBuffer("glNamedFramebufferReadBuffer");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbuffer("glNamedFramebufferRenderbuffer");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint> Binding::NamedFramebufferRenderbufferEXT("glNamedFramebufferRenderbufferEXT");
glbinding::Function<void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvARB("glNamedFramebufferSampleLocationsfvARB");
glbinding::Function<void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture("glNamedFramebufferTexture");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture1DEXT("glNamedFramebufferTexture1DEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint, GLint> Binding::NamedFramebufferTexture2DEXT("glNamedFramebufferTexture2DEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTexture3DEXT("glNamedFramebufferTexture3DEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint> Binding::NamedFramebufferTextureEXT("glNamedFramebufferTextureEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint, GLenum> Binding::NamedFramebufferTextureFaceEXT("glNamedFramebufferTextureFaceEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayer("glNamedFramebufferTextureLayer");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint, GLint> Binding::NamedFramebufferTextureLayerEXT("glNamedFramebufferTextureLayerEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::NamedProgramLocalParameter4dEXT("glNamedProgramLocalParameter4dEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, const GLdouble *> Binding::NamedProgramLocalParameter4dvEXT("glNamedProgramLocalParameter4dvEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::NamedProgramLocalParameter4fEXT("glNamedProgramLocalParameter4fEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, const GLfloat *> Binding::NamedProgramLocalParameter4fvEXT("glNamedProgramLocalParameter4fvEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::NamedProgramLocalParameterI4iEXT("glNamedProgramLocalParameterI4iEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, const GLint *> Binding::NamedProgramLocalParameterI4ivEXT("glNamedProgramLocalParameterI4ivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::NamedProgramLocalParameterI4uiEXT("glNamedProgramLocalParameterI4uiEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, const GLuint *> Binding::NamedProgramLocalParameterI4uivEXT("glNamedProgramLocalParameterI4uivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, const GLfloat *> Binding::NamedProgramLocalParameters4fvEXT("glNamedProgramLocalParameters4fvEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, const GLint *> Binding::NamedProgramLocalParametersI4ivEXT("glNamedProgramLocalParametersI4ivEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLsizei, const GLuint *> Binding::NamedProgramLocalParametersI4uivEXT("glNamedProgramLocalParametersI4uivEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, GLsizei, const void *> Binding::NamedProgramStringEXT("glNamedProgramStringEXT");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorage("glNamedRenderbufferStorage");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageEXT("glNamedRenderbufferStorageEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisample("glNamedRenderbufferStorageMultisample");
glbinding::Function<void, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleCoverageEXT("glNamedRenderbufferStorageMultisampleCoverageEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleEXT("glNamedRenderbufferStorageMultisampleEXT");
glbinding::Function<void, GLenum, GLint, const GLchar *, GLint, const GLchar *> Binding::NamedStringARB("glNamedStringARB");
glbinding::Function<void, GLuint, GLenum> Binding::NewList("glNewList");
glbinding::Function<GLuint, GLsizei, const void *, GLenum> Binding::NewObjectBufferATI("glNewObjectBufferATI");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::Normal3b("glNormal3b");
glbinding::Function<void, const GLbyte *> Binding::Normal3bv("glNormal3bv");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Normal3d("glNormal3d");
glbinding::Function<void, const GLdouble *> Binding::Normal3dv("glNormal3dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Normal3f("glNormal3f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Normal3fVertex3fSUN("glNormal3fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *> Binding::Normal3fVertex3fvSUN("glNormal3fVertex3fvSUN");
glbinding::Function<void, const GLfloat *> Binding::Normal3fv("glNormal3fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Normal3hNV("glNormal3hNV");
glbinding::Function<void, const GLhalfNV *> Binding::Normal3hvNV("glNormal3hvNV");
glbinding::Function<void, GLint, GLint, GLint> Binding::Normal3i("glNormal3i");
glbinding::Function<void, const GLint *> Binding::Normal3iv("glNormal3iv");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::Normal3s("glNormal3s");
glbinding::Function<void, const GLshort *> Binding::Normal3sv("glNormal3sv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::Normal3xOES("glNormal3xOES");
glbinding::Function<void, const GLfixed *> Binding::Normal3xvOES("glNormal3xvOES");
glbinding::Function<void, GLenum, GLsizei> Binding::NormalFormatNV("glNormalFormatNV");
glbinding::Function<void, GLenum, GLuint> Binding::NormalP3ui("glNormalP3ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::NormalP3uiv("glNormalP3uiv");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::NormalPointer("glNormalPointer");
glbinding::Function<void, GLenum, GLsizei, GLsizei, const void *> Binding::NormalPointerEXT("glNormalPointerEXT");
glbinding::Function<void, GLenum, GLint, const void **, GLint> Binding::NormalPointerListIBM("glNormalPointerListIBM");
glbinding::Function<void, GLenum, const void **> Binding::NormalPointervINTEL("glNormalPointervINTEL");
glbinding::Function<void, GLenum, GLbyte, GLbyte, GLbyte> Binding::NormalStream3bATI("glNormalStream3bATI");
glbinding::Function<void, GLenum, const GLbyte *> Binding::NormalStream3bvATI("glNormalStream3bvATI");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::NormalStream3dATI("glNormalStream3dATI");
glbinding::Function<void, GLenum, const GLdouble *> Binding::NormalStream3dvATI("glNormalStream3dvATI");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::NormalStream3fATI("glNormalStream3fATI");
glbinding::Function<void, GLenum, const GLfloat *> Binding::NormalStream3fvATI("glNormalStream3fvATI");
glbinding::Function<void, GLenum, GLint, GLint, GLint> Binding::NormalStream3iATI("glNormalStream3iATI");
glbinding::Function<void, GLenum, const GLint *> Binding::NormalStream3ivATI("glNormalStream3ivATI");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort> Binding::NormalStream3sATI("glNormalStream3sATI");
glbinding::Function<void, GLenum, const GLshort *> Binding::NormalStream3svATI("glNormalStream3svATI");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabel("glObjectLabel");
glbinding::Function<void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabel("glObjectPtrLabel");
glbinding::Function<GLenum, GLenum, GLuint, GLenum> Binding::ObjectPurgeableAPPLE("glObjectPurgeableAPPLE");
glbinding::Function<GLenum, GLenum, GLuint, GLenum> Binding::ObjectUnpurgeableAPPLE("glObjectUnpurgeableAPPLE");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Ortho("glOrtho");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::OrthofOES("glOrthofOES");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed> Binding::OrthoxOES("glOrthoxOES");
glbinding::Function<void, GLenum, GLfloat> Binding::PNTrianglesfATI("glPNTrianglesfATI");
glbinding::Function<void, GLenum, GLint> Binding::PNTrianglesiATI("glPNTrianglesiATI");
glbinding::Function<void, GLuint, GLuint, GLenum> Binding::PassTexCoordATI("glPassTexCoordATI");
glbinding::Function<void, GLfloat> Binding::PassThrough("glPassThrough");
glbinding::Function<void, GLfixed> Binding::PassThroughxOES("glPassThroughxOES");
glbinding::Function<void, GLenum, const GLfloat *> Binding::PatchParameterfv("glPatchParameterfv");
glbinding::Function<void, GLenum, GLint> Binding::PatchParameteri("glPatchParameteri");
glbinding::Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::PathColorGenNV("glPathColorGenNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathCommandsNV("glPathCommandsNV");
glbinding::Function<void, GLuint, GLsizei, GLenum, const void *> Binding::PathCoordsNV("glPathCoordsNV");
glbinding::Function<void, GLenum> Binding::PathCoverDepthFuncNV("glPathCoverDepthFuncNV");
glbinding::Function<void, GLuint, GLsizei, const GLfloat *> Binding::PathDashArrayNV("glPathDashArrayNV");
glbinding::Function<void, GLenum> Binding::PathFogGenNV("glPathFogGenNV");
glbinding::Function<GLenum, GLuint, GLenum, const void *, PathFontStyle, GLuint, GLsizei, GLuint, GLfloat> Binding::PathGlyphIndexArrayNV("glPathGlyphIndexArrayNV");
glbinding::Function<GLenum, GLenum, const void *, PathFontStyle, GLuint, GLfloat, GLuint_array_2> Binding::PathGlyphIndexRangeNV("glPathGlyphIndexRangeNV");
glbinding::Function<void, GLuint, GLenum, const void *, PathFontStyle, GLuint, GLsizei, GLenum, GLuint, GLfloat> Binding::PathGlyphRangeNV("glPathGlyphRangeNV");
glbinding::Function<void, GLuint, GLenum, const void *, PathFontStyle, GLsizei, GLenum, const void *, GLenum, GLuint, GLfloat> Binding::PathGlyphsNV("glPathGlyphsNV");
glbinding::Function<GLenum, GLuint, GLenum, GLsizeiptr, const void *, GLsizei, GLuint, GLsizei, GLuint, GLfloat> Binding::PathMemoryGlyphIndexArrayNV("glPathMemoryGlyphIndexArrayNV");
glbinding::Function<void, GLuint, GLenum, GLfloat> Binding::PathParameterfNV("glPathParameterfNV");
glbinding::Function<void, GLuint, GLenum, const GLfloat *> Binding::PathParameterfvNV("glPathParameterfvNV");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::PathParameteriNV("glPathParameteriNV");
glbinding::Function<void, GLuint, GLenum, const GLint *> Binding::PathParameterivNV("glPathParameterivNV");
glbinding::Function<void, GLfloat, GLfloat> Binding::PathStencilDepthOffsetNV("glPathStencilDepthOffsetNV");
glbinding::Function<void, GLenum, GLint, GLuint> Binding::PathStencilFuncNV("glPathStencilFuncNV");
glbinding::Function<void, GLuint, GLenum, GLsizei, const void *> Binding::PathStringNV("glPathStringNV");
glbinding::Function<void, GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const void *> Binding::PathSubCommandsNV("glPathSubCommandsNV");
glbinding::Function<void, GLuint, GLsizei, GLsizei, GLenum, const void *> Binding::PathSubCoordsNV("glPathSubCoordsNV");
glbinding::Function<void, GLenum, GLenum, GLint, const GLfloat *> Binding::PathTexGenNV("glPathTexGenNV");
glbinding::Function<void> Binding::PauseTransformFeedback("glPauseTransformFeedback");
glbinding::Function<void> Binding::PauseTransformFeedbackNV("glPauseTransformFeedbackNV");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::PixelDataRangeNV("glPixelDataRangeNV");
glbinding::Function<void, GLenum, GLsizei, const GLfloat *> Binding::PixelMapfv("glPixelMapfv");
glbinding::Function<void, GLenum, GLsizei, const GLuint *> Binding::PixelMapuiv("glPixelMapuiv");
glbinding::Function<void, GLenum, GLsizei, const GLushort *> Binding::PixelMapusv("glPixelMapusv");
glbinding::Function<void, GLenum, GLint, const GLfixed *> Binding::PixelMapx("glPixelMapx");
glbinding::Function<void, GLenum, GLfloat> Binding::PixelStoref("glPixelStoref");
glbinding::Function<void, GLenum, GLint> Binding::PixelStorei("glPixelStorei");
glbinding::Function<void, GLenum, GLfixed> Binding::PixelStorex("glPixelStorex");
glbinding::Function<void, GLenum, GLfloat> Binding::PixelTexGenParameterfSGIS("glPixelTexGenParameterfSGIS");
glbinding::Function<void, GLenum, const GLfloat *> Binding::PixelTexGenParameterfvSGIS("glPixelTexGenParameterfvSGIS");
glbinding::Function<void, GLenum, GLint> Binding::PixelTexGenParameteriSGIS("glPixelTexGenParameteriSGIS");
glbinding::Function<void, GLenum, const GLint *> Binding::PixelTexGenParameterivSGIS("glPixelTexGenParameterivSGIS");
glbinding::Function<void, GLenum> Binding::PixelTexGenSGIX("glPixelTexGenSGIX");
glbinding::Function<void, GLenum, GLfloat> Binding::PixelTransferf("glPixelTransferf");
glbinding::Function<void, GLenum, GLint> Binding::PixelTransferi("glPixelTransferi");
glbinding::Function<void, GLenum, GLfixed> Binding::PixelTransferxOES("glPixelTransferxOES");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::PixelTransformParameterfEXT("glPixelTransformParameterfEXT");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::PixelTransformParameterfvEXT("glPixelTransformParameterfvEXT");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::PixelTransformParameteriEXT("glPixelTransformParameteriEXT");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::PixelTransformParameterivEXT("glPixelTransformParameterivEXT");
glbinding::Function<void, GLfloat, GLfloat> Binding::PixelZoom("glPixelZoom");
glbinding::Function<void, GLfixed, GLfixed> Binding::PixelZoomxOES("glPixelZoomxOES");
glbinding::Function<GLboolean, GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat *> Binding::PointAlongPathNV("glPointAlongPathNV");
glbinding::Function<void, GLenum, GLfloat> Binding::PointParameterf("glPointParameterf");
glbinding::Function<void, GLenum, GLfloat> Binding::PointParameterfARB("glPointParameterfARB");
glbinding::Function<void, GLenum, GLfloat> Binding::PointParameterfEXT("glPointParameterfEXT");
glbinding::Function<void, GLenum, GLfloat> Binding::PointParameterfSGIS("glPointParameterfSGIS");
glbinding::Function<void, GLenum, const GLfloat *> Binding::PointParameterfv("glPointParameterfv");
glbinding::Function<void, GLenum, const GLfloat *> Binding::PointParameterfvARB("glPointParameterfvARB");
glbinding::Function<void, GLenum, const GLfloat *> Binding::PointParameterfvEXT("glPointParameterfvEXT");
glbinding::Function<void, GLenum, const GLfloat *> Binding::PointParameterfvSGIS("glPointParameterfvSGIS");
glbinding::Function<void, GLenum, GLint> Binding::PointParameteri("glPointParameteri");
glbinding::Function<void, GLenum, GLint> Binding::PointParameteriNV("glPointParameteriNV");
glbinding::Function<void, GLenum, const GLint *> Binding::PointParameteriv("glPointParameteriv");
glbinding::Function<void, GLenum, const GLint *> Binding::PointParameterivNV("glPointParameterivNV");
glbinding::Function<void, GLenum, const GLfixed *> Binding::PointParameterxvOES("glPointParameterxvOES");
glbinding::Function<void, GLfloat> Binding::PointSize("glPointSize");
glbinding::Function<void, GLfixed> Binding::PointSizexOES("glPointSizexOES");
glbinding::Function<GLint, GLuint *> Binding::PollAsyncSGIX("glPollAsyncSGIX");
glbinding::Function<GLint, GLint *> Binding::PollInstrumentsSGIX("glPollInstrumentsSGIX");
glbinding::Function<void, GLenum, GLenum> Binding::PolygonMode("glPolygonMode");
glbinding::Function<void, GLfloat, GLfloat> Binding::PolygonOffset("glPolygonOffset");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::PolygonOffsetClampEXT("glPolygonOffsetClampEXT");
glbinding::Function<void, GLfloat, GLfloat> Binding::PolygonOffsetEXT("glPolygonOffsetEXT");
glbinding::Function<void, GLfixed, GLfixed> Binding::PolygonOffsetxOES("glPolygonOffsetxOES");
glbinding::Function<void, const GLubyte *> Binding::PolygonStipple("glPolygonStipple");
glbinding::Function<void> Binding::PopAttrib("glPopAttrib");
glbinding::Function<void> Binding::PopClientAttrib("glPopClientAttrib");
glbinding::Function<void> Binding::PopDebugGroup("glPopDebugGroup");
glbinding::Function<void> Binding::PopGroupMarkerEXT("glPopGroupMarkerEXT");
glbinding::Function<void> Binding::PopMatrix("glPopMatrix");
glbinding::Function<void> Binding::PopName("glPopName");
glbinding::Function<void, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint> Binding::PresentFrameDualFillNV("glPresentFrameDualFillNV");
glbinding::Function<void, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint> Binding::PresentFrameKeyedNV("glPresentFrameKeyedNV");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::PrimitiveBoundingBoxARB("glPrimitiveBoundingBoxARB");
glbinding::Function<void, GLuint> Binding::PrimitiveRestartIndex("glPrimitiveRestartIndex");
glbinding::Function<void, GLuint> Binding::PrimitiveRestartIndexNV("glPrimitiveRestartIndexNV");
glbinding::Function<void> Binding::PrimitiveRestartNV("glPrimitiveRestartNV");
glbinding::Function<void, GLsizei, const GLuint *, const GLfloat *> Binding::PrioritizeTextures("glPrioritizeTextures");
glbinding::Function<void, GLsizei, const GLuint *, const GLclampf *> Binding::PrioritizeTexturesEXT("glPrioritizeTexturesEXT");
glbinding::Function<void, GLsizei, const GLuint *, const GLfixed *> Binding::PrioritizeTexturesxOES("glPrioritizeTexturesxOES");
glbinding::Function<void, GLuint, GLenum, const void *, GLsizei> Binding::ProgramBinary("glProgramBinary");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei, const GLint *> Binding::ProgramBufferParametersIivNV("glProgramBufferParametersIivNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei, const GLuint *> Binding::ProgramBufferParametersIuivNV("glProgramBufferParametersIuivNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLsizei, const GLfloat *> Binding::ProgramBufferParametersfvNV("glProgramBufferParametersfvNV");
glbinding::Function<void, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramEnvParameter4dARB("glProgramEnvParameter4dARB");
glbinding::Function<void, GLenum, GLuint, const GLdouble *> Binding::ProgramEnvParameter4dvARB("glProgramEnvParameter4dvARB");
glbinding::Function<void, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramEnvParameter4fARB("glProgramEnvParameter4fARB");
glbinding::Function<void, GLenum, GLuint, const GLfloat *> Binding::ProgramEnvParameter4fvARB("glProgramEnvParameter4fvARB");
glbinding::Function<void, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramEnvParameterI4iNV("glProgramEnvParameterI4iNV");
glbinding::Function<void, GLenum, GLuint, const GLint *> Binding::ProgramEnvParameterI4ivNV("glProgramEnvParameterI4ivNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramEnvParameterI4uiNV("glProgramEnvParameterI4uiNV");
glbinding::Function<void, GLenum, GLuint, const GLuint *> Binding::ProgramEnvParameterI4uivNV("glProgramEnvParameterI4uivNV");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::ProgramEnvParameters4fvEXT("glProgramEnvParameters4fvEXT");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLint *> Binding::ProgramEnvParametersI4ivNV("glProgramEnvParametersI4ivNV");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLuint *> Binding::ProgramEnvParametersI4uivNV("glProgramEnvParametersI4uivNV");
glbinding::Function<void, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramLocalParameter4dARB("glProgramLocalParameter4dARB");
glbinding::Function<void, GLenum, GLuint, const GLdouble *> Binding::ProgramLocalParameter4dvARB("glProgramLocalParameter4dvARB");
glbinding::Function<void, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramLocalParameter4fARB("glProgramLocalParameter4fARB");
glbinding::Function<void, GLenum, GLuint, const GLfloat *> Binding::ProgramLocalParameter4fvARB("glProgramLocalParameter4fvARB");
glbinding::Function<void, GLenum, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramLocalParameterI4iNV("glProgramLocalParameterI4iNV");
glbinding::Function<void, GLenum, GLuint, const GLint *> Binding::ProgramLocalParameterI4ivNV("glProgramLocalParameterI4ivNV");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramLocalParameterI4uiNV("glProgramLocalParameterI4uiNV");
glbinding::Function<void, GLenum, GLuint, const GLuint *> Binding::ProgramLocalParameterI4uivNV("glProgramLocalParameterI4uivNV");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::ProgramLocalParameters4fvEXT("glProgramLocalParameters4fvEXT");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLint *> Binding::ProgramLocalParametersI4ivNV("glProgramLocalParametersI4ivNV");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLuint *> Binding::ProgramLocalParametersI4uivNV("glProgramLocalParametersI4uivNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramNamedParameter4dNV("glProgramNamedParameter4dNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, const GLdouble *> Binding::ProgramNamedParameter4dvNV("glProgramNamedParameter4dvNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramNamedParameter4fNV("glProgramNamedParameter4fNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *, const GLfloat *> Binding::ProgramNamedParameter4fvNV("glProgramNamedParameter4fvNV");
glbinding::Function<void, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramParameter4dNV("glProgramParameter4dNV");
glbinding::Function<void, GLenum, GLuint, const GLdouble *> Binding::ProgramParameter4dvNV("glProgramParameter4dvNV");
glbinding::Function<void, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramParameter4fNV("glProgramParameter4fNV");
glbinding::Function<void, GLenum, GLuint, const GLfloat *> Binding::ProgramParameter4fvNV("glProgramParameter4fvNV");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::ProgramParameteri("glProgramParameteri");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::ProgramParameteriARB("glProgramParameteriARB");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::ProgramParameteriEXT("glProgramParameteriEXT");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLdouble *> Binding::ProgramParameters4dvNV("glProgramParameters4dvNV");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLfloat *> Binding::ProgramParameters4fvNV("glProgramParameters4fvNV");
glbinding::Function<void, GLuint, GLint, GLenum, GLint, const GLfloat *> Binding::ProgramPathFragmentInputGenNV("glProgramPathFragmentInputGenNV");
glbinding::Function<void, GLenum, GLenum, GLsizei, const void *> Binding::ProgramStringARB("glProgramStringARB");
glbinding::Function<void, GLenum, GLsizei, const GLuint *> Binding::ProgramSubroutineParametersuivNV("glProgramSubroutineParametersuivNV");
glbinding::Function<void, GLuint, GLint, GLdouble> Binding::ProgramUniform1d("glProgramUniform1d");
glbinding::Function<void, GLuint, GLint, GLdouble> Binding::ProgramUniform1dEXT("glProgramUniform1dEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform1dv("glProgramUniform1dv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform1dvEXT("glProgramUniform1dvEXT");
glbinding::Function<void, GLuint, GLint, GLfloat> Binding::ProgramUniform1f("glProgramUniform1f");
glbinding::Function<void, GLuint, GLint, GLfloat> Binding::ProgramUniform1fEXT("glProgramUniform1fEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fv("glProgramUniform1fv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform1fvEXT("glProgramUniform1fvEXT");
glbinding::Function<void, GLuint, GLint, GLint> Binding::ProgramUniform1i("glProgramUniform1i");
glbinding::Function<void, GLuint, GLint, GLint64> Binding::ProgramUniform1i64ARB("glProgramUniform1i64ARB");
glbinding::Function<void, GLuint, GLint, GLint64EXT> Binding::ProgramUniform1i64NV("glProgramUniform1i64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64 *> Binding::ProgramUniform1i64vARB("glProgramUniform1i64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform1i64vNV("glProgramUniform1i64vNV");
glbinding::Function<void, GLuint, GLint, GLint> Binding::ProgramUniform1iEXT("glProgramUniform1iEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1iv("glProgramUniform1iv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform1ivEXT("glProgramUniform1ivEXT");
glbinding::Function<void, GLuint, GLint, GLuint> Binding::ProgramUniform1ui("glProgramUniform1ui");
glbinding::Function<void, GLuint, GLint, GLuint64> Binding::ProgramUniform1ui64ARB("glProgramUniform1ui64ARB");
glbinding::Function<void, GLuint, GLint, GLuint64EXT> Binding::ProgramUniform1ui64NV("glProgramUniform1ui64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniform1ui64vARB("glProgramUniform1ui64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform1ui64vNV("glProgramUniform1ui64vNV");
glbinding::Function<void, GLuint, GLint, GLuint> Binding::ProgramUniform1uiEXT("glProgramUniform1uiEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uiv("glProgramUniform1uiv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform1uivEXT("glProgramUniform1uivEXT");
glbinding::Function<void, GLuint, GLint, GLdouble, GLdouble> Binding::ProgramUniform2d("glProgramUniform2d");
glbinding::Function<void, GLuint, GLint, GLdouble, GLdouble> Binding::ProgramUniform2dEXT("glProgramUniform2dEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform2dv("glProgramUniform2dv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform2dvEXT("glProgramUniform2dvEXT");
glbinding::Function<void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2f("glProgramUniform2f");
glbinding::Function<void, GLuint, GLint, GLfloat, GLfloat> Binding::ProgramUniform2fEXT("glProgramUniform2fEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fv("glProgramUniform2fv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform2fvEXT("glProgramUniform2fvEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2i("glProgramUniform2i");
glbinding::Function<void, GLuint, GLint, GLint64, GLint64> Binding::ProgramUniform2i64ARB("glProgramUniform2i64ARB");
glbinding::Function<void, GLuint, GLint, GLint64EXT, GLint64EXT> Binding::ProgramUniform2i64NV("glProgramUniform2i64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64 *> Binding::ProgramUniform2i64vARB("glProgramUniform2i64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform2i64vNV("glProgramUniform2i64vNV");
glbinding::Function<void, GLuint, GLint, GLint, GLint> Binding::ProgramUniform2iEXT("glProgramUniform2iEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2iv("glProgramUniform2iv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform2ivEXT("glProgramUniform2ivEXT");
glbinding::Function<void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2ui("glProgramUniform2ui");
glbinding::Function<void, GLuint, GLint, GLuint64, GLuint64> Binding::ProgramUniform2ui64ARB("glProgramUniform2ui64ARB");
glbinding::Function<void, GLuint, GLint, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform2ui64NV("glProgramUniform2ui64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniform2ui64vARB("glProgramUniform2ui64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform2ui64vNV("glProgramUniform2ui64vNV");
glbinding::Function<void, GLuint, GLint, GLuint, GLuint> Binding::ProgramUniform2uiEXT("glProgramUniform2uiEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uiv("glProgramUniform2uiv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform2uivEXT("glProgramUniform2uivEXT");
glbinding::Function<void, GLuint, GLint, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform3d("glProgramUniform3d");
glbinding::Function<void, GLuint, GLint, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform3dEXT("glProgramUniform3dEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform3dv("glProgramUniform3dv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform3dvEXT("glProgramUniform3dvEXT");
glbinding::Function<void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3f("glProgramUniform3f");
glbinding::Function<void, GLuint, GLint, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform3fEXT("glProgramUniform3fEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fv("glProgramUniform3fv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform3fvEXT("glProgramUniform3fvEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3i("glProgramUniform3i");
glbinding::Function<void, GLuint, GLint, GLint64, GLint64, GLint64> Binding::ProgramUniform3i64ARB("glProgramUniform3i64ARB");
glbinding::Function<void, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::ProgramUniform3i64NV("glProgramUniform3i64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64 *> Binding::ProgramUniform3i64vARB("glProgramUniform3i64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform3i64vNV("glProgramUniform3i64vNV");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint> Binding::ProgramUniform3iEXT("glProgramUniform3iEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3iv("glProgramUniform3iv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform3ivEXT("glProgramUniform3ivEXT");
glbinding::Function<void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3ui("glProgramUniform3ui");
glbinding::Function<void, GLuint, GLint, GLuint64, GLuint64, GLuint64> Binding::ProgramUniform3ui64ARB("glProgramUniform3ui64ARB");
glbinding::Function<void, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform3ui64NV("glProgramUniform3ui64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniform3ui64vARB("glProgramUniform3ui64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform3ui64vNV("glProgramUniform3ui64vNV");
glbinding::Function<void, GLuint, GLint, GLuint, GLuint, GLuint> Binding::ProgramUniform3uiEXT("glProgramUniform3uiEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uiv("glProgramUniform3uiv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform3uivEXT("glProgramUniform3uivEXT");
glbinding::Function<void, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform4d("glProgramUniform4d");
glbinding::Function<void, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::ProgramUniform4dEXT("glProgramUniform4dEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform4dv("glProgramUniform4dv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLdouble *> Binding::ProgramUniform4dvEXT("glProgramUniform4dvEXT");
glbinding::Function<void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4f("glProgramUniform4f");
glbinding::Function<void, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ProgramUniform4fEXT("glProgramUniform4fEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fv("glProgramUniform4fv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLfloat *> Binding::ProgramUniform4fvEXT("glProgramUniform4fvEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4i("glProgramUniform4i");
glbinding::Function<void, GLuint, GLint, GLint64, GLint64, GLint64, GLint64> Binding::ProgramUniform4i64ARB("glProgramUniform4i64ARB");
glbinding::Function<void, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::ProgramUniform4i64NV("glProgramUniform4i64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64 *> Binding::ProgramUniform4i64vARB("glProgramUniform4i64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint64EXT *> Binding::ProgramUniform4i64vNV("glProgramUniform4i64vNV");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLint> Binding::ProgramUniform4iEXT("glProgramUniform4iEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4iv("glProgramUniform4iv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLint *> Binding::ProgramUniform4ivEXT("glProgramUniform4ivEXT");
glbinding::Function<void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4ui("glProgramUniform4ui");
glbinding::Function<void, GLuint, GLint, GLuint64, GLuint64, GLuint64, GLuint64> Binding::ProgramUniform4ui64ARB("glProgramUniform4ui64ARB");
glbinding::Function<void, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::ProgramUniform4ui64NV("glProgramUniform4ui64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniform4ui64vARB("glProgramUniform4ui64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniform4ui64vNV("glProgramUniform4ui64vNV");
glbinding::Function<void, GLuint, GLint, GLuint, GLuint, GLuint, GLuint> Binding::ProgramUniform4uiEXT("glProgramUniform4uiEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uiv("glProgramUniform4uiv");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint *> Binding::ProgramUniform4uivEXT("glProgramUniform4uivEXT");
glbinding::Function<void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64ARB("glProgramUniformHandleui64ARB");
glbinding::Function<void, GLuint, GLint, GLuint64> Binding::ProgramUniformHandleui64NV("glProgramUniformHandleui64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vARB("glProgramUniformHandleui64vARB");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64 *> Binding::ProgramUniformHandleui64vNV("glProgramUniformHandleui64vNV");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2dv("glProgramUniformMatrix2dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2dvEXT("glProgramUniformMatrix2dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fv("glProgramUniformMatrix2fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2fvEXT("glProgramUniformMatrix2fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x3dv("glProgramUniformMatrix2x3dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x3dvEXT("glProgramUniformMatrix2x3dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fv("glProgramUniformMatrix2x3fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x3fvEXT("glProgramUniformMatrix2x3fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x4dv("glProgramUniformMatrix2x4dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix2x4dvEXT("glProgramUniformMatrix2x4dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fv("glProgramUniformMatrix2x4fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix2x4fvEXT("glProgramUniformMatrix2x4fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3dv("glProgramUniformMatrix3dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3dvEXT("glProgramUniformMatrix3dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fv("glProgramUniformMatrix3fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3fvEXT("glProgramUniformMatrix3fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x2dv("glProgramUniformMatrix3x2dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x2dvEXT("glProgramUniformMatrix3x2dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fv("glProgramUniformMatrix3x2fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x2fvEXT("glProgramUniformMatrix3x2fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x4dv("glProgramUniformMatrix3x4dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix3x4dvEXT("glProgramUniformMatrix3x4dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fv("glProgramUniformMatrix3x4fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix3x4fvEXT("glProgramUniformMatrix3x4fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4dv("glProgramUniformMatrix4dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4dvEXT("glProgramUniformMatrix4dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fv("glProgramUniformMatrix4fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4fvEXT("glProgramUniformMatrix4fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x2dv("glProgramUniformMatrix4x2dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x2dvEXT("glProgramUniformMatrix4x2dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fv("glProgramUniformMatrix4x2fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x2fvEXT("glProgramUniformMatrix4x2fvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x3dv("glProgramUniformMatrix4x3dv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLdouble *> Binding::ProgramUniformMatrix4x3dvEXT("glProgramUniformMatrix4x3dvEXT");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fv("glProgramUniformMatrix4x3fv");
glbinding::Function<void, GLuint, GLint, GLsizei, GLboolean, const GLfloat *> Binding::ProgramUniformMatrix4x3fvEXT("glProgramUniformMatrix4x3fvEXT");
glbinding::Function<void, GLuint, GLint, GLuint64EXT> Binding::ProgramUniformui64NV("glProgramUniformui64NV");
glbinding::Function<void, GLuint, GLint, GLsizei, const GLuint64EXT *> Binding::ProgramUniformui64vNV("glProgramUniformui64vNV");
glbinding::Function<void, GLenum, GLint> Binding::ProgramVertexLimitNV("glProgramVertexLimitNV");
glbinding::Function<void, GLenum> Binding::ProvokingVertex("glProvokingVertex");
glbinding::Function<void, GLenum> Binding::ProvokingVertexEXT("glProvokingVertexEXT");
glbinding::Function<void, AttribMask> Binding::PushAttrib("glPushAttrib");
glbinding::Function<void, ClientAttribMask> Binding::PushClientAttrib("glPushClientAttrib");
glbinding::Function<void, ClientAttribMask> Binding::PushClientAttribDefaultEXT("glPushClientAttribDefaultEXT");
glbinding::Function<void, GLenum, GLuint, GLsizei, const GLchar *> Binding::PushDebugGroup("glPushDebugGroup");
glbinding::Function<void, GLsizei, const GLchar *> Binding::PushGroupMarkerEXT("glPushGroupMarkerEXT");
glbinding::Function<void> Binding::PushMatrix("glPushMatrix");
glbinding::Function<void, GLuint> Binding::PushName("glPushName");
glbinding::Function<void, GLuint, GLenum> Binding::QueryCounter("glQueryCounter");
glbinding::Function<GLbitfield, GLfixed *, GLint *> Binding::QueryMatrixxOES("glQueryMatrixxOES");
glbinding::Function<void, GLenum, GLuint, GLenum, GLuint> Binding::QueryObjectParameteruiAMD("glQueryObjectParameteruiAMD");
glbinding::Function<void, GLdouble, GLdouble> Binding::RasterPos2d("glRasterPos2d");
glbinding::Function<void, const GLdouble *> Binding::RasterPos2dv("glRasterPos2dv");
glbinding::Function<void, GLfloat, GLfloat> Binding::RasterPos2f("glRasterPos2f");
glbinding::Function<void, const GLfloat *> Binding::RasterPos2fv("glRasterPos2fv");
glbinding::Function<void, GLint, GLint> Binding::RasterPos2i("glRasterPos2i");
glbinding::Function<void, const GLint *> Binding::RasterPos2iv("glRasterPos2iv");
glbinding::Function<void, GLshort, GLshort> Binding::RasterPos2s("glRasterPos2s");
glbinding::Function<void, const GLshort *> Binding::RasterPos2sv("glRasterPos2sv");
glbinding::Function<void, GLfixed, GLfixed> Binding::RasterPos2xOES("glRasterPos2xOES");
glbinding::Function<void, const GLfixed *> Binding::RasterPos2xvOES("glRasterPos2xvOES");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::RasterPos3d("glRasterPos3d");
glbinding::Function<void, const GLdouble *> Binding::RasterPos3dv("glRasterPos3dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::RasterPos3f("glRasterPos3f");
glbinding::Function<void, const GLfloat *> Binding::RasterPos3fv("glRasterPos3fv");
glbinding::Function<void, GLint, GLint, GLint> Binding::RasterPos3i("glRasterPos3i");
glbinding::Function<void, const GLint *> Binding::RasterPos3iv("glRasterPos3iv");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::RasterPos3s("glRasterPos3s");
glbinding::Function<void, const GLshort *> Binding::RasterPos3sv("glRasterPos3sv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::RasterPos3xOES("glRasterPos3xOES");
glbinding::Function<void, const GLfixed *> Binding::RasterPos3xvOES("glRasterPos3xvOES");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::RasterPos4d("glRasterPos4d");
glbinding::Function<void, const GLdouble *> Binding::RasterPos4dv("glRasterPos4dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::RasterPos4f("glRasterPos4f");
glbinding::Function<void, const GLfloat *> Binding::RasterPos4fv("glRasterPos4fv");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::RasterPos4i("glRasterPos4i");
glbinding::Function<void, const GLint *> Binding::RasterPos4iv("glRasterPos4iv");
glbinding::Function<void, GLshort, GLshort, GLshort, GLshort> Binding::RasterPos4s("glRasterPos4s");
glbinding::Function<void, const GLshort *> Binding::RasterPos4sv("glRasterPos4sv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RasterPos4xOES("glRasterPos4xOES");
glbinding::Function<void, const GLfixed *> Binding::RasterPos4xvOES("glRasterPos4xvOES");
glbinding::Function<void, GLuint, GLboolean> Binding::RasterSamplesEXT("glRasterSamplesEXT");
glbinding::Function<void, GLenum> Binding::ReadBuffer("glReadBuffer");
glbinding::Function<void, GLint> Binding::ReadInstrumentsSGIX("glReadInstrumentsSGIX");
glbinding::Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *> Binding::ReadPixels("glReadPixels");
glbinding::Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixels("glReadnPixels");
glbinding::Function<void, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *> Binding::ReadnPixelsARB("glReadnPixelsARB");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rectd("glRectd");
glbinding::Function<void, const GLdouble *, const GLdouble *> Binding::Rectdv("glRectdv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rectf("glRectf");
glbinding::Function<void, const GLfloat *, const GLfloat *> Binding::Rectfv("glRectfv");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::Recti("glRecti");
glbinding::Function<void, const GLint *, const GLint *> Binding::Rectiv("glRectiv");
glbinding::Function<void, GLshort, GLshort, GLshort, GLshort> Binding::Rects("glRects");
glbinding::Function<void, const GLshort *, const GLshort *> Binding::Rectsv("glRectsv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RectxOES("glRectxOES");
glbinding::Function<void, const GLfixed *, const GLfixed *> Binding::RectxvOES("glRectxvOES");
glbinding::Function<void, const GLdouble *> Binding::ReferencePlaneSGIX("glReferencePlaneSGIX");
glbinding::Function<void> Binding::ReleaseShaderCompiler("glReleaseShaderCompiler");
glbinding::Function<GLint, GLenum> Binding::RenderMode("glRenderMode");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorage("glRenderbufferStorage");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageEXT("glRenderbufferStorageEXT");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisample("glRenderbufferStorageMultisample");
glbinding::Function<void, GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleCoverageNV("glRenderbufferStorageMultisampleCoverageNV");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::RenderbufferStorageMultisampleEXT("glRenderbufferStorageMultisampleEXT");
glbinding::Function<void, GLenum, GLsizei, const void **> Binding::ReplacementCodePointerSUN("glReplacementCodePointerSUN");
glbinding::Function<void, GLubyte> Binding::ReplacementCodeubSUN("glReplacementCodeubSUN");
glbinding::Function<void, const GLubyte *> Binding::ReplacementCodeubvSUN("glReplacementCodeubvSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor3fVertex3fSUN("glReplacementCodeuiColor3fVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor3fVertex3fvSUN("glReplacementCodeuiColor3fVertex3fvSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4fNormal3fVertex3fSUN("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiColor4fNormal3fVertex3fvSUN("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
glbinding::Function<void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiColor4ubVertex3fSUN("glReplacementCodeuiColor4ubVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLubyte *, const GLfloat *> Binding::ReplacementCodeuiColor4ubVertex3fvSUN("glReplacementCodeuiColor4ubVertex3fvSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiNormal3fVertex3fSUN("glReplacementCodeuiNormal3fVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiNormal3fVertex3fvSUN("glReplacementCodeuiNormal3fVertex3fvSUN");
glbinding::Function<void, GLuint> Binding::ReplacementCodeuiSUN("glReplacementCodeuiSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiTexCoord2fVertex3fSUN("glReplacementCodeuiTexCoord2fVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *, const GLfloat *> Binding::ReplacementCodeuiTexCoord2fVertex3fvSUN("glReplacementCodeuiTexCoord2fVertex3fvSUN");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat> Binding::ReplacementCodeuiVertex3fSUN("glReplacementCodeuiVertex3fSUN");
glbinding::Function<void, const GLuint *, const GLfloat *> Binding::ReplacementCodeuiVertex3fvSUN("glReplacementCodeuiVertex3fvSUN");
glbinding::Function<void, const GLuint *> Binding::ReplacementCodeuivSUN("glReplacementCodeuivSUN");
glbinding::Function<void, GLushort> Binding::ReplacementCodeusSUN("glReplacementCodeusSUN");
glbinding::Function<void, const GLushort *> Binding::ReplacementCodeusvSUN("glReplacementCodeusvSUN");
glbinding::Function<void, GLsizei, const GLuint *> Binding::RequestResidentProgramsNV("glRequestResidentProgramsNV");
glbinding::Function<void, GLenum> Binding::ResetHistogram("glResetHistogram");
glbinding::Function<void, GLenum> Binding::ResetHistogramEXT("glResetHistogramEXT");
glbinding::Function<void, GLenum> Binding::ResetMinmax("glResetMinmax");
glbinding::Function<void, GLenum> Binding::ResetMinmaxEXT("glResetMinmaxEXT");
glbinding::Function<void> Binding::ResizeBuffersMESA("glResizeBuffersMESA");
glbinding::Function<void> Binding::ResolveDepthValuesNV("glResolveDepthValuesNV");
glbinding::Function<void> Binding::ResumeTransformFeedback("glResumeTransformFeedback");
glbinding::Function<void> Binding::ResumeTransformFeedbackNV("glResumeTransformFeedbackNV");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Rotated("glRotated");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Rotatef("glRotatef");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::RotatexOES("glRotatexOES");
glbinding::Function<void, GLfloat, GLboolean> Binding::SampleCoverage("glSampleCoverage");
glbinding::Function<void, GLfloat, GLboolean> Binding::SampleCoverageARB("glSampleCoverageARB");
glbinding::Function<void, GLuint, GLuint, GLenum> Binding::SampleMapATI("glSampleMapATI");
glbinding::Function<void, GLclampf, GLboolean> Binding::SampleMaskEXT("glSampleMaskEXT");
glbinding::Function<void, GLuint, GLbitfield> Binding::SampleMaskIndexedNV("glSampleMaskIndexedNV");
glbinding::Function<void, GLclampf, GLboolean> Binding::SampleMaskSGIS("glSampleMaskSGIS");
glbinding::Function<void, GLuint, GLbitfield> Binding::SampleMaski("glSampleMaski");
glbinding::Function<void, GLenum> Binding::SamplePatternEXT("glSamplePatternEXT");
glbinding::Function<void, GLenum> Binding::SamplePatternSGIS("glSamplePatternSGIS");
glbinding::Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameterIiv("glSamplerParameterIiv");
glbinding::Function<void, GLuint, GLenum, const GLuint *> Binding::SamplerParameterIuiv("glSamplerParameterIuiv");
glbinding::Function<void, GLuint, GLenum, GLfloat> Binding::SamplerParameterf("glSamplerParameterf");
glbinding::Function<void, GLuint, GLenum, const GLfloat *> Binding::SamplerParameterfv("glSamplerParameterfv");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::SamplerParameteri("glSamplerParameteri");
glbinding::Function<void, GLuint, GLenum, const GLint *> Binding::SamplerParameteriv("glSamplerParameteriv");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Scaled("glScaled");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Scalef("glScalef");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::ScalexOES("glScalexOES");
glbinding::Function<void, GLint, GLint, GLsizei, GLsizei> Binding::Scissor("glScissor");
glbinding::Function<void, GLuint, GLsizei, const GLint *> Binding::ScissorArrayv("glScissorArrayv");
glbinding::Function<void, GLuint, GLint, GLint, GLsizei, GLsizei> Binding::ScissorIndexed("glScissorIndexed");
glbinding::Function<void, GLuint, const GLint *> Binding::ScissorIndexedv("glScissorIndexedv");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3b("glSecondaryColor3b");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::SecondaryColor3bEXT("glSecondaryColor3bEXT");
glbinding::Function<void, const GLbyte *> Binding::SecondaryColor3bv("glSecondaryColor3bv");
glbinding::Function<void, const GLbyte *> Binding::SecondaryColor3bvEXT("glSecondaryColor3bvEXT");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3d("glSecondaryColor3d");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::SecondaryColor3dEXT("glSecondaryColor3dEXT");
glbinding::Function<void, const GLdouble *> Binding::SecondaryColor3dv("glSecondaryColor3dv");
glbinding::Function<void, const GLdouble *> Binding::SecondaryColor3dvEXT("glSecondaryColor3dvEXT");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3f("glSecondaryColor3f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::SecondaryColor3fEXT("glSecondaryColor3fEXT");
glbinding::Function<void, const GLfloat *> Binding::SecondaryColor3fv("glSecondaryColor3fv");
glbinding::Function<void, const GLfloat *> Binding::SecondaryColor3fvEXT("glSecondaryColor3fvEXT");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::SecondaryColor3hNV("glSecondaryColor3hNV");
glbinding::Function<void, const GLhalfNV *> Binding::SecondaryColor3hvNV("glSecondaryColor3hvNV");
glbinding::Function<void, GLint, GLint, GLint> Binding::SecondaryColor3i("glSecondaryColor3i");
glbinding::Function<void, GLint, GLint, GLint> Binding::SecondaryColor3iEXT("glSecondaryColor3iEXT");
glbinding::Function<void, const GLint *> Binding::SecondaryColor3iv("glSecondaryColor3iv");
glbinding::Function<void, const GLint *> Binding::SecondaryColor3ivEXT("glSecondaryColor3ivEXT");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::SecondaryColor3s("glSecondaryColor3s");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::SecondaryColor3sEXT("glSecondaryColor3sEXT");
glbinding::Function<void, const GLshort *> Binding::SecondaryColor3sv("glSecondaryColor3sv");
glbinding::Function<void, const GLshort *> Binding::SecondaryColor3svEXT("glSecondaryColor3svEXT");
glbinding::Function<void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ub("glSecondaryColor3ub");
glbinding::Function<void, GLubyte, GLubyte, GLubyte> Binding::SecondaryColor3ubEXT("glSecondaryColor3ubEXT");
glbinding::Function<void, const GLubyte *> Binding::SecondaryColor3ubv("glSecondaryColor3ubv");
glbinding::Function<void, const GLubyte *> Binding::SecondaryColor3ubvEXT("glSecondaryColor3ubvEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::SecondaryColor3ui("glSecondaryColor3ui");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::SecondaryColor3uiEXT("glSecondaryColor3uiEXT");
glbinding::Function<void, const GLuint *> Binding::SecondaryColor3uiv("glSecondaryColor3uiv");
glbinding::Function<void, const GLuint *> Binding::SecondaryColor3uivEXT("glSecondaryColor3uivEXT");
glbinding::Function<void, GLushort, GLushort, GLushort> Binding::SecondaryColor3us("glSecondaryColor3us");
glbinding::Function<void, GLushort, GLushort, GLushort> Binding::SecondaryColor3usEXT("glSecondaryColor3usEXT");
glbinding::Function<void, const GLushort *> Binding::SecondaryColor3usv("glSecondaryColor3usv");
glbinding::Function<void, const GLushort *> Binding::SecondaryColor3usvEXT("glSecondaryColor3usvEXT");
glbinding::Function<void, GLint, GLenum, GLsizei> Binding::SecondaryColorFormatNV("glSecondaryColorFormatNV");
glbinding::Function<void, GLenum, GLuint> Binding::SecondaryColorP3ui("glSecondaryColorP3ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::SecondaryColorP3uiv("glSecondaryColorP3uiv");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointer("glSecondaryColorPointer");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::SecondaryColorPointerEXT("glSecondaryColorPointerEXT");
glbinding::Function<void, GLint, GLenum, GLint, const void **, GLint> Binding::SecondaryColorPointerListIBM("glSecondaryColorPointerListIBM");
glbinding::Function<void, GLsizei, GLuint *> Binding::SelectBuffer("glSelectBuffer");
glbinding::Function<void, GLuint, GLboolean, GLuint, GLint, GLuint *> Binding::SelectPerfMonitorCountersAMD("glSelectPerfMonitorCountersAMD");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2D("glSeparableFilter2D");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *> Binding::SeparableFilter2DEXT("glSeparableFilter2DEXT");
glbinding::Function<void, GLuint> Binding::SetFenceAPPLE("glSetFenceAPPLE");
glbinding::Function<void, GLuint, GLenum> Binding::SetFenceNV("glSetFenceNV");
glbinding::Function<void, GLuint, const GLfloat *> Binding::SetFragmentShaderConstantATI("glSetFragmentShaderConstantATI");
glbinding::Function<void, GLuint, GLenum, const void *> Binding::SetInvariantEXT("glSetInvariantEXT");
glbinding::Function<void, GLuint, GLenum, const void *> Binding::SetLocalConstantEXT("glSetLocalConstantEXT");
glbinding::Function<void, GLenum, GLuint, const GLfloat *> Binding::SetMultisamplefvAMD("glSetMultisamplefvAMD");
glbinding::Function<void, GLenum> Binding::ShadeModel("glShadeModel");
glbinding::Function<void, GLsizei, const GLuint *, GLenum, const void *, GLsizei> Binding::ShaderBinary("glShaderBinary");
glbinding::Function<void, GLenum, GLuint, GLuint> Binding::ShaderOp1EXT("glShaderOp1EXT");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint> Binding::ShaderOp2EXT("glShaderOp2EXT");
glbinding::Function<void, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::ShaderOp3EXT("glShaderOp3EXT");
glbinding::Function<void, GLuint, GLsizei, const GLchar *const*, const GLint *> Binding::ShaderSource("glShaderSource");
glbinding::Function<void, GLhandleARB, GLsizei, const GLcharARB **, const GLint *> Binding::ShaderSourceARB("glShaderSourceARB");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::ShaderStorageBlockBinding("glShaderStorageBlockBinding");
glbinding::Function<void, GLenum, GLsizei, const GLfloat *> Binding::SharpenTexFuncSGIS("glSharpenTexFuncSGIS");
glbinding::Function<void, GLenum, GLfloat> Binding::SpriteParameterfSGIX("glSpriteParameterfSGIX");
glbinding::Function<void, GLenum, const GLfloat *> Binding::SpriteParameterfvSGIX("glSpriteParameterfvSGIX");
glbinding::Function<void, GLenum, GLint> Binding::SpriteParameteriSGIX("glSpriteParameteriSGIX");
glbinding::Function<void, GLenum, const GLint *> Binding::SpriteParameterivSGIX("glSpriteParameterivSGIX");
glbinding::Function<void> Binding::StartInstrumentsSGIX("glStartInstrumentsSGIX");
glbinding::Function<void, GLuint, GLenum> Binding::StateCaptureNV("glStateCaptureNV");
glbinding::Function<void, GLsizei, GLuint> Binding::StencilClearTagEXT("glStencilClearTagEXT");
glbinding::Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, const GLfloat *> Binding::StencilFillPathInstancedNV("glStencilFillPathInstancedNV");
glbinding::Function<void, GLuint, GLenum, GLuint> Binding::StencilFillPathNV("glStencilFillPathNV");
glbinding::Function<void, GLenum, GLint, GLuint> Binding::StencilFunc("glStencilFunc");
glbinding::Function<void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparate("glStencilFuncSeparate");
glbinding::Function<void, GLenum, GLenum, GLint, GLuint> Binding::StencilFuncSeparateATI("glStencilFuncSeparateATI");
glbinding::Function<void, GLuint> Binding::StencilMask("glStencilMask");
glbinding::Function<void, GLenum, GLuint> Binding::StencilMaskSeparate("glStencilMaskSeparate");
glbinding::Function<void, GLenum, GLenum, GLenum> Binding::StencilOp("glStencilOp");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparate("glStencilOpSeparate");
glbinding::Function<void, GLenum, GLenum, GLenum, GLenum> Binding::StencilOpSeparateATI("glStencilOpSeparateATI");
glbinding::Function<void, GLenum, GLuint> Binding::StencilOpValueAMD("glStencilOpValueAMD");
glbinding::Function<void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, const GLfloat *> Binding::StencilStrokePathInstancedNV("glStencilStrokePathInstancedNV");
glbinding::Function<void, GLuint, GLint, GLuint> Binding::StencilStrokePathNV("glStencilStrokePathNV");
glbinding::Function<void, GLsizei, GLenum, const void *, GLuint, GLenum, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverFillPathInstancedNV("glStencilThenCoverFillPathInstancedNV");
glbinding::Function<void, GLuint, GLenum, GLuint, GLenum> Binding::StencilThenCoverFillPathNV("glStencilThenCoverFillPathNV");
glbinding::Function<void, GLsizei, GLenum, const void *, GLuint, GLint, GLuint, GLenum, GLenum, const GLfloat *> Binding::StencilThenCoverStrokePathInstancedNV("glStencilThenCoverStrokePathInstancedNV");
glbinding::Function<void, GLuint, GLint, GLuint, GLenum> Binding::StencilThenCoverStrokePathNV("glStencilThenCoverStrokePathNV");
glbinding::Function<void, GLint> Binding::StopInstrumentsSGIX("glStopInstrumentsSGIX");
glbinding::Function<void, GLsizei, const void *> Binding::StringMarkerGREMEDY("glStringMarkerGREMEDY");
glbinding::Function<void, GLuint, GLuint> Binding::SubpixelPrecisionBiasNV("glSubpixelPrecisionBiasNV");
glbinding::Function<void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::SwizzleEXT("glSwizzleEXT");
glbinding::Function<void, GLuint> Binding::SyncTextureINTEL("glSyncTextureINTEL");
glbinding::Function<void> Binding::TagSampleBufferSGIX("glTagSampleBufferSGIX");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::Tangent3bEXT("glTangent3bEXT");
glbinding::Function<void, const GLbyte *> Binding::Tangent3bvEXT("glTangent3bvEXT");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Tangent3dEXT("glTangent3dEXT");
glbinding::Function<void, const GLdouble *> Binding::Tangent3dvEXT("glTangent3dvEXT");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Tangent3fEXT("glTangent3fEXT");
glbinding::Function<void, const GLfloat *> Binding::Tangent3fvEXT("glTangent3fvEXT");
glbinding::Function<void, GLint, GLint, GLint> Binding::Tangent3iEXT("glTangent3iEXT");
glbinding::Function<void, const GLint *> Binding::Tangent3ivEXT("glTangent3ivEXT");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::Tangent3sEXT("glTangent3sEXT");
glbinding::Function<void, const GLshort *> Binding::Tangent3svEXT("glTangent3svEXT");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::TangentPointerEXT("glTangentPointerEXT");
glbinding::Function<void, GLuint> Binding::TbufferMask3DFX("glTbufferMask3DFX");
glbinding::Function<void, GLfloat> Binding::TessellationFactorAMD("glTessellationFactorAMD");
glbinding::Function<void, GLenum> Binding::TessellationModeAMD("glTessellationModeAMD");
glbinding::Function<GLboolean, GLuint> Binding::TestFenceAPPLE("glTestFenceAPPLE");
glbinding::Function<GLboolean, GLuint> Binding::TestFenceNV("glTestFenceNV");
glbinding::Function<GLboolean, GLenum, GLuint> Binding::TestObjectAPPLE("glTestObjectAPPLE");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::TexBuffer("glTexBuffer");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::TexBufferARB("glTexBufferARB");
glbinding::Function<void, GLenum, GLenum, GLuint> Binding::TexBufferEXT("glTexBufferEXT");
glbinding::Function<void, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TexBufferRange("glTexBufferRange");
glbinding::Function<void, GLenum, const GLfloat *> Binding::TexBumpParameterfvATI("glTexBumpParameterfvATI");
glbinding::Function<void, GLenum, const GLint *> Binding::TexBumpParameterivATI("glTexBumpParameterivATI");
glbinding::Function<void, GLbyte> Binding::TexCoord1bOES("glTexCoord1bOES");
glbinding::Function<void, const GLbyte *> Binding::TexCoord1bvOES("glTexCoord1bvOES");
glbinding::Function<void, GLdouble> Binding::TexCoord1d("glTexCoord1d");
glbinding::Function<void, const GLdouble *> Binding::TexCoord1dv("glTexCoord1dv");
glbinding::Function<void, GLfloat> Binding::TexCoord1f("glTexCoord1f");
glbinding::Function<void, const GLfloat *> Binding::TexCoord1fv("glTexCoord1fv");
glbinding::Function<void, GLhalfNV> Binding::TexCoord1hNV("glTexCoord1hNV");
glbinding::Function<void, const GLhalfNV *> Binding::TexCoord1hvNV("glTexCoord1hvNV");
glbinding::Function<void, GLint> Binding::TexCoord1i("glTexCoord1i");
glbinding::Function<void, const GLint *> Binding::TexCoord1iv("glTexCoord1iv");
glbinding::Function<void, GLshort> Binding::TexCoord1s("glTexCoord1s");
glbinding::Function<void, const GLshort *> Binding::TexCoord1sv("glTexCoord1sv");
glbinding::Function<void, GLfixed> Binding::TexCoord1xOES("glTexCoord1xOES");
glbinding::Function<void, const GLfixed *> Binding::TexCoord1xvOES("glTexCoord1xvOES");
glbinding::Function<void, GLbyte, GLbyte> Binding::TexCoord2bOES("glTexCoord2bOES");
glbinding::Function<void, const GLbyte *> Binding::TexCoord2bvOES("glTexCoord2bvOES");
glbinding::Function<void, GLdouble, GLdouble> Binding::TexCoord2d("glTexCoord2d");
glbinding::Function<void, const GLdouble *> Binding::TexCoord2dv("glTexCoord2dv");
glbinding::Function<void, GLfloat, GLfloat> Binding::TexCoord2f("glTexCoord2f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fColor3fVertex3fSUN("glTexCoord2fColor3fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord2fColor3fVertex3fvSUN("glTexCoord2fColor3fVertex3fvSUN");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fColor4fNormal3fVertex3fSUN("glTexCoord2fColor4fNormal3fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord2fColor4fNormal3fVertex3fvSUN("glTexCoord2fColor4fNormal3fVertex3fvSUN");
glbinding::Function<void, GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fColor4ubVertex3fSUN("glTexCoord2fColor4ubVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLubyte *, const GLfloat *> Binding::TexCoord2fColor4ubVertex3fvSUN("glTexCoord2fColor4ubVertex3fvSUN");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fNormal3fVertex3fSUN("glTexCoord2fNormal3fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord2fNormal3fVertex3fvSUN("glTexCoord2fNormal3fVertex3fvSUN");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord2fVertex3fSUN("glTexCoord2fVertex3fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *> Binding::TexCoord2fVertex3fvSUN("glTexCoord2fVertex3fvSUN");
glbinding::Function<void, const GLfloat *> Binding::TexCoord2fv("glTexCoord2fv");
glbinding::Function<void, GLhalfNV, GLhalfNV> Binding::TexCoord2hNV("glTexCoord2hNV");
glbinding::Function<void, const GLhalfNV *> Binding::TexCoord2hvNV("glTexCoord2hvNV");
glbinding::Function<void, GLint, GLint> Binding::TexCoord2i("glTexCoord2i");
glbinding::Function<void, const GLint *> Binding::TexCoord2iv("glTexCoord2iv");
glbinding::Function<void, GLshort, GLshort> Binding::TexCoord2s("glTexCoord2s");
glbinding::Function<void, const GLshort *> Binding::TexCoord2sv("glTexCoord2sv");
glbinding::Function<void, GLfixed, GLfixed> Binding::TexCoord2xOES("glTexCoord2xOES");
glbinding::Function<void, const GLfixed *> Binding::TexCoord2xvOES("glTexCoord2xvOES");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::TexCoord3bOES("glTexCoord3bOES");
glbinding::Function<void, const GLbyte *> Binding::TexCoord3bvOES("glTexCoord3bvOES");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::TexCoord3d("glTexCoord3d");
glbinding::Function<void, const GLdouble *> Binding::TexCoord3dv("glTexCoord3dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::TexCoord3f("glTexCoord3f");
glbinding::Function<void, const GLfloat *> Binding::TexCoord3fv("glTexCoord3fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::TexCoord3hNV("glTexCoord3hNV");
glbinding::Function<void, const GLhalfNV *> Binding::TexCoord3hvNV("glTexCoord3hvNV");
glbinding::Function<void, GLint, GLint, GLint> Binding::TexCoord3i("glTexCoord3i");
glbinding::Function<void, const GLint *> Binding::TexCoord3iv("glTexCoord3iv");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::TexCoord3s("glTexCoord3s");
glbinding::Function<void, const GLshort *> Binding::TexCoord3sv("glTexCoord3sv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::TexCoord3xOES("glTexCoord3xOES");
glbinding::Function<void, const GLfixed *> Binding::TexCoord3xvOES("glTexCoord3xvOES");
glbinding::Function<void, GLbyte, GLbyte, GLbyte, GLbyte> Binding::TexCoord4bOES("glTexCoord4bOES");
glbinding::Function<void, const GLbyte *> Binding::TexCoord4bvOES("glTexCoord4bvOES");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::TexCoord4d("glTexCoord4d");
glbinding::Function<void, const GLdouble *> Binding::TexCoord4dv("glTexCoord4dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord4f("glTexCoord4f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord4fColor4fNormal3fVertex4fSUN("glTexCoord4fColor4fNormal3fVertex4fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *> Binding::TexCoord4fColor4fNormal3fVertex4fvSUN("glTexCoord4fColor4fNormal3fVertex4fvSUN");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat> Binding::TexCoord4fVertex4fSUN("glTexCoord4fVertex4fSUN");
glbinding::Function<void, const GLfloat *, const GLfloat *> Binding::TexCoord4fVertex4fvSUN("glTexCoord4fVertex4fvSUN");
glbinding::Function<void, const GLfloat *> Binding::TexCoord4fv("glTexCoord4fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::TexCoord4hNV("glTexCoord4hNV");
glbinding::Function<void, const GLhalfNV *> Binding::TexCoord4hvNV("glTexCoord4hvNV");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::TexCoord4i("glTexCoord4i");
glbinding::Function<void, const GLint *> Binding::TexCoord4iv("glTexCoord4iv");
glbinding::Function<void, GLshort, GLshort, GLshort, GLshort> Binding::TexCoord4s("glTexCoord4s");
glbinding::Function<void, const GLshort *> Binding::TexCoord4sv("glTexCoord4sv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed, GLfixed> Binding::TexCoord4xOES("glTexCoord4xOES");
glbinding::Function<void, const GLfixed *> Binding::TexCoord4xvOES("glTexCoord4xvOES");
glbinding::Function<void, GLint, GLenum, GLsizei> Binding::TexCoordFormatNV("glTexCoordFormatNV");
glbinding::Function<void, GLenum, GLuint> Binding::TexCoordP1ui("glTexCoordP1ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::TexCoordP1uiv("glTexCoordP1uiv");
glbinding::Function<void, GLenum, GLuint> Binding::TexCoordP2ui("glTexCoordP2ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::TexCoordP2uiv("glTexCoordP2uiv");
glbinding::Function<void, GLenum, GLuint> Binding::TexCoordP3ui("glTexCoordP3ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::TexCoordP3uiv("glTexCoordP3uiv");
glbinding::Function<void, GLenum, GLuint> Binding::TexCoordP4ui("glTexCoordP4ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::TexCoordP4uiv("glTexCoordP4uiv");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::TexCoordPointer("glTexCoordPointer");
glbinding::Function<void, GLint, GLenum, GLsizei, GLsizei, const void *> Binding::TexCoordPointerEXT("glTexCoordPointerEXT");
glbinding::Function<void, GLint, GLenum, GLint, const void **, GLint> Binding::TexCoordPointerListIBM("glTexCoordPointerListIBM");
glbinding::Function<void, GLint, GLenum, const void **> Binding::TexCoordPointervINTEL("glTexCoordPointervINTEL");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::TexEnvf("glTexEnvf");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::TexEnvfv("glTexEnvfv");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::TexEnvi("glTexEnvi");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::TexEnviv("glTexEnviv");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::TexEnvxOES("glTexEnvxOES");
glbinding::Function<void, GLenum, GLenum, const GLfixed *> Binding::TexEnvxvOES("glTexEnvxvOES");
glbinding::Function<void, GLenum, GLenum, GLsizei, const GLfloat *> Binding::TexFilterFuncSGIS("glTexFilterFuncSGIS");
glbinding::Function<void, GLenum, GLenum, GLdouble> Binding::TexGend("glTexGend");
glbinding::Function<void, GLenum, GLenum, const GLdouble *> Binding::TexGendv("glTexGendv");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::TexGenf("glTexGenf");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::TexGenfv("glTexGenfv");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::TexGeni("glTexGeni");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::TexGeniv("glTexGeniv");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::TexGenxOES("glTexGenxOES");
glbinding::Function<void, GLenum, GLenum, const GLfixed *> Binding::TexGenxvOES("glTexGenxvOES");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage1D("glTexImage1D");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage2D("glTexImage2D");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexImage2DMultisample("glTexImage2DMultisample");
glbinding::Function<void, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean> Binding::TexImage2DMultisampleCoverageNV("glTexImage2DMultisampleCoverageNV");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3D("glTexImage3D");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage3DEXT("glTexImage3DEXT");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexImage3DMultisample("glTexImage3DMultisample");
glbinding::Function<void, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexImage3DMultisampleCoverageNV("glTexImage3DMultisampleCoverageNV");
glbinding::Function<void, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TexImage4DSGIS("glTexImage4DSGIS");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexPageCommitmentARB("glTexPageCommitmentARB");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::TexParameterIiv("glTexParameterIiv");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::TexParameterIivEXT("glTexParameterIivEXT");
glbinding::Function<void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuiv("glTexParameterIuiv");
glbinding::Function<void, GLenum, GLenum, const GLuint *> Binding::TexParameterIuivEXT("glTexParameterIuivEXT");
glbinding::Function<void, GLenum, GLenum, GLfloat> Binding::TexParameterf("glTexParameterf");
glbinding::Function<void, GLenum, GLenum, const GLfloat *> Binding::TexParameterfv("glTexParameterfv");
glbinding::Function<void, GLenum, GLenum, GLint> Binding::TexParameteri("glTexParameteri");
glbinding::Function<void, GLenum, GLenum, const GLint *> Binding::TexParameteriv("glTexParameteriv");
glbinding::Function<void, GLenum, GLenum, GLfixed> Binding::TexParameterxOES("glTexParameterxOES");
glbinding::Function<void, GLenum, GLenum, const GLfixed *> Binding::TexParameterxvOES("glTexParameterxvOES");
glbinding::Function<void, GLenum, GLuint> Binding::TexRenderbufferNV("glTexRenderbufferNV");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei> Binding::TexStorage1D("glTexStorage1D");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TexStorage2D("glTexStorage2D");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TexStorage2DMultisample("glTexStorage2DMultisample");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TexStorage3D("glTexStorage3D");
glbinding::Function<void, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexStorage3DMultisample("glTexStorage3DMultisample");
glbinding::Function<void, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, TextureStorageMaskAMD> Binding::TexStorageSparseAMD("glTexStorageSparseAMD");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage1D("glTexSubImage1D");
glbinding::Function<void, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage1DEXT("glTexSubImage1DEXT");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2D("glTexSubImage2D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage2DEXT("glTexSubImage2DEXT");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3D("glTexSubImage3D");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage3DEXT("glTexSubImage3DEXT");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TexSubImage4DSGIS("glTexSubImage4DSGIS");
glbinding::Function<void> Binding::TextureBarrier("glTextureBarrier");
glbinding::Function<void> Binding::TextureBarrierNV("glTextureBarrierNV");
glbinding::Function<void, GLuint, GLenum, GLuint> Binding::TextureBuffer("glTextureBuffer");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint> Binding::TextureBufferEXT("glTextureBufferEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TextureBufferRange("glTextureBufferRange");
glbinding::Function<void, GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr> Binding::TextureBufferRangeEXT("glTextureBufferRangeEXT");
glbinding::Function<void, GLboolean, GLboolean, GLboolean, GLboolean> Binding::TextureColorMaskSGIS("glTextureColorMaskSGIS");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TextureImage1DEXT("glTextureImage1DEXT");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TextureImage2DEXT("glTextureImage2DEXT");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean> Binding::TextureImage2DMultisampleCoverageNV("glTextureImage2DMultisampleCoverageNV");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean> Binding::TextureImage2DMultisampleNV("glTextureImage2DMultisampleNV");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::TextureImage3DEXT("glTextureImage3DEXT");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureImage3DMultisampleCoverageNV("glTextureImage3DMultisampleCoverageNV");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureImage3DMultisampleNV("glTextureImage3DMultisampleNV");
glbinding::Function<void, GLenum> Binding::TextureLightEXT("glTextureLightEXT");
glbinding::Function<void, GLenum, GLenum> Binding::TextureMaterialEXT("glTextureMaterialEXT");
glbinding::Function<void, GLenum> Binding::TextureNormalEXT("glTextureNormalEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TexturePageCommitmentEXT("glTexturePageCommitmentEXT");
glbinding::Function<void, GLuint, GLenum, const GLint *> Binding::TextureParameterIiv("glTextureParameterIiv");
glbinding::Function<void, GLuint, GLenum, GLenum, const GLint *> Binding::TextureParameterIivEXT("glTextureParameterIivEXT");
glbinding::Function<void, GLuint, GLenum, const GLuint *> Binding::TextureParameterIuiv("glTextureParameterIuiv");
glbinding::Function<void, GLuint, GLenum, GLenum, const GLuint *> Binding::TextureParameterIuivEXT("glTextureParameterIuivEXT");
glbinding::Function<void, GLuint, GLenum, GLfloat> Binding::TextureParameterf("glTextureParameterf");
glbinding::Function<void, GLuint, GLenum, GLenum, GLfloat> Binding::TextureParameterfEXT("glTextureParameterfEXT");
glbinding::Function<void, GLuint, GLenum, const GLfloat *> Binding::TextureParameterfv("glTextureParameterfv");
glbinding::Function<void, GLuint, GLenum, GLenum, const GLfloat *> Binding::TextureParameterfvEXT("glTextureParameterfvEXT");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::TextureParameteri("glTextureParameteri");
glbinding::Function<void, GLuint, GLenum, GLenum, GLint> Binding::TextureParameteriEXT("glTextureParameteriEXT");
glbinding::Function<void, GLuint, GLenum, const GLint *> Binding::TextureParameteriv("glTextureParameteriv");
glbinding::Function<void, GLuint, GLenum, GLenum, const GLint *> Binding::TextureParameterivEXT("glTextureParameterivEXT");
glbinding::Function<void, GLenum, GLsizei, const void *> Binding::TextureRangeAPPLE("glTextureRangeAPPLE");
glbinding::Function<void, GLuint, GLenum, GLuint> Binding::TextureRenderbufferEXT("glTextureRenderbufferEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei> Binding::TextureStorage1D("glTextureStorage1D");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei> Binding::TextureStorage1DEXT("glTextureStorage1DEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2D("glTextureStorage2D");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei> Binding::TextureStorage2DEXT("glTextureStorage2DEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TextureStorage2DMultisample("glTextureStorage2DMultisample");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean> Binding::TextureStorage2DMultisampleEXT("glTextureStorage2DMultisampleEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3D("glTextureStorage3D");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei> Binding::TextureStorage3DEXT("glTextureStorage3DEXT");
glbinding::Function<void, GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureStorage3DMultisample("glTextureStorage3DMultisample");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean> Binding::TextureStorage3DMultisampleEXT("glTextureStorage3DMultisampleEXT");
glbinding::Function<void, GLuint, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, TextureStorageMaskAMD> Binding::TextureStorageSparseAMD("glTextureStorageSparseAMD");
glbinding::Function<void, GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage1D("glTextureSubImage1D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage1DEXT("glTextureSubImage1DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage2D("glTextureSubImage2D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage2DEXT("glTextureSubImage2DEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage3D("glTextureSubImage3D");
glbinding::Function<void, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::TextureSubImage3DEXT("glTextureSubImage3DEXT");
glbinding::Function<void, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint> Binding::TextureView("glTextureView");
glbinding::Function<void, GLenum, GLuint, GLenum, GLenum> Binding::TrackMatrixNV("glTrackMatrixNV");
glbinding::Function<void, GLsizei, const GLint *, GLenum> Binding::TransformFeedbackAttribsNV("glTransformFeedbackAttribsNV");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::TransformFeedbackBufferBase("glTransformFeedbackBufferBase");
glbinding::Function<void, GLuint, GLuint, GLuint, GLintptr, GLsizeiptr> Binding::TransformFeedbackBufferRange("glTransformFeedbackBufferRange");
glbinding::Function<void, GLsizei, const GLint *, GLsizei, const GLint *, GLenum> Binding::TransformFeedbackStreamAttribsNV("glTransformFeedbackStreamAttribsNV");
glbinding::Function<void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryings("glTransformFeedbackVaryings");
glbinding::Function<void, GLuint, GLsizei, const GLchar *const*, GLenum> Binding::TransformFeedbackVaryingsEXT("glTransformFeedbackVaryingsEXT");
glbinding::Function<void, GLuint, GLsizei, const GLint *, GLenum> Binding::TransformFeedbackVaryingsNV("glTransformFeedbackVaryingsNV");
glbinding::Function<void, GLuint, GLuint, GLenum, const GLfloat *> Binding::TransformPathNV("glTransformPathNV");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Translated("glTranslated");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Translatef("glTranslatef");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::TranslatexOES("glTranslatexOES");
glbinding::Function<void, GLint, GLdouble> Binding::Uniform1d("glUniform1d");
glbinding::Function<void, GLint, GLsizei, const GLdouble *> Binding::Uniform1dv("glUniform1dv");
glbinding::Function<void, GLint, GLfloat> Binding::Uniform1f("glUniform1f");
glbinding::Function<void, GLint, GLfloat> Binding::Uniform1fARB("glUniform1fARB");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fv("glUniform1fv");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fvARB("glUniform1fvARB");
glbinding::Function<void, GLint, GLint> Binding::Uniform1i("glUniform1i");
glbinding::Function<void, GLint, GLint64> Binding::Uniform1i64ARB("glUniform1i64ARB");
glbinding::Function<void, GLint, GLint64EXT> Binding::Uniform1i64NV("glUniform1i64NV");
glbinding::Function<void, GLint, GLsizei, const GLint64 *> Binding::Uniform1i64vARB("glUniform1i64vARB");
glbinding::Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform1i64vNV("glUniform1i64vNV");
glbinding::Function<void, GLint, GLint> Binding::Uniform1iARB("glUniform1iARB");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform1iv("glUniform1iv");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform1ivARB("glUniform1ivARB");
glbinding::Function<void, GLint, GLuint> Binding::Uniform1ui("glUniform1ui");
glbinding::Function<void, GLint, GLuint64> Binding::Uniform1ui64ARB("glUniform1ui64ARB");
glbinding::Function<void, GLint, GLuint64EXT> Binding::Uniform1ui64NV("glUniform1ui64NV");
glbinding::Function<void, GLint, GLsizei, const GLuint64 *> Binding::Uniform1ui64vARB("glUniform1ui64vARB");
glbinding::Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform1ui64vNV("glUniform1ui64vNV");
glbinding::Function<void, GLint, GLuint> Binding::Uniform1uiEXT("glUniform1uiEXT");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform1uiv("glUniform1uiv");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform1uivEXT("glUniform1uivEXT");
glbinding::Function<void, GLint, GLdouble, GLdouble> Binding::Uniform2d("glUniform2d");
glbinding::Function<void, GLint, GLsizei, const GLdouble *> Binding::Uniform2dv("glUniform2dv");
glbinding::Function<void, GLint, GLfloat, GLfloat> Binding::Uniform2f("glUniform2f");
glbinding::Function<void, GLint, GLfloat, GLfloat> Binding::Uniform2fARB("glUniform2fARB");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fv("glUniform2fv");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fvARB("glUniform2fvARB");
glbinding::Function<void, GLint, GLint, GLint> Binding::Uniform2i("glUniform2i");
glbinding::Function<void, GLint, GLint64, GLint64> Binding::Uniform2i64ARB("glUniform2i64ARB");
glbinding::Function<void, GLint, GLint64EXT, GLint64EXT> Binding::Uniform2i64NV("glUniform2i64NV");
glbinding::Function<void, GLint, GLsizei, const GLint64 *> Binding::Uniform2i64vARB("glUniform2i64vARB");
glbinding::Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform2i64vNV("glUniform2i64vNV");
glbinding::Function<void, GLint, GLint, GLint> Binding::Uniform2iARB("glUniform2iARB");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform2iv("glUniform2iv");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform2ivARB("glUniform2ivARB");
glbinding::Function<void, GLint, GLuint, GLuint> Binding::Uniform2ui("glUniform2ui");
glbinding::Function<void, GLint, GLuint64, GLuint64> Binding::Uniform2ui64ARB("glUniform2ui64ARB");
glbinding::Function<void, GLint, GLuint64EXT, GLuint64EXT> Binding::Uniform2ui64NV("glUniform2ui64NV");
glbinding::Function<void, GLint, GLsizei, const GLuint64 *> Binding::Uniform2ui64vARB("glUniform2ui64vARB");
glbinding::Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform2ui64vNV("glUniform2ui64vNV");
glbinding::Function<void, GLint, GLuint, GLuint> Binding::Uniform2uiEXT("glUniform2uiEXT");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform2uiv("glUniform2uiv");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform2uivEXT("glUniform2uivEXT");
glbinding::Function<void, GLint, GLdouble, GLdouble, GLdouble> Binding::Uniform3d("glUniform3d");
glbinding::Function<void, GLint, GLsizei, const GLdouble *> Binding::Uniform3dv("glUniform3dv");
glbinding::Function<void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3f("glUniform3f");
glbinding::Function<void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3fARB("glUniform3fARB");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fv("glUniform3fv");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fvARB("glUniform3fvARB");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::Uniform3i("glUniform3i");
glbinding::Function<void, GLint, GLint64, GLint64, GLint64> Binding::Uniform3i64ARB("glUniform3i64ARB");
glbinding::Function<void, GLint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::Uniform3i64NV("glUniform3i64NV");
glbinding::Function<void, GLint, GLsizei, const GLint64 *> Binding::Uniform3i64vARB("glUniform3i64vARB");
glbinding::Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform3i64vNV("glUniform3i64vNV");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::Uniform3iARB("glUniform3iARB");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform3iv("glUniform3iv");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform3ivARB("glUniform3ivARB");
glbinding::Function<void, GLint, GLuint, GLuint, GLuint> Binding::Uniform3ui("glUniform3ui");
glbinding::Function<void, GLint, GLuint64, GLuint64, GLuint64> Binding::Uniform3ui64ARB("glUniform3ui64ARB");
glbinding::Function<void, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::Uniform3ui64NV("glUniform3ui64NV");
glbinding::Function<void, GLint, GLsizei, const GLuint64 *> Binding::Uniform3ui64vARB("glUniform3ui64vARB");
glbinding::Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform3ui64vNV("glUniform3ui64vNV");
glbinding::Function<void, GLint, GLuint, GLuint, GLuint> Binding::Uniform3uiEXT("glUniform3uiEXT");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform3uiv("glUniform3uiv");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform3uivEXT("glUniform3uivEXT");
glbinding::Function<void, GLint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Uniform4d("glUniform4d");
glbinding::Function<void, GLint, GLsizei, const GLdouble *> Binding::Uniform4dv("glUniform4dv");
glbinding::Function<void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4f("glUniform4f");
glbinding::Function<void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4fARB("glUniform4fARB");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fv("glUniform4fv");
glbinding::Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fvARB("glUniform4fvARB");
glbinding::Function<void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4i("glUniform4i");
glbinding::Function<void, GLint, GLint64, GLint64, GLint64, GLint64> Binding::Uniform4i64ARB("glUniform4i64ARB");
glbinding::Function<void, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::Uniform4i64NV("glUniform4i64NV");
glbinding::Function<void, GLint, GLsizei, const GLint64 *> Binding::Uniform4i64vARB("glUniform4i64vARB");
glbinding::Function<void, GLint, GLsizei, const GLint64EXT *> Binding::Uniform4i64vNV("glUniform4i64vNV");
glbinding::Function<void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4iARB("glUniform4iARB");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform4iv("glUniform4iv");
glbinding::Function<void, GLint, GLsizei, const GLint *> Binding::Uniform4ivARB("glUniform4ivARB");
glbinding::Function<void, GLint, GLuint, GLuint, GLuint, GLuint> Binding::Uniform4ui("glUniform4ui");
glbinding::Function<void, GLint, GLuint64, GLuint64, GLuint64, GLuint64> Binding::Uniform4ui64ARB("glUniform4ui64ARB");
glbinding::Function<void, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::Uniform4ui64NV("glUniform4ui64NV");
glbinding::Function<void, GLint, GLsizei, const GLuint64 *> Binding::Uniform4ui64vARB("glUniform4ui64vARB");
glbinding::Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniform4ui64vNV("glUniform4ui64vNV");
glbinding::Function<void, GLint, GLuint, GLuint, GLuint, GLuint> Binding::Uniform4uiEXT("glUniform4uiEXT");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform4uiv("glUniform4uiv");
glbinding::Function<void, GLint, GLsizei, const GLuint *> Binding::Uniform4uivEXT("glUniform4uivEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::UniformBlockBinding("glUniformBlockBinding");
glbinding::Function<void, GLuint, GLint, GLuint> Binding::UniformBufferEXT("glUniformBufferEXT");
glbinding::Function<void, GLint, GLuint64> Binding::UniformHandleui64ARB("glUniformHandleui64ARB");
glbinding::Function<void, GLint, GLuint64> Binding::UniformHandleui64NV("glUniformHandleui64NV");
glbinding::Function<void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vARB("glUniformHandleui64vARB");
glbinding::Function<void, GLint, GLsizei, const GLuint64 *> Binding::UniformHandleui64vNV("glUniformHandleui64vNV");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix2dv("glUniformMatrix2dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fv("glUniformMatrix2fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fvARB("glUniformMatrix2fvARB");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix2x3dv("glUniformMatrix2x3dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x3fv("glUniformMatrix2x3fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix2x4dv("glUniformMatrix2x4dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2x4fv("glUniformMatrix2x4fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix3dv("glUniformMatrix3dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fv("glUniformMatrix3fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fvARB("glUniformMatrix3fvARB");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix3x2dv("glUniformMatrix3x2dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x2fv("glUniformMatrix3x2fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix3x4dv("glUniformMatrix3x4dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3x4fv("glUniformMatrix3x4fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix4dv("glUniformMatrix4dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fv("glUniformMatrix4fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fvARB("glUniformMatrix4fvARB");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix4x2dv("glUniformMatrix4x2dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x2fv("glUniformMatrix4x2fv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLdouble *> Binding::UniformMatrix4x3dv("glUniformMatrix4x3dv");
glbinding::Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4x3fv("glUniformMatrix4x3fv");
glbinding::Function<void, GLenum, GLsizei, const GLuint *> Binding::UniformSubroutinesuiv("glUniformSubroutinesuiv");
glbinding::Function<void, GLint, GLuint64EXT> Binding::Uniformui64NV("glUniformui64NV");
glbinding::Function<void, GLint, GLsizei, const GLuint64EXT *> Binding::Uniformui64vNV("glUniformui64vNV");
glbinding::Function<void> Binding::UnlockArraysEXT("glUnlockArraysEXT");
glbinding::Function<GLboolean, GLenum> Binding::UnmapBuffer("glUnmapBuffer");
glbinding::Function<GLboolean, GLenum> Binding::UnmapBufferARB("glUnmapBufferARB");
glbinding::Function<GLboolean, GLuint> Binding::UnmapNamedBuffer("glUnmapNamedBuffer");
glbinding::Function<GLboolean, GLuint> Binding::UnmapNamedBufferEXT("glUnmapNamedBufferEXT");
glbinding::Function<void, GLuint> Binding::UnmapObjectBufferATI("glUnmapObjectBufferATI");
glbinding::Function<void, GLuint, GLint> Binding::UnmapTexture2DINTEL("glUnmapTexture2DINTEL");
glbinding::Function<void, GLuint, GLuint, GLsizei, const void *, GLenum> Binding::UpdateObjectBufferATI("glUpdateObjectBufferATI");
glbinding::Function<void, GLuint> Binding::UseProgram("glUseProgram");
glbinding::Function<void, GLhandleARB> Binding::UseProgramObjectARB("glUseProgramObjectARB");
glbinding::Function<void, GLuint, UseProgramStageMask, GLuint> Binding::UseProgramStages("glUseProgramStages");
glbinding::Function<void, GLenum, GLuint> Binding::UseShaderProgramEXT("glUseShaderProgramEXT");
glbinding::Function<void> Binding::VDPAUFiniNV("glVDPAUFiniNV");
glbinding::Function<void, GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint *> Binding::VDPAUGetSurfaceivNV("glVDPAUGetSurfaceivNV");
glbinding::Function<void, const void *, const void *> Binding::VDPAUInitNV("glVDPAUInitNV");
glbinding::Function<GLboolean, GLvdpauSurfaceNV> Binding::VDPAUIsSurfaceNV("glVDPAUIsSurfaceNV");
glbinding::Function<void, GLsizei, const GLvdpauSurfaceNV *> Binding::VDPAUMapSurfacesNV("glVDPAUMapSurfacesNV");
glbinding::Function<GLvdpauSurfaceNV, const void *, GLenum, GLsizei, const GLuint *> Binding::VDPAURegisterOutputSurfaceNV("glVDPAURegisterOutputSurfaceNV");
glbinding::Function<GLvdpauSurfaceNV, const void *, GLenum, GLsizei, const GLuint *> Binding::VDPAURegisterVideoSurfaceNV("glVDPAURegisterVideoSurfaceNV");
glbinding::Function<void, GLvdpauSurfaceNV, GLenum> Binding::VDPAUSurfaceAccessNV("glVDPAUSurfaceAccessNV");
glbinding::Function<void, GLsizei, const GLvdpauSurfaceNV *> Binding::VDPAUUnmapSurfacesNV("glVDPAUUnmapSurfacesNV");
glbinding::Function<void, GLvdpauSurfaceNV> Binding::VDPAUUnregisterSurfaceNV("glVDPAUUnregisterSurfaceNV");
glbinding::Function<void, GLuint> Binding::ValidateProgram("glValidateProgram");
glbinding::Function<void, GLhandleARB> Binding::ValidateProgramARB("glValidateProgramARB");
glbinding::Function<void, GLuint> Binding::ValidateProgramPipeline("glValidateProgramPipeline");
glbinding::Function<void, GLuint, GLenum, GLsizei, GLuint, GLuint> Binding::VariantArrayObjectATI("glVariantArrayObjectATI");
glbinding::Function<void, GLuint, GLenum, GLuint, const void *> Binding::VariantPointerEXT("glVariantPointerEXT");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VariantbvEXT("glVariantbvEXT");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VariantdvEXT("glVariantdvEXT");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VariantfvEXT("glVariantfvEXT");
glbinding::Function<void, GLuint, const GLint *> Binding::VariantivEXT("glVariantivEXT");
glbinding::Function<void, GLuint, const GLshort *> Binding::VariantsvEXT("glVariantsvEXT");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VariantubvEXT("glVariantubvEXT");
glbinding::Function<void, GLuint, const GLuint *> Binding::VariantuivEXT("glVariantuivEXT");
glbinding::Function<void, GLuint, const GLushort *> Binding::VariantusvEXT("glVariantusvEXT");
glbinding::Function<void, GLbyte, GLbyte> Binding::Vertex2bOES("glVertex2bOES");
glbinding::Function<void, const GLbyte *> Binding::Vertex2bvOES("glVertex2bvOES");
glbinding::Function<void, GLdouble, GLdouble> Binding::Vertex2d("glVertex2d");
glbinding::Function<void, const GLdouble *> Binding::Vertex2dv("glVertex2dv");
glbinding::Function<void, GLfloat, GLfloat> Binding::Vertex2f("glVertex2f");
glbinding::Function<void, const GLfloat *> Binding::Vertex2fv("glVertex2fv");
glbinding::Function<void, GLhalfNV, GLhalfNV> Binding::Vertex2hNV("glVertex2hNV");
glbinding::Function<void, const GLhalfNV *> Binding::Vertex2hvNV("glVertex2hvNV");
glbinding::Function<void, GLint, GLint> Binding::Vertex2i("glVertex2i");
glbinding::Function<void, const GLint *> Binding::Vertex2iv("glVertex2iv");
glbinding::Function<void, GLshort, GLshort> Binding::Vertex2s("glVertex2s");
glbinding::Function<void, const GLshort *> Binding::Vertex2sv("glVertex2sv");
glbinding::Function<void, GLfixed> Binding::Vertex2xOES("glVertex2xOES");
glbinding::Function<void, const GLfixed *> Binding::Vertex2xvOES("glVertex2xvOES");
glbinding::Function<void, GLbyte, GLbyte, GLbyte> Binding::Vertex3bOES("glVertex3bOES");
glbinding::Function<void, const GLbyte *> Binding::Vertex3bvOES("glVertex3bvOES");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::Vertex3d("glVertex3d");
glbinding::Function<void, const GLdouble *> Binding::Vertex3dv("glVertex3dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::Vertex3f("glVertex3f");
glbinding::Function<void, const GLfloat *> Binding::Vertex3fv("glVertex3fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Vertex3hNV("glVertex3hNV");
glbinding::Function<void, const GLhalfNV *> Binding::Vertex3hvNV("glVertex3hvNV");
glbinding::Function<void, GLint, GLint, GLint> Binding::Vertex3i("glVertex3i");
glbinding::Function<void, const GLint *> Binding::Vertex3iv("glVertex3iv");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::Vertex3s("glVertex3s");
glbinding::Function<void, const GLshort *> Binding::Vertex3sv("glVertex3sv");
glbinding::Function<void, GLfixed, GLfixed> Binding::Vertex3xOES("glVertex3xOES");
glbinding::Function<void, const GLfixed *> Binding::Vertex3xvOES("glVertex3xvOES");
glbinding::Function<void, GLbyte, GLbyte, GLbyte, GLbyte> Binding::Vertex4bOES("glVertex4bOES");
glbinding::Function<void, const GLbyte *> Binding::Vertex4bvOES("glVertex4bvOES");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::Vertex4d("glVertex4d");
glbinding::Function<void, const GLdouble *> Binding::Vertex4dv("glVertex4dv");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Vertex4f("glVertex4f");
glbinding::Function<void, const GLfloat *> Binding::Vertex4fv("glVertex4fv");
glbinding::Function<void, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::Vertex4hNV("glVertex4hNV");
glbinding::Function<void, const GLhalfNV *> Binding::Vertex4hvNV("glVertex4hvNV");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::Vertex4i("glVertex4i");
glbinding::Function<void, const GLint *> Binding::Vertex4iv("glVertex4iv");
glbinding::Function<void, GLshort, GLshort, GLshort, GLshort> Binding::Vertex4s("glVertex4s");
glbinding::Function<void, const GLshort *> Binding::Vertex4sv("glVertex4sv");
glbinding::Function<void, GLfixed, GLfixed, GLfixed> Binding::Vertex4xOES("glVertex4xOES");
glbinding::Function<void, const GLfixed *> Binding::Vertex4xvOES("glVertex4xvOES");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexArrayAttribBinding("glVertexArrayAttribBinding");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexArrayAttribFormat("glVertexArrayAttribFormat");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayAttribIFormat("glVertexArrayAttribIFormat");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayAttribLFormat("glVertexArrayAttribLFormat");
glbinding::Function<void, GLuint, GLuint, GLuint, GLintptr, GLsizei> Binding::VertexArrayBindVertexBufferEXT("glVertexArrayBindVertexBufferEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexArrayBindingDivisor("glVertexArrayBindingDivisor");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayColorOffsetEXT("glVertexArrayColorOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLsizei, GLintptr> Binding::VertexArrayEdgeFlagOffsetEXT("glVertexArrayEdgeFlagOffsetEXT");
glbinding::Function<void, GLuint, GLuint> Binding::VertexArrayElementBuffer("glVertexArrayElementBuffer");
glbinding::Function<void, GLuint, GLuint, GLenum, GLsizei, GLintptr> Binding::VertexArrayFogCoordOffsetEXT("glVertexArrayFogCoordOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLenum, GLsizei, GLintptr> Binding::VertexArrayIndexOffsetEXT("glVertexArrayIndexOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayMultiTexCoordOffsetEXT("glVertexArrayMultiTexCoordOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLenum, GLsizei, GLintptr> Binding::VertexArrayNormalOffsetEXT("glVertexArrayNormalOffsetEXT");
glbinding::Function<void, GLenum, GLint> Binding::VertexArrayParameteriAPPLE("glVertexArrayParameteriAPPLE");
glbinding::Function<void, GLsizei, void *> Binding::VertexArrayRangeAPPLE("glVertexArrayRangeAPPLE");
glbinding::Function<void, GLsizei, const void *> Binding::VertexArrayRangeNV("glVertexArrayRangeNV");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArraySecondaryColorOffsetEXT("glVertexArraySecondaryColorOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayTexCoordOffsetEXT("glVertexArrayTexCoordOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexArrayVertexAttribBindingEXT("glVertexArrayVertexAttribBindingEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexArrayVertexAttribDivisorEXT("glVertexArrayVertexAttribDivisorEXT");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexArrayVertexAttribFormatEXT("glVertexArrayVertexAttribFormatEXT");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayVertexAttribIFormatEXT("glVertexArrayVertexAttribIFormatEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayVertexAttribIOffsetEXT("glVertexArrayVertexAttribIOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLuint> Binding::VertexArrayVertexAttribLFormatEXT("glVertexArrayVertexAttribLFormatEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayVertexAttribLOffsetEXT("glVertexArrayVertexAttribLOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr> Binding::VertexArrayVertexAttribOffsetEXT("glVertexArrayVertexAttribOffsetEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexArrayVertexBindingDivisorEXT("glVertexArrayVertexBindingDivisorEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLintptr, GLsizei> Binding::VertexArrayVertexBuffer("glVertexArrayVertexBuffer");
glbinding::Function<void, GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *> Binding::VertexArrayVertexBuffers("glVertexArrayVertexBuffers");
glbinding::Function<void, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr> Binding::VertexArrayVertexOffsetEXT("glVertexArrayVertexOffsetEXT");
glbinding::Function<void, GLuint, GLdouble> Binding::VertexAttrib1d("glVertexAttrib1d");
glbinding::Function<void, GLuint, GLdouble> Binding::VertexAttrib1dARB("glVertexAttrib1dARB");
glbinding::Function<void, GLuint, GLdouble> Binding::VertexAttrib1dNV("glVertexAttrib1dNV");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib1dv("glVertexAttrib1dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib1dvARB("glVertexAttrib1dvARB");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib1dvNV("glVertexAttrib1dvNV");
glbinding::Function<void, GLuint, GLfloat> Binding::VertexAttrib1f("glVertexAttrib1f");
glbinding::Function<void, GLuint, GLfloat> Binding::VertexAttrib1fARB("glVertexAttrib1fARB");
glbinding::Function<void, GLuint, GLfloat> Binding::VertexAttrib1fNV("glVertexAttrib1fNV");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib1fv("glVertexAttrib1fv");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib1fvARB("glVertexAttrib1fvARB");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib1fvNV("glVertexAttrib1fvNV");
glbinding::Function<void, GLuint, GLhalfNV> Binding::VertexAttrib1hNV("glVertexAttrib1hNV");
glbinding::Function<void, GLuint, const GLhalfNV *> Binding::VertexAttrib1hvNV("glVertexAttrib1hvNV");
glbinding::Function<void, GLuint, GLshort> Binding::VertexAttrib1s("glVertexAttrib1s");
glbinding::Function<void, GLuint, GLshort> Binding::VertexAttrib1sARB("glVertexAttrib1sARB");
glbinding::Function<void, GLuint, GLshort> Binding::VertexAttrib1sNV("glVertexAttrib1sNV");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib1sv("glVertexAttrib1sv");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib1svARB("glVertexAttrib1svARB");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib1svNV("glVertexAttrib1svNV");
glbinding::Function<void, GLuint, GLdouble, GLdouble> Binding::VertexAttrib2d("glVertexAttrib2d");
glbinding::Function<void, GLuint, GLdouble, GLdouble> Binding::VertexAttrib2dARB("glVertexAttrib2dARB");
glbinding::Function<void, GLuint, GLdouble, GLdouble> Binding::VertexAttrib2dNV("glVertexAttrib2dNV");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib2dv("glVertexAttrib2dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib2dvARB("glVertexAttrib2dvARB");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib2dvNV("glVertexAttrib2dvNV");
glbinding::Function<void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2f("glVertexAttrib2f");
glbinding::Function<void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2fARB("glVertexAttrib2fARB");
glbinding::Function<void, GLuint, GLfloat, GLfloat> Binding::VertexAttrib2fNV("glVertexAttrib2fNV");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib2fv("glVertexAttrib2fv");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib2fvARB("glVertexAttrib2fvARB");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib2fvNV("glVertexAttrib2fvNV");
glbinding::Function<void, GLuint, GLhalfNV, GLhalfNV> Binding::VertexAttrib2hNV("glVertexAttrib2hNV");
glbinding::Function<void, GLuint, const GLhalfNV *> Binding::VertexAttrib2hvNV("glVertexAttrib2hvNV");
glbinding::Function<void, GLuint, GLshort, GLshort> Binding::VertexAttrib2s("glVertexAttrib2s");
glbinding::Function<void, GLuint, GLshort, GLshort> Binding::VertexAttrib2sARB("glVertexAttrib2sARB");
glbinding::Function<void, GLuint, GLshort, GLshort> Binding::VertexAttrib2sNV("glVertexAttrib2sNV");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib2sv("glVertexAttrib2sv");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib2svARB("glVertexAttrib2svARB");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib2svNV("glVertexAttrib2svNV");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib3d("glVertexAttrib3d");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib3dARB("glVertexAttrib3dARB");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib3dNV("glVertexAttrib3dNV");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib3dv("glVertexAttrib3dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib3dvARB("glVertexAttrib3dvARB");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib3dvNV("glVertexAttrib3dvNV");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3f("glVertexAttrib3f");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3fARB("glVertexAttrib3fARB");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib3fNV("glVertexAttrib3fNV");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib3fv("glVertexAttrib3fv");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib3fvARB("glVertexAttrib3fvARB");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib3fvNV("glVertexAttrib3fvNV");
glbinding::Function<void, GLuint, GLhalfNV, GLhalfNV, GLhalfNV> Binding::VertexAttrib3hNV("glVertexAttrib3hNV");
glbinding::Function<void, GLuint, const GLhalfNV *> Binding::VertexAttrib3hvNV("glVertexAttrib3hvNV");
glbinding::Function<void, GLuint, GLshort, GLshort, GLshort> Binding::VertexAttrib3s("glVertexAttrib3s");
glbinding::Function<void, GLuint, GLshort, GLshort, GLshort> Binding::VertexAttrib3sARB("glVertexAttrib3sARB");
glbinding::Function<void, GLuint, GLshort, GLshort, GLshort> Binding::VertexAttrib3sNV("glVertexAttrib3sNV");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib3sv("glVertexAttrib3sv");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib3svARB("glVertexAttrib3svARB");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib3svNV("glVertexAttrib3svNV");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VertexAttrib4Nbv("glVertexAttrib4Nbv");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VertexAttrib4NbvARB("glVertexAttrib4NbvARB");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttrib4Niv("glVertexAttrib4Niv");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttrib4NivARB("glVertexAttrib4NivARB");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib4Nsv("glVertexAttrib4Nsv");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib4NsvARB("glVertexAttrib4NsvARB");
glbinding::Function<void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte> Binding::VertexAttrib4Nub("glVertexAttrib4Nub");
glbinding::Function<void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte> Binding::VertexAttrib4NubARB("glVertexAttrib4NubARB");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttrib4Nubv("glVertexAttrib4Nubv");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttrib4NubvARB("glVertexAttrib4NubvARB");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttrib4Nuiv("glVertexAttrib4Nuiv");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttrib4NuivARB("glVertexAttrib4NuivARB");
glbinding::Function<void, GLuint, const GLushort *> Binding::VertexAttrib4Nusv("glVertexAttrib4Nusv");
glbinding::Function<void, GLuint, const GLushort *> Binding::VertexAttrib4NusvARB("glVertexAttrib4NusvARB");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VertexAttrib4bv("glVertexAttrib4bv");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VertexAttrib4bvARB("glVertexAttrib4bvARB");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib4d("glVertexAttrib4d");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib4dARB("glVertexAttrib4dARB");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttrib4dNV("glVertexAttrib4dNV");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib4dv("glVertexAttrib4dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib4dvARB("glVertexAttrib4dvARB");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttrib4dvNV("glVertexAttrib4dvNV");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4f("glVertexAttrib4f");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4fARB("glVertexAttrib4fARB");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexAttrib4fNV("glVertexAttrib4fNV");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib4fv("glVertexAttrib4fv");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib4fvARB("glVertexAttrib4fvARB");
glbinding::Function<void, GLuint, const GLfloat *> Binding::VertexAttrib4fvNV("glVertexAttrib4fvNV");
glbinding::Function<void, GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::VertexAttrib4hNV("glVertexAttrib4hNV");
glbinding::Function<void, GLuint, const GLhalfNV *> Binding::VertexAttrib4hvNV("glVertexAttrib4hvNV");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttrib4iv("glVertexAttrib4iv");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttrib4ivARB("glVertexAttrib4ivARB");
glbinding::Function<void, GLuint, GLshort, GLshort, GLshort, GLshort> Binding::VertexAttrib4s("glVertexAttrib4s");
glbinding::Function<void, GLuint, GLshort, GLshort, GLshort, GLshort> Binding::VertexAttrib4sARB("glVertexAttrib4sARB");
glbinding::Function<void, GLuint, GLshort, GLshort, GLshort, GLshort> Binding::VertexAttrib4sNV("glVertexAttrib4sNV");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib4sv("glVertexAttrib4sv");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib4svARB("glVertexAttrib4svARB");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttrib4svNV("glVertexAttrib4svNV");
glbinding::Function<void, GLuint, GLubyte, GLubyte, GLubyte, GLubyte> Binding::VertexAttrib4ubNV("glVertexAttrib4ubNV");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttrib4ubv("glVertexAttrib4ubv");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttrib4ubvARB("glVertexAttrib4ubvARB");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttrib4ubvNV("glVertexAttrib4ubvNV");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttrib4uiv("glVertexAttrib4uiv");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttrib4uivARB("glVertexAttrib4uivARB");
glbinding::Function<void, GLuint, const GLushort *> Binding::VertexAttrib4usv("glVertexAttrib4usv");
glbinding::Function<void, GLuint, const GLushort *> Binding::VertexAttrib4usvARB("glVertexAttrib4usvARB");
glbinding::Function<void, GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint> Binding::VertexAttribArrayObjectATI("glVertexAttribArrayObjectATI");
glbinding::Function<void, GLuint, GLuint> Binding::VertexAttribBinding("glVertexAttribBinding");
glbinding::Function<void, GLuint, GLuint> Binding::VertexAttribDivisor("glVertexAttribDivisor");
glbinding::Function<void, GLuint, GLuint> Binding::VertexAttribDivisorARB("glVertexAttribDivisorARB");
glbinding::Function<void, GLuint, GLint, GLenum, GLboolean, GLuint> Binding::VertexAttribFormat("glVertexAttribFormat");
glbinding::Function<void, GLuint, GLint, GLenum, GLboolean, GLsizei> Binding::VertexAttribFormatNV("glVertexAttribFormatNV");
glbinding::Function<void, GLuint, GLint> Binding::VertexAttribI1i("glVertexAttribI1i");
glbinding::Function<void, GLuint, GLint> Binding::VertexAttribI1iEXT("glVertexAttribI1iEXT");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI1iv("glVertexAttribI1iv");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI1ivEXT("glVertexAttribI1ivEXT");
glbinding::Function<void, GLuint, GLuint> Binding::VertexAttribI1ui("glVertexAttribI1ui");
glbinding::Function<void, GLuint, GLuint> Binding::VertexAttribI1uiEXT("glVertexAttribI1uiEXT");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI1uiv("glVertexAttribI1uiv");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI1uivEXT("glVertexAttribI1uivEXT");
glbinding::Function<void, GLuint, GLint, GLint> Binding::VertexAttribI2i("glVertexAttribI2i");
glbinding::Function<void, GLuint, GLint, GLint> Binding::VertexAttribI2iEXT("glVertexAttribI2iEXT");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI2iv("glVertexAttribI2iv");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI2ivEXT("glVertexAttribI2ivEXT");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexAttribI2ui("glVertexAttribI2ui");
glbinding::Function<void, GLuint, GLuint, GLuint> Binding::VertexAttribI2uiEXT("glVertexAttribI2uiEXT");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI2uiv("glVertexAttribI2uiv");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI2uivEXT("glVertexAttribI2uivEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint> Binding::VertexAttribI3i("glVertexAttribI3i");
glbinding::Function<void, GLuint, GLint, GLint, GLint> Binding::VertexAttribI3iEXT("glVertexAttribI3iEXT");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI3iv("glVertexAttribI3iv");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI3ivEXT("glVertexAttribI3ivEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI3ui("glVertexAttribI3ui");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI3uiEXT("glVertexAttribI3uiEXT");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI3uiv("glVertexAttribI3uiv");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI3uivEXT("glVertexAttribI3uivEXT");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VertexAttribI4bv("glVertexAttribI4bv");
glbinding::Function<void, GLuint, const GLbyte *> Binding::VertexAttribI4bvEXT("glVertexAttribI4bvEXT");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4i("glVertexAttribI4i");
glbinding::Function<void, GLuint, GLint, GLint, GLint, GLint> Binding::VertexAttribI4iEXT("glVertexAttribI4iEXT");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI4iv("glVertexAttribI4iv");
glbinding::Function<void, GLuint, const GLint *> Binding::VertexAttribI4ivEXT("glVertexAttribI4ivEXT");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttribI4sv("glVertexAttribI4sv");
glbinding::Function<void, GLuint, const GLshort *> Binding::VertexAttribI4svEXT("glVertexAttribI4svEXT");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttribI4ubv("glVertexAttribI4ubv");
glbinding::Function<void, GLuint, const GLubyte *> Binding::VertexAttribI4ubvEXT("glVertexAttribI4ubvEXT");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4ui("glVertexAttribI4ui");
glbinding::Function<void, GLuint, GLuint, GLuint, GLuint, GLuint> Binding::VertexAttribI4uiEXT("glVertexAttribI4uiEXT");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI4uiv("glVertexAttribI4uiv");
glbinding::Function<void, GLuint, const GLuint *> Binding::VertexAttribI4uivEXT("glVertexAttribI4uivEXT");
glbinding::Function<void, GLuint, const GLushort *> Binding::VertexAttribI4usv("glVertexAttribI4usv");
glbinding::Function<void, GLuint, const GLushort *> Binding::VertexAttribI4usvEXT("glVertexAttribI4usvEXT");
glbinding::Function<void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribIFormat("glVertexAttribIFormat");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei> Binding::VertexAttribIFormatNV("glVertexAttribIFormatNV");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointer("glVertexAttribIPointer");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribIPointerEXT("glVertexAttribIPointerEXT");
glbinding::Function<void, GLuint, GLdouble> Binding::VertexAttribL1d("glVertexAttribL1d");
glbinding::Function<void, GLuint, GLdouble> Binding::VertexAttribL1dEXT("glVertexAttribL1dEXT");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL1dv("glVertexAttribL1dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL1dvEXT("glVertexAttribL1dvEXT");
glbinding::Function<void, GLuint, GLint64EXT> Binding::VertexAttribL1i64NV("glVertexAttribL1i64NV");
glbinding::Function<void, GLuint, const GLint64EXT *> Binding::VertexAttribL1i64vNV("glVertexAttribL1i64vNV");
glbinding::Function<void, GLuint, GLuint64EXT> Binding::VertexAttribL1ui64ARB("glVertexAttribL1ui64ARB");
glbinding::Function<void, GLuint, GLuint64EXT> Binding::VertexAttribL1ui64NV("glVertexAttribL1ui64NV");
glbinding::Function<void, GLuint, const GLuint64EXT *> Binding::VertexAttribL1ui64vARB("glVertexAttribL1ui64vARB");
glbinding::Function<void, GLuint, const GLuint64EXT *> Binding::VertexAttribL1ui64vNV("glVertexAttribL1ui64vNV");
glbinding::Function<void, GLuint, GLdouble, GLdouble> Binding::VertexAttribL2d("glVertexAttribL2d");
glbinding::Function<void, GLuint, GLdouble, GLdouble> Binding::VertexAttribL2dEXT("glVertexAttribL2dEXT");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL2dv("glVertexAttribL2dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL2dvEXT("glVertexAttribL2dvEXT");
glbinding::Function<void, GLuint, GLint64EXT, GLint64EXT> Binding::VertexAttribL2i64NV("glVertexAttribL2i64NV");
glbinding::Function<void, GLuint, const GLint64EXT *> Binding::VertexAttribL2i64vNV("glVertexAttribL2i64vNV");
glbinding::Function<void, GLuint, GLuint64EXT, GLuint64EXT> Binding::VertexAttribL2ui64NV("glVertexAttribL2ui64NV");
glbinding::Function<void, GLuint, const GLuint64EXT *> Binding::VertexAttribL2ui64vNV("glVertexAttribL2ui64vNV");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL3d("glVertexAttribL3d");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL3dEXT("glVertexAttribL3dEXT");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL3dv("glVertexAttribL3dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL3dvEXT("glVertexAttribL3dvEXT");
glbinding::Function<void, GLuint, GLint64EXT, GLint64EXT, GLint64EXT> Binding::VertexAttribL3i64NV("glVertexAttribL3i64NV");
glbinding::Function<void, GLuint, const GLint64EXT *> Binding::VertexAttribL3i64vNV("glVertexAttribL3i64vNV");
glbinding::Function<void, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::VertexAttribL3ui64NV("glVertexAttribL3ui64NV");
glbinding::Function<void, GLuint, const GLuint64EXT *> Binding::VertexAttribL3ui64vNV("glVertexAttribL3ui64vNV");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL4d("glVertexAttribL4d");
glbinding::Function<void, GLuint, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexAttribL4dEXT("glVertexAttribL4dEXT");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL4dv("glVertexAttribL4dv");
glbinding::Function<void, GLuint, const GLdouble *> Binding::VertexAttribL4dvEXT("glVertexAttribL4dvEXT");
glbinding::Function<void, GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT> Binding::VertexAttribL4i64NV("glVertexAttribL4i64NV");
glbinding::Function<void, GLuint, const GLint64EXT *> Binding::VertexAttribL4i64vNV("glVertexAttribL4i64vNV");
glbinding::Function<void, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT> Binding::VertexAttribL4ui64NV("glVertexAttribL4ui64NV");
glbinding::Function<void, GLuint, const GLuint64EXT *> Binding::VertexAttribL4ui64vNV("glVertexAttribL4ui64vNV");
glbinding::Function<void, GLuint, GLint, GLenum, GLuint> Binding::VertexAttribLFormat("glVertexAttribLFormat");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei> Binding::VertexAttribLFormatNV("glVertexAttribLFormatNV");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribLPointer("glVertexAttribLPointer");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribLPointerEXT("glVertexAttribLPointerEXT");
glbinding::Function<void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP1ui("glVertexAttribP1ui");
glbinding::Function<void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP1uiv("glVertexAttribP1uiv");
glbinding::Function<void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP2ui("glVertexAttribP2ui");
glbinding::Function<void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP2uiv("glVertexAttribP2uiv");
glbinding::Function<void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP3ui("glVertexAttribP3ui");
glbinding::Function<void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP3uiv("glVertexAttribP3uiv");
glbinding::Function<void, GLuint, GLenum, GLboolean, GLuint> Binding::VertexAttribP4ui("glVertexAttribP4ui");
glbinding::Function<void, GLuint, GLenum, GLboolean, const GLuint *> Binding::VertexAttribP4uiv("glVertexAttribP4uiv");
glbinding::Function<void, GLuint, GLenum, GLint> Binding::VertexAttribParameteriAMD("glVertexAttribParameteriAMD");
glbinding::Function<void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointer("glVertexAttribPointer");
glbinding::Function<void, GLuint, GLint, GLenum, GLboolean, GLsizei, const void *> Binding::VertexAttribPointerARB("glVertexAttribPointerARB");
glbinding::Function<void, GLuint, GLint, GLenum, GLsizei, const void *> Binding::VertexAttribPointerNV("glVertexAttribPointerNV");
glbinding::Function<void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs1dvNV("glVertexAttribs1dvNV");
glbinding::Function<void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs1fvNV("glVertexAttribs1fvNV");
glbinding::Function<void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs1hvNV("glVertexAttribs1hvNV");
glbinding::Function<void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs1svNV("glVertexAttribs1svNV");
glbinding::Function<void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs2dvNV("glVertexAttribs2dvNV");
glbinding::Function<void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs2fvNV("glVertexAttribs2fvNV");
glbinding::Function<void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs2hvNV("glVertexAttribs2hvNV");
glbinding::Function<void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs2svNV("glVertexAttribs2svNV");
glbinding::Function<void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs3dvNV("glVertexAttribs3dvNV");
glbinding::Function<void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs3fvNV("glVertexAttribs3fvNV");
glbinding::Function<void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs3hvNV("glVertexAttribs3hvNV");
glbinding::Function<void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs3svNV("glVertexAttribs3svNV");
glbinding::Function<void, GLuint, GLsizei, const GLdouble *> Binding::VertexAttribs4dvNV("glVertexAttribs4dvNV");
glbinding::Function<void, GLuint, GLsizei, const GLfloat *> Binding::VertexAttribs4fvNV("glVertexAttribs4fvNV");
glbinding::Function<void, GLuint, GLsizei, const GLhalfNV *> Binding::VertexAttribs4hvNV("glVertexAttribs4hvNV");
glbinding::Function<void, GLuint, GLsizei, const GLshort *> Binding::VertexAttribs4svNV("glVertexAttribs4svNV");
glbinding::Function<void, GLuint, GLsizei, const GLubyte *> Binding::VertexAttribs4ubvNV("glVertexAttribs4ubvNV");
glbinding::Function<void, GLuint, GLuint> Binding::VertexBindingDivisor("glVertexBindingDivisor");
glbinding::Function<void, GLint> Binding::VertexBlendARB("glVertexBlendARB");
glbinding::Function<void, GLenum, GLfloat> Binding::VertexBlendEnvfATI("glVertexBlendEnvfATI");
glbinding::Function<void, GLenum, GLint> Binding::VertexBlendEnviATI("glVertexBlendEnviATI");
glbinding::Function<void, GLint, GLenum, GLsizei> Binding::VertexFormatNV("glVertexFormatNV");
glbinding::Function<void, GLenum, GLuint> Binding::VertexP2ui("glVertexP2ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::VertexP2uiv("glVertexP2uiv");
glbinding::Function<void, GLenum, GLuint> Binding::VertexP3ui("glVertexP3ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::VertexP3uiv("glVertexP3uiv");
glbinding::Function<void, GLenum, GLuint> Binding::VertexP4ui("glVertexP4ui");
glbinding::Function<void, GLenum, const GLuint *> Binding::VertexP4uiv("glVertexP4uiv");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::VertexPointer("glVertexPointer");
glbinding::Function<void, GLint, GLenum, GLsizei, GLsizei, const void *> Binding::VertexPointerEXT("glVertexPointerEXT");
glbinding::Function<void, GLint, GLenum, GLint, const void **, GLint> Binding::VertexPointerListIBM("glVertexPointerListIBM");
glbinding::Function<void, GLint, GLenum, const void **> Binding::VertexPointervINTEL("glVertexPointervINTEL");
glbinding::Function<void, GLenum, GLdouble> Binding::VertexStream1dATI("glVertexStream1dATI");
glbinding::Function<void, GLenum, const GLdouble *> Binding::VertexStream1dvATI("glVertexStream1dvATI");
glbinding::Function<void, GLenum, GLfloat> Binding::VertexStream1fATI("glVertexStream1fATI");
glbinding::Function<void, GLenum, const GLfloat *> Binding::VertexStream1fvATI("glVertexStream1fvATI");
glbinding::Function<void, GLenum, GLint> Binding::VertexStream1iATI("glVertexStream1iATI");
glbinding::Function<void, GLenum, const GLint *> Binding::VertexStream1ivATI("glVertexStream1ivATI");
glbinding::Function<void, GLenum, GLshort> Binding::VertexStream1sATI("glVertexStream1sATI");
glbinding::Function<void, GLenum, const GLshort *> Binding::VertexStream1svATI("glVertexStream1svATI");
glbinding::Function<void, GLenum, GLdouble, GLdouble> Binding::VertexStream2dATI("glVertexStream2dATI");
glbinding::Function<void, GLenum, const GLdouble *> Binding::VertexStream2dvATI("glVertexStream2dvATI");
glbinding::Function<void, GLenum, GLfloat, GLfloat> Binding::VertexStream2fATI("glVertexStream2fATI");
glbinding::Function<void, GLenum, const GLfloat *> Binding::VertexStream2fvATI("glVertexStream2fvATI");
glbinding::Function<void, GLenum, GLint, GLint> Binding::VertexStream2iATI("glVertexStream2iATI");
glbinding::Function<void, GLenum, const GLint *> Binding::VertexStream2ivATI("glVertexStream2ivATI");
glbinding::Function<void, GLenum, GLshort, GLshort> Binding::VertexStream2sATI("glVertexStream2sATI");
glbinding::Function<void, GLenum, const GLshort *> Binding::VertexStream2svATI("glVertexStream2svATI");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::VertexStream3dATI("glVertexStream3dATI");
glbinding::Function<void, GLenum, const GLdouble *> Binding::VertexStream3dvATI("glVertexStream3dvATI");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::VertexStream3fATI("glVertexStream3fATI");
glbinding::Function<void, GLenum, const GLfloat *> Binding::VertexStream3fvATI("glVertexStream3fvATI");
glbinding::Function<void, GLenum, GLint, GLint, GLint> Binding::VertexStream3iATI("glVertexStream3iATI");
glbinding::Function<void, GLenum, const GLint *> Binding::VertexStream3ivATI("glVertexStream3ivATI");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort> Binding::VertexStream3sATI("glVertexStream3sATI");
glbinding::Function<void, GLenum, const GLshort *> Binding::VertexStream3svATI("glVertexStream3svATI");
glbinding::Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::VertexStream4dATI("glVertexStream4dATI");
glbinding::Function<void, GLenum, const GLdouble *> Binding::VertexStream4dvATI("glVertexStream4dvATI");
glbinding::Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::VertexStream4fATI("glVertexStream4fATI");
glbinding::Function<void, GLenum, const GLfloat *> Binding::VertexStream4fvATI("glVertexStream4fvATI");
glbinding::Function<void, GLenum, GLint, GLint, GLint, GLint> Binding::VertexStream4iATI("glVertexStream4iATI");
glbinding::Function<void, GLenum, const GLint *> Binding::VertexStream4ivATI("glVertexStream4ivATI");
glbinding::Function<void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::VertexStream4sATI("glVertexStream4sATI");
glbinding::Function<void, GLenum, const GLshort *> Binding::VertexStream4svATI("glVertexStream4svATI");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::VertexWeightPointerEXT("glVertexWeightPointerEXT");
glbinding::Function<void, GLfloat> Binding::VertexWeightfEXT("glVertexWeightfEXT");
glbinding::Function<void, const GLfloat *> Binding::VertexWeightfvEXT("glVertexWeightfvEXT");
glbinding::Function<void, GLhalfNV> Binding::VertexWeighthNV("glVertexWeighthNV");
glbinding::Function<void, const GLhalfNV *> Binding::VertexWeighthvNV("glVertexWeighthvNV");
glbinding::Function<GLenum, GLuint, GLuint *, GLuint64EXT *> Binding::VideoCaptureNV("glVideoCaptureNV");
glbinding::Function<void, GLuint, GLuint, GLenum, const GLdouble *> Binding::VideoCaptureStreamParameterdvNV("glVideoCaptureStreamParameterdvNV");
glbinding::Function<void, GLuint, GLuint, GLenum, const GLfloat *> Binding::VideoCaptureStreamParameterfvNV("glVideoCaptureStreamParameterfvNV");
glbinding::Function<void, GLuint, GLuint, GLenum, const GLint *> Binding::VideoCaptureStreamParameterivNV("glVideoCaptureStreamParameterivNV");
glbinding::Function<void, GLint, GLint, GLsizei, GLsizei> Binding::Viewport("glViewport");
glbinding::Function<void, GLuint, GLsizei, const GLfloat *> Binding::ViewportArrayv("glViewportArrayv");
glbinding::Function<void, GLuint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::ViewportIndexedf("glViewportIndexedf");
glbinding::Function<void, GLuint, const GLfloat *> Binding::ViewportIndexedfv("glViewportIndexedfv");
glbinding::Function<void, GLsync, UnusedMask, GLuint64> Binding::WaitSync("glWaitSync");
glbinding::Function<void, GLuint, GLsizei, const GLuint *, const GLfloat *> Binding::WeightPathsNV("glWeightPathsNV");
glbinding::Function<void, GLint, GLenum, GLsizei, const void *> Binding::WeightPointerARB("glWeightPointerARB");
glbinding::Function<void, GLint, const GLbyte *> Binding::WeightbvARB("glWeightbvARB");
glbinding::Function<void, GLint, const GLdouble *> Binding::WeightdvARB("glWeightdvARB");
glbinding::Function<void, GLint, const GLfloat *> Binding::WeightfvARB("glWeightfvARB");
glbinding::Function<void, GLint, const GLint *> Binding::WeightivARB("glWeightivARB");
glbinding::Function<void, GLint, const GLshort *> Binding::WeightsvARB("glWeightsvARB");
glbinding::Function<void, GLint, const GLubyte *> Binding::WeightubvARB("glWeightubvARB");
glbinding::Function<void, GLint, const GLuint *> Binding::WeightuivARB("glWeightuivARB");
glbinding::Function<void, GLint, const GLushort *> Binding::WeightusvARB("glWeightusvARB");
glbinding::Function<void, GLdouble, GLdouble> Binding::WindowPos2d("glWindowPos2d");
glbinding::Function<void, GLdouble, GLdouble> Binding::WindowPos2dARB("glWindowPos2dARB");
glbinding::Function<void, GLdouble, GLdouble> Binding::WindowPos2dMESA("glWindowPos2dMESA");
glbinding::Function<void, const GLdouble *> Binding::WindowPos2dv("glWindowPos2dv");
glbinding::Function<void, const GLdouble *> Binding::WindowPos2dvARB("glWindowPos2dvARB");
glbinding::Function<void, const GLdouble *> Binding::WindowPos2dvMESA("glWindowPos2dvMESA");
glbinding::Function<void, GLfloat, GLfloat> Binding::WindowPos2f("glWindowPos2f");
glbinding::Function<void, GLfloat, GLfloat> Binding::WindowPos2fARB("glWindowPos2fARB");
glbinding::Function<void, GLfloat, GLfloat> Binding::WindowPos2fMESA("glWindowPos2fMESA");
glbinding::Function<void, const GLfloat *> Binding::WindowPos2fv("glWindowPos2fv");
glbinding::Function<void, const GLfloat *> Binding::WindowPos2fvARB("glWindowPos2fvARB");
glbinding::Function<void, const GLfloat *> Binding::WindowPos2fvMESA("glWindowPos2fvMESA");
glbinding::Function<void, GLint, GLint> Binding::WindowPos2i("glWindowPos2i");
glbinding::Function<void, GLint, GLint> Binding::WindowPos2iARB("glWindowPos2iARB");
glbinding::Function<void, GLint, GLint> Binding::WindowPos2iMESA("glWindowPos2iMESA");
glbinding::Function<void, const GLint *> Binding::WindowPos2iv("glWindowPos2iv");
glbinding::Function<void, const GLint *> Binding::WindowPos2ivARB("glWindowPos2ivARB");
glbinding::Function<void, const GLint *> Binding::WindowPos2ivMESA("glWindowPos2ivMESA");
glbinding::Function<void, GLshort, GLshort> Binding::WindowPos2s("glWindowPos2s");
glbinding::Function<void, GLshort, GLshort> Binding::WindowPos2sARB("glWindowPos2sARB");
glbinding::Function<void, GLshort, GLshort> Binding::WindowPos2sMESA("glWindowPos2sMESA");
glbinding::Function<void, const GLshort *> Binding::WindowPos2sv("glWindowPos2sv");
glbinding::Function<void, const GLshort *> Binding::WindowPos2svARB("glWindowPos2svARB");
glbinding::Function<void, const GLshort *> Binding::WindowPos2svMESA("glWindowPos2svMESA");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3d("glWindowPos3d");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dARB("glWindowPos3dARB");
glbinding::Function<void, GLdouble, GLdouble, GLdouble> Binding::WindowPos3dMESA("glWindowPos3dMESA");
glbinding::Function<void, const GLdouble *> Binding::WindowPos3dv("glWindowPos3dv");
glbinding::Function<void, const GLdouble *> Binding::WindowPos3dvARB("glWindowPos3dvARB");
glbinding::Function<void, const GLdouble *> Binding::WindowPos3dvMESA("glWindowPos3dvMESA");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3f("glWindowPos3f");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fARB("glWindowPos3fARB");
glbinding::Function<void, GLfloat, GLfloat, GLfloat> Binding::WindowPos3fMESA("glWindowPos3fMESA");
glbinding::Function<void, const GLfloat *> Binding::WindowPos3fv("glWindowPos3fv");
glbinding::Function<void, const GLfloat *> Binding::WindowPos3fvARB("glWindowPos3fvARB");
glbinding::Function<void, const GLfloat *> Binding::WindowPos3fvMESA("glWindowPos3fvMESA");
glbinding::Function<void, GLint, GLint, GLint> Binding::WindowPos3i("glWindowPos3i");
glbinding::Function<void, GLint, GLint, GLint> Binding::WindowPos3iARB("glWindowPos3iARB");
glbinding::Function<void, GLint, GLint, GLint> Binding::WindowPos3iMESA("glWindowPos3iMESA");
glbinding::Function<void, const GLint *> Binding::WindowPos3iv("glWindowPos3iv");
glbinding::Function<void, const GLint *> Binding::WindowPos3ivARB("glWindowPos3ivARB");
glbinding::Function<void, const GLint *> Binding::WindowPos3ivMESA("glWindowPos3ivMESA");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::WindowPos3s("glWindowPos3s");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::WindowPos3sARB("glWindowPos3sARB");
glbinding::Function<void, GLshort, GLshort, GLshort> Binding::WindowPos3sMESA("glWindowPos3sMESA");
glbinding::Function<void, const GLshort *> Binding::WindowPos3sv("glWindowPos3sv");
glbinding::Function<void, const GLshort *> Binding::WindowPos3svARB("glWindowPos3svARB");
glbinding::Function<void, const GLshort *> Binding::WindowPos3svMESA("glWindowPos3svMESA");
glbinding::Function<void, GLdouble, GLdouble, GLdouble, GLdouble> Binding::WindowPos4dMESA("glWindowPos4dMESA");
glbinding::Function<void, const GLdouble *> Binding::WindowPos4dvMESA("glWindowPos4dvMESA");
glbinding::Function<void, GLfloat, GLfloat, GLfloat, GLfloat> Binding::WindowPos4fMESA("glWindowPos4fMESA");
glbinding::Function<void, const GLfloat *> Binding::WindowPos4fvMESA("glWindowPos4fvMESA");
glbinding::Function<void, GLint, GLint, GLint, GLint> Binding::WindowPos4iMESA("glWindowPos4iMESA");
glbinding::Function<void, const GLint *> Binding::WindowPos4ivMESA("glWindowPos4ivMESA");
glbinding::Function<void, GLshort, GLshort, GLshort, GLshort> Binding::WindowPos4sMESA("glWindowPos4sMESA");
glbinding::Function<void, const GLshort *> Binding::WindowPos4svMESA("glWindowPos4svMESA");
glbinding::Function<void, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum> Binding::WriteMaskEXT("glWriteMaskEXT");

const Binding::array_t Binding::s_functions = 
{{
	&Accum,
    &AccumxOES,
    &ActiveProgramEXT,
    &ActiveShaderProgram,
    &ActiveStencilFaceEXT,
    &ActiveTexture,
    &ActiveTextureARB,
    &ActiveVaryingNV,
    &AlphaFragmentOp1ATI,
    &AlphaFragmentOp2ATI,
    &AlphaFragmentOp3ATI,
    &AlphaFunc,
    &AlphaFuncxOES,
    &ApplyFramebufferAttachmentCMAAINTEL,
    &ApplyTextureEXT,
    &AreProgramsResidentNV,
    &AreTexturesResident,
    &AreTexturesResidentEXT,
    &ArrayElement,
    &ArrayElementEXT,
    &ArrayObjectATI,
    &AsyncMarkerSGIX,
    &AttachObjectARB,
    &AttachShader,
    &Begin,
    &BeginConditionalRender,
    &BeginConditionalRenderNV,
    &BeginConditionalRenderNVX,
    &BeginFragmentShaderATI,
    &BeginOcclusionQueryNV,
    &BeginPerfMonitorAMD,
    &BeginPerfQueryINTEL,
    &BeginQuery,
    &BeginQueryARB,
    &BeginQueryIndexed,
    &BeginTransformFeedback,
    &BeginTransformFeedbackEXT,
    &BeginTransformFeedbackNV,
    &BeginVertexShaderEXT,
    &BeginVideoCaptureNV,
    &BindAttribLocation,
    &BindAttribLocationARB,
    &BindBuffer,
    &BindBufferARB,
    &BindBufferBase,
    &BindBufferBaseEXT,
    &BindBufferBaseNV,
    &BindBufferOffsetEXT,
    &BindBufferOffsetNV,
    &BindBufferRange,
    &BindBufferRangeEXT,
    &BindBufferRangeNV,
    &BindBuffersBase,
    &BindBuffersRange,
    &BindFragDataLocation,
    &BindFragDataLocationEXT,
    &BindFragDataLocationIndexed,
    &BindFragmentShaderATI,
    &BindFramebuffer,
    &BindFramebufferEXT,
    &BindImageTexture,
    &BindImageTextureEXT,
    &BindImageTextures,
    &BindLightParameterEXT,
    &BindMaterialParameterEXT,
    &BindMultiTextureEXT,
    &BindParameterEXT,
    &BindProgramARB,
    &BindProgramNV,
    &BindProgramPipeline,
    &BindRenderbuffer,
    &BindRenderbufferEXT,
    &BindSampler,
    &BindSamplers,
    &BindTexGenParameterEXT,
    &BindTexture,
    &BindTextureEXT,
    &BindTextureUnit,
    &BindTextureUnitParameterEXT,
    &BindTextures,
    &BindTransformFeedback,
    &BindTransformFeedbackNV,
    &BindVertexArray,
    &BindVertexArrayAPPLE,
    &BindVertexBuffer,
    &BindVertexBuffers,
    &BindVertexShaderEXT,
    &BindVideoCaptureStreamBufferNV,
    &BindVideoCaptureStreamTextureNV,
    &Binormal3bEXT,
    &Binormal3bvEXT,
    &Binormal3dEXT,
    &Binormal3dvEXT,
    &Binormal3fEXT,
    &Binormal3fvEXT,
    &Binormal3iEXT,
    &Binormal3ivEXT,
    &Binormal3sEXT,
    &Binormal3svEXT,
    &BinormalPointerEXT,
    &Bitmap,
    &BitmapxOES,
    &BlendBarrierKHR,
    &BlendBarrierNV,
    &BlendColor,
    &BlendColorEXT,
    &BlendColorxOES,
    &BlendEquation,
    &BlendEquationEXT,
    &BlendEquationIndexedAMD,
    &BlendEquationSeparate,
    &BlendEquationSeparateEXT,
    &BlendEquationSeparateIndexedAMD,
    &BlendEquationSeparatei,
    &BlendEquationSeparateiARB,
    &BlendEquationi,
    &BlendEquationiARB,
    &BlendFunc,
    &BlendFuncIndexedAMD,
    &BlendFuncSeparate,
    &BlendFuncSeparateEXT,
    &BlendFuncSeparateINGR,
    &BlendFuncSeparateIndexedAMD,
    &BlendFuncSeparatei,
    &BlendFuncSeparateiARB,
    &BlendFunci,
    &BlendFunciARB,
    &BlendParameteriNV,
    &BlitFramebuffer,
    &BlitFramebufferEXT,
    &BlitNamedFramebuffer,
    &BufferAddressRangeNV,
    &BufferData,
    &BufferDataARB,
    &BufferPageCommitmentARB,
    &BufferParameteriAPPLE,
    &BufferStorage,
    &BufferSubData,
    &BufferSubDataARB,
    &CallCommandListNV,
    &CallList,
    &CallLists,
    &CheckFramebufferStatus,
    &CheckFramebufferStatusEXT,
    &CheckNamedFramebufferStatus,
    &CheckNamedFramebufferStatusEXT,
    &ClampColor,
    &ClampColorARB,
    &Clear,
    &ClearAccum,
    &ClearAccumxOES,
    &ClearBufferData,
    &ClearBufferSubData,
    &ClearBufferfi,
    &ClearBufferfv,
    &ClearBufferiv,
    &ClearBufferuiv,
    &ClearColor,
    &ClearColorIiEXT,
    &ClearColorIuiEXT,
    &ClearColorxOES,
    &ClearDepth,
    &ClearDepthdNV,
    &ClearDepthf,
    &ClearDepthfOES,
    &ClearDepthxOES,
    &ClearIndex,
    &ClearNamedBufferData,
    &ClearNamedBufferDataEXT,
    &ClearNamedBufferSubData,
    &ClearNamedBufferSubDataEXT,
    &ClearNamedFramebufferfi,
    &ClearNamedFramebufferfv,
    &ClearNamedFramebufferiv,
    &ClearNamedFramebufferuiv,
    &ClearStencil,
    &ClearTexImage,
    &ClearTexSubImage,
    &ClientActiveTexture,
    &ClientActiveTextureARB,
    &ClientActiveVertexStreamATI,
    &ClientAttribDefaultEXT,
    &ClientWaitSync,
    &ClipControl,
    &ClipPlane,
    &ClipPlanefOES,
    &ClipPlanexOES,
    &Color3b,
    &Color3bv,
    &Color3d,
    &Color3dv,
    &Color3f,
    &Color3fVertex3fSUN,
    &Color3fVertex3fvSUN,
    &Color3fv,
    &Color3hNV,
    &Color3hvNV,
    &Color3i,
    &Color3iv,
    &Color3s,
    &Color3sv,
    &Color3ub,
    &Color3ubv,
    &Color3ui,
    &Color3uiv,
    &Color3us,
    &Color3usv,
    &Color3xOES,
    &Color3xvOES,
    &Color4b,
    &Color4bv,
    &Color4d,
    &Color4dv,
    &Color4f,
    &Color4fNormal3fVertex3fSUN,
    &Color4fNormal3fVertex3fvSUN,
    &Color4fv,
    &Color4hNV,
    &Color4hvNV,
    &Color4i,
    &Color4iv,
    &Color4s,
    &Color4sv,
    &Color4ub,
    &Color4ubVertex2fSUN,
    &Color4ubVertex2fvSUN,
    &Color4ubVertex3fSUN,
    &Color4ubVertex3fvSUN,
    &Color4ubv,
    &Color4ui,
    &Color4uiv,
    &Color4us,
    &Color4usv,
    &Color4xOES,
    &Color4xvOES,
    &ColorFormatNV,
    &ColorFragmentOp1ATI,
    &ColorFragmentOp2ATI,
    &ColorFragmentOp3ATI,
    &ColorMask,
    &ColorMaskIndexedEXT,
    &ColorMaski,
    &ColorMaterial,
    &ColorP3ui,
    &ColorP3uiv,
    &ColorP4ui,
    &ColorP4uiv,
    &ColorPointer,
    &ColorPointerEXT,
    &ColorPointerListIBM,
    &ColorPointervINTEL,
    &ColorSubTable,
    &ColorSubTableEXT,
    &ColorTable,
    &ColorTableEXT,
    &ColorTableParameterfv,
    &ColorTableParameterfvSGI,
    &ColorTableParameteriv,
    &ColorTableParameterivSGI,
    &ColorTableSGI,
    &CombinerInputNV,
    &CombinerOutputNV,
    &CombinerParameterfNV,
    &CombinerParameterfvNV,
    &CombinerParameteriNV,
    &CombinerParameterivNV,
    &CombinerStageParameterfvNV,
    &CommandListSegmentsNV,
    &CompileCommandListNV,
    &CompileShader,
    &CompileShaderARB,
    &CompileShaderIncludeARB,
    &CompressedMultiTexImage1DEXT,
    &CompressedMultiTexImage2DEXT,
    &CompressedMultiTexImage3DEXT,
    &CompressedMultiTexSubImage1DEXT,
    &CompressedMultiTexSubImage2DEXT,
    &CompressedMultiTexSubImage3DEXT,
    &CompressedTexImage1D,
    &CompressedTexImage1DARB,
    &CompressedTexImage2D,
    &CompressedTexImage2DARB,
    &CompressedTexImage3D,
    &CompressedTexImage3DARB,
    &CompressedTexSubImage1D,
    &CompressedTexSubImage1DARB,
    &CompressedTexSubImage2D,
    &CompressedTexSubImage2DARB,
    &CompressedTexSubImage3D,
    &CompressedTexSubImage3DARB,
    &CompressedTextureImage1DEXT,
    &CompressedTextureImage2DEXT,
    &CompressedTextureImage3DEXT,
    &CompressedTextureSubImage1D,
    &CompressedTextureSubImage1DEXT,
    &CompressedTextureSubImage2D,
    &CompressedTextureSubImage2DEXT,
    &CompressedTextureSubImage3D,
    &CompressedTextureSubImage3DEXT,
    &ConservativeRasterParameterfNV,
    &ConvolutionFilter1D,
    &ConvolutionFilter1DEXT,
    &ConvolutionFilter2D,
    &ConvolutionFilter2DEXT,
    &ConvolutionParameterf,
    &ConvolutionParameterfEXT,
    &ConvolutionParameterfv,
    &ConvolutionParameterfvEXT,
    &ConvolutionParameteri,
    &ConvolutionParameteriEXT,
    &ConvolutionParameteriv,
    &ConvolutionParameterivEXT,
    &ConvolutionParameterxOES,
    &ConvolutionParameterxvOES,
    &CopyBufferSubData,
    &CopyColorSubTable,
    &CopyColorSubTableEXT,
    &CopyColorTable,
    &CopyColorTableSGI,
    &CopyConvolutionFilter1D,
    &CopyConvolutionFilter1DEXT,
    &CopyConvolutionFilter2D,
    &CopyConvolutionFilter2DEXT,
    &CopyImageSubData,
    &CopyImageSubDataNV,
    &CopyMultiTexImage1DEXT,
    &CopyMultiTexImage2DEXT,
    &CopyMultiTexSubImage1DEXT,
    &CopyMultiTexSubImage2DEXT,
    &CopyMultiTexSubImage3DEXT,
    &CopyNamedBufferSubData,
    &CopyPathNV,
    &CopyPixels,
    &CopyTexImage1D,
    &CopyTexImage1DEXT,
    &CopyTexImage2D,
    &CopyTexImage2DEXT,
    &CopyTexSubImage1D,
    &CopyTexSubImage1DEXT,
    &CopyTexSubImage2D,
    &CopyTexSubImage2DEXT,
    &CopyTexSubImage3D,
    &CopyTexSubImage3DEXT,
    &CopyTextureImage1DEXT,
    &CopyTextureImage2DEXT,
    &CopyTextureSubImage1D,
    &CopyTextureSubImage1DEXT,
    &CopyTextureSubImage2D,
    &CopyTextureSubImage2DEXT,
    &CopyTextureSubImage3D,
    &CopyTextureSubImage3DEXT,
    &CoverFillPathInstancedNV,
    &CoverFillPathNV,
    &CoverStrokePathInstancedNV,
    &CoverStrokePathNV,
    &CoverageModulationNV,
    &CoverageModulationTableNV,
    &CreateBuffers,
    &CreateCommandListsNV,
    &CreateFramebuffers,
    &CreatePerfQueryINTEL,
    &CreateProgram,
    &CreateProgramObjectARB,
    &CreateProgramPipelines,
    &CreateQueries,
    &CreateRenderbuffers,
    &CreateSamplers,
    &CreateShader,
    &CreateShaderObjectARB,
    &CreateShaderProgramEXT,
    &CreateShaderProgramv,
    &CreateStatesNV,
    &CreateSyncFromCLeventARB,
    &CreateTextures,
    &CreateTransformFeedbacks,
    &CreateVertexArrays,
    &CullFace,
    &CullParameterdvEXT,
    &CullParameterfvEXT,
    &CurrentPaletteMatrixARB,
    &DebugMessageCallback,
    &DebugMessageCallbackAMD,
    &DebugMessageCallbackARB,
    &DebugMessageControl,
    &DebugMessageControlARB,
    &DebugMessageEnableAMD,
    &DebugMessageInsert,
    &DebugMessageInsertAMD,
    &DebugMessageInsertARB,
    &DeformSGIX,
    &DeformationMap3dSGIX,
    &DeformationMap3fSGIX,
    &DeleteAsyncMarkersSGIX,
    &DeleteBuffers,
    &DeleteBuffersARB,
    &DeleteCommandListsNV,
    &DeleteFencesAPPLE,
    &DeleteFencesNV,
    &DeleteFragmentShaderATI,
    &DeleteFramebuffers,
    &DeleteFramebuffersEXT,
    &DeleteLists,
    &DeleteNamedStringARB,
    &DeleteNamesAMD,
    &DeleteObjectARB,
    &DeleteOcclusionQueriesNV,
    &DeletePathsNV,
    &DeletePerfMonitorsAMD,
    &DeletePerfQueryINTEL,
    &DeleteProgram,
    &DeleteProgramPipelines,
    &DeleteProgramsARB,
    &DeleteProgramsNV,
    &DeleteQueries,
    &DeleteQueriesARB,
    &DeleteRenderbuffers,
    &DeleteRenderbuffersEXT,
    &DeleteSamplers,
    &DeleteShader,
    &DeleteStatesNV,
    &DeleteSync,
    &DeleteTextures,
    &DeleteTexturesEXT,
    &DeleteTransformFeedbacks,
    &DeleteTransformFeedbacksNV,
    &DeleteVertexArrays,
    &DeleteVertexArraysAPPLE,
    &DeleteVertexShaderEXT,
    &DepthBoundsEXT,
    &DepthBoundsdNV,
    &DepthFunc,
    &DepthMask,
    &DepthRange,
    &DepthRangeArrayv,
    &DepthRangeIndexed,
    &DepthRangedNV,
    &DepthRangef,
    &DepthRangefOES,
    &DepthRangexOES,
    &DetachObjectARB,
    &DetachShader,
    &DetailTexFuncSGIS,
    &Disable,
    &DisableClientState,
    &DisableClientStateIndexedEXT,
    &DisableClientStateiEXT,
    &DisableIndexedEXT,
    &DisableVariantClientStateEXT,
    &DisableVertexArrayAttrib,
    &DisableVertexArrayAttribEXT,
    &DisableVertexArrayEXT,
    &DisableVertexAttribAPPLE,
    &DisableVertexAttribArray,
    &DisableVertexAttribArrayARB,
    &Disablei,
    &DispatchCompute,
    &DispatchComputeGroupSizeARB,
    &DispatchComputeIndirect,
    &DrawArrays,
    &DrawArraysEXT,
    &DrawArraysIndirect,
    &DrawArraysInstanced,
    &DrawArraysInstancedARB,
    &DrawArraysInstancedBaseInstance,
    &DrawArraysInstancedEXT,
    &DrawBuffer,
    &DrawBuffers,
    &DrawBuffersARB,
    &DrawBuffersATI,
    &DrawCommandsAddressNV,
    &DrawCommandsNV,
    &DrawCommandsStatesAddressNV,
    &DrawCommandsStatesNV,
    &DrawElementArrayAPPLE,
    &DrawElementArrayATI,
    &DrawElements,
    &DrawElementsBaseVertex,
    &DrawElementsIndirect,
    &DrawElementsInstanced,
    &DrawElementsInstancedARB,
    &DrawElementsInstancedBaseInstance,
    &DrawElementsInstancedBaseVertex,
    &DrawElementsInstancedBaseVertexBaseInstance,
    &DrawElementsInstancedEXT,
    &DrawMeshArraysSUN,
    &DrawPixels,
    &DrawRangeElementArrayAPPLE,
    &DrawRangeElementArrayATI,
    &DrawRangeElements,
    &DrawRangeElementsBaseVertex,
    &DrawRangeElementsEXT,
    &DrawTextureNV,
    &DrawTransformFeedback,
    &DrawTransformFeedbackInstanced,
    &DrawTransformFeedbackNV,
    &DrawTransformFeedbackStream,
    &DrawTransformFeedbackStreamInstanced,
    &EdgeFlag,
    &EdgeFlagFormatNV,
    &EdgeFlagPointer,
    &EdgeFlagPointerEXT,
    &EdgeFlagPointerListIBM,
    &EdgeFlagv,
    &ElementPointerAPPLE,
    &ElementPointerATI,
    &Enable,
    &EnableClientState,
    &EnableClientStateIndexedEXT,
    &EnableClientStateiEXT,
    &EnableIndexedEXT,
    &EnableVariantClientStateEXT,
    &EnableVertexArrayAttrib,
    &EnableVertexArrayAttribEXT,
    &EnableVertexArrayEXT,
    &EnableVertexAttribAPPLE,
    &EnableVertexAttribArray,
    &EnableVertexAttribArrayARB,
    &Enablei,
    &End,
    &EndConditionalRender,
    &EndConditionalRenderNV,
    &EndConditionalRenderNVX,
    &EndFragmentShaderATI,
    &EndList,
    &EndOcclusionQueryNV,
    &EndPerfMonitorAMD,
    &EndPerfQueryINTEL,
    &EndQuery,
    &EndQueryARB,
    &EndQueryIndexed,
    &EndTransformFeedback,
    &EndTransformFeedbackEXT,
    &EndTransformFeedbackNV,
    &EndVertexShaderEXT,
    &EndVideoCaptureNV,
    &EvalCoord1d,
    &EvalCoord1dv,
    &EvalCoord1f,
    &EvalCoord1fv,
    &EvalCoord1xOES,
    &EvalCoord1xvOES,
    &EvalCoord2d,
    &EvalCoord2dv,
    &EvalCoord2f,
    &EvalCoord2fv,
    &EvalCoord2xOES,
    &EvalCoord2xvOES,
    &EvalMapsNV,
    &EvalMesh1,
    &EvalMesh2,
    &EvalPoint1,
    &EvalPoint2,
    &EvaluateDepthValuesARB,
    &ExecuteProgramNV,
    &ExtractComponentEXT,
    &FeedbackBuffer,
    &FeedbackBufferxOES,
    &FenceSync,
    &FinalCombinerInputNV,
    &Finish,
    &FinishAsyncSGIX,
    &FinishFenceAPPLE,
    &FinishFenceNV,
    &FinishObjectAPPLE,
    &FinishTextureSUNX,
    &Flush,
    &FlushMappedBufferRange,
    &FlushMappedBufferRangeAPPLE,
    &FlushMappedNamedBufferRange,
    &FlushMappedNamedBufferRangeEXT,
    &FlushPixelDataRangeNV,
    &FlushRasterSGIX,
    &FlushStaticDataIBM,
    &FlushVertexArrayRangeAPPLE,
    &FlushVertexArrayRangeNV,
    &FogCoordFormatNV,
    &FogCoordPointer,
    &FogCoordPointerEXT,
    &FogCoordPointerListIBM,
    &FogCoordd,
    &FogCoorddEXT,
    &FogCoorddv,
    &FogCoorddvEXT,
    &FogCoordf,
    &FogCoordfEXT,
    &FogCoordfv,
    &FogCoordfvEXT,
    &FogCoordhNV,
    &FogCoordhvNV,
    &FogFuncSGIS,
    &Fogf,
    &Fogfv,
    &Fogi,
    &Fogiv,
    &FogxOES,
    &FogxvOES,
    &FragmentColorMaterialSGIX,
    &FragmentCoverageColorNV,
    &FragmentLightModelfSGIX,
    &FragmentLightModelfvSGIX,
    &FragmentLightModeliSGIX,
    &FragmentLightModelivSGIX,
    &FragmentLightfSGIX,
    &FragmentLightfvSGIX,
    &FragmentLightiSGIX,
    &FragmentLightivSGIX,
    &FragmentMaterialfSGIX,
    &FragmentMaterialfvSGIX,
    &FragmentMaterialiSGIX,
    &FragmentMaterialivSGIX,
    &FrameTerminatorGREMEDY,
    &FrameZoomSGIX,
    &FramebufferDrawBufferEXT,
    &FramebufferDrawBuffersEXT,
    &FramebufferParameteri,
    &FramebufferReadBufferEXT,
    &FramebufferRenderbuffer,
    &FramebufferRenderbufferEXT,
    &FramebufferSampleLocationsfvARB,
    &FramebufferSampleLocationsfvNV,
    &FramebufferTexture,
    &FramebufferTexture1D,
    &FramebufferTexture1DEXT,
    &FramebufferTexture2D,
    &FramebufferTexture2DEXT,
    &FramebufferTexture3D,
    &FramebufferTexture3DEXT,
    &FramebufferTextureARB,
    &FramebufferTextureEXT,
    &FramebufferTextureFaceARB,
    &FramebufferTextureFaceEXT,
    &FramebufferTextureLayer,
    &FramebufferTextureLayerARB,
    &FramebufferTextureLayerEXT,
    &FramebufferTextureMultiviewOVR,
    &FreeObjectBufferATI,
    &FrontFace,
    &Frustum,
    &FrustumfOES,
    &FrustumxOES,
    &GenAsyncMarkersSGIX,
    &GenBuffers,
    &GenBuffersARB,
    &GenFencesAPPLE,
    &GenFencesNV,
    &GenFragmentShadersATI,
    &GenFramebuffers,
    &GenFramebuffersEXT,
    &GenLists,
    &GenNamesAMD,
    &GenOcclusionQueriesNV,
    &GenPathsNV,
    &GenPerfMonitorsAMD,
    &GenProgramPipelines,
    &GenProgramsARB,
    &GenProgramsNV,
    &GenQueries,
    &GenQueriesARB,
    &GenRenderbuffers,
    &GenRenderbuffersEXT,
    &GenSamplers,
    &GenSymbolsEXT,
    &GenTextures,
    &GenTexturesEXT,
    &GenTransformFeedbacks,
    &GenTransformFeedbacksNV,
    &GenVertexArrays,
    &GenVertexArraysAPPLE,
    &GenVertexShadersEXT,
    &GenerateMipmap,
    &GenerateMipmapEXT,
    &GenerateMultiTexMipmapEXT,
    &GenerateTextureMipmap,
    &GenerateTextureMipmapEXT,
    &GetActiveAtomicCounterBufferiv,
    &GetActiveAttrib,
    &GetActiveAttribARB,
    &GetActiveSubroutineName,
    &GetActiveSubroutineUniformName,
    &GetActiveSubroutineUniformiv,
    &GetActiveUniform,
    &GetActiveUniformARB,
    &GetActiveUniformBlockName,
    &GetActiveUniformBlockiv,
    &GetActiveUniformName,
    &GetActiveUniformsiv,
    &GetActiveVaryingNV,
    &GetArrayObjectfvATI,
    &GetArrayObjectivATI,
    &GetAttachedObjectsARB,
    &GetAttachedShaders,
    &GetAttribLocation,
    &GetAttribLocationARB,
    &GetBooleanIndexedvEXT,
    &GetBooleani_v,
    &GetBooleanv,
    &GetBufferParameteri64v,
    &GetBufferParameteriv,
    &GetBufferParameterivARB,
    &GetBufferParameterui64vNV,
    &GetBufferPointerv,
    &GetBufferPointervARB,
    &GetBufferSubData,
    &GetBufferSubDataARB,
    &GetClipPlane,
    &GetClipPlanefOES,
    &GetClipPlanexOES,
    &GetColorTable,
    &GetColorTableEXT,
    &GetColorTableParameterfv,
    &GetColorTableParameterfvEXT,
    &GetColorTableParameterfvSGI,
    &GetColorTableParameteriv,
    &GetColorTableParameterivEXT,
    &GetColorTableParameterivSGI,
    &GetColorTableSGI,
    &GetCombinerInputParameterfvNV,
    &GetCombinerInputParameterivNV,
    &GetCombinerOutputParameterfvNV,
    &GetCombinerOutputParameterivNV,
    &GetCombinerStageParameterfvNV,
    &GetCommandHeaderNV,
    &GetCompressedMultiTexImageEXT,
    &GetCompressedTexImage,
    &GetCompressedTexImageARB,
    &GetCompressedTextureImage,
    &GetCompressedTextureImageEXT,
    &GetCompressedTextureSubImage,
    &GetConvolutionFilter,
    &GetConvolutionFilterEXT,
    &GetConvolutionParameterfv,
    &GetConvolutionParameterfvEXT,
    &GetConvolutionParameteriv,
    &GetConvolutionParameterivEXT,
    &GetConvolutionParameterxvOES,
    &GetCoverageModulationTableNV,
    &GetDebugMessageLog,
    &GetDebugMessageLogAMD,
    &GetDebugMessageLogARB,
    &GetDetailTexFuncSGIS,
    &GetDoubleIndexedvEXT,
    &GetDoublei_v,
    &GetDoublei_vEXT,
    &GetDoublev,
    &GetError,
    &GetFenceivNV,
    &GetFinalCombinerInputParameterfvNV,
    &GetFinalCombinerInputParameterivNV,
    &GetFirstPerfQueryIdINTEL,
    &GetFixedvOES,
    &GetFloatIndexedvEXT,
    &GetFloati_v,
    &GetFloati_vEXT,
    &GetFloatv,
    &GetFogFuncSGIS,
    &GetFragDataIndex,
    &GetFragDataLocation,
    &GetFragDataLocationEXT,
    &GetFragmentLightfvSGIX,
    &GetFragmentLightivSGIX,
    &GetFragmentMaterialfvSGIX,
    &GetFragmentMaterialivSGIX,
    &GetFramebufferAttachmentParameteriv,
    &GetFramebufferAttachmentParameterivEXT,
    &GetFramebufferParameteriv,
    &GetFramebufferParameterivEXT,
    &GetGraphicsResetStatus,
    &GetGraphicsResetStatusARB,
    &GetHandleARB,
    &GetHistogram,
    &GetHistogramEXT,
    &GetHistogramParameterfv,
    &GetHistogramParameterfvEXT,
    &GetHistogramParameteriv,
    &GetHistogramParameterivEXT,
    &GetHistogramParameterxvOES,
    &GetImageHandleARB,
    &GetImageHandleNV,
    &GetImageTransformParameterfvHP,
    &GetImageTransformParameterivHP,
    &GetInfoLogARB,
    &GetInstrumentsSGIX,
    &GetInteger64i_v,
    &GetInteger64v,
    &GetIntegerIndexedvEXT,
    &GetIntegeri_v,
    &GetIntegerui64i_vNV,
    &GetIntegerui64vNV,
    &GetIntegerv,
    &GetInternalformatSampleivNV,
    &GetInternalformati64v,
    &GetInternalformativ,
    &GetInvariantBooleanvEXT,
    &GetInvariantFloatvEXT,
    &GetInvariantIntegervEXT,
    &GetLightfv,
    &GetLightiv,
    &GetLightxOES,
    &GetListParameterfvSGIX,
    &GetListParameterivSGIX,
    &GetLocalConstantBooleanvEXT,
    &GetLocalConstantFloatvEXT,
    &GetLocalConstantIntegervEXT,
    &GetMapAttribParameterfvNV,
    &GetMapAttribParameterivNV,
    &GetMapControlPointsNV,
    &GetMapParameterfvNV,
    &GetMapParameterivNV,
    &GetMapdv,
    &GetMapfv,
    &GetMapiv,
    &GetMapxvOES,
    &GetMaterialfv,
    &GetMaterialiv,
    &GetMaterialxOES,
    &GetMinmax,
    &GetMinmaxEXT,
    &GetMinmaxParameterfv,
    &GetMinmaxParameterfvEXT,
    &GetMinmaxParameteriv,
    &GetMinmaxParameterivEXT,
    &GetMultiTexEnvfvEXT,
    &GetMultiTexEnvivEXT,
    &GetMultiTexGendvEXT,
    &GetMultiTexGenfvEXT,
    &GetMultiTexGenivEXT,
    &GetMultiTexImageEXT,
    &GetMultiTexLevelParameterfvEXT,
    &GetMultiTexLevelParameterivEXT,
    &GetMultiTexParameterIivEXT,
    &GetMultiTexParameterIuivEXT,
    &GetMultiTexParameterfvEXT,
    &GetMultiTexParameterivEXT,
    &GetMultisamplefv,
    &GetMultisamplefvNV,
    &GetNamedBufferParameteri64v,
    &GetNamedBufferParameteriv,
    &GetNamedBufferParameterivEXT,
    &GetNamedBufferParameterui64vNV,
    &GetNamedBufferPointerv,
    &GetNamedBufferPointervEXT,
    &GetNamedBufferSubData,
    &GetNamedBufferSubDataEXT,
    &GetNamedFramebufferAttachmentParameteriv,
    &GetNamedFramebufferAttachmentParameterivEXT,
    &GetNamedFramebufferParameteriv,
    &GetNamedFramebufferParameterivEXT,
    &GetNamedProgramLocalParameterIivEXT,
    &GetNamedProgramLocalParameterIuivEXT,
    &GetNamedProgramLocalParameterdvEXT,
    &GetNamedProgramLocalParameterfvEXT,
    &GetNamedProgramStringEXT,
    &GetNamedProgramivEXT,
    &GetNamedRenderbufferParameteriv,
    &GetNamedRenderbufferParameterivEXT,
    &GetNamedStringARB,
    &GetNamedStringivARB,
    &GetNextPerfQueryIdINTEL,
    &GetObjectBufferfvATI,
    &GetObjectBufferivATI,
    &GetObjectLabel,
    &GetObjectLabelEXT,
    &GetObjectParameterfvARB,
    &GetObjectParameterivAPPLE,
    &GetObjectParameterivARB,
    &GetObjectPtrLabel,
    &GetOcclusionQueryivNV,
    &GetOcclusionQueryuivNV,
    &GetPathColorGenfvNV,
    &GetPathColorGenivNV,
    &GetPathCommandsNV,
    &GetPathCoordsNV,
    &GetPathDashArrayNV,
    &GetPathLengthNV,
    &GetPathMetricRangeNV,
    &GetPathMetricsNV,
    &GetPathParameterfvNV,
    &GetPathParameterivNV,
    &GetPathSpacingNV,
    &GetPathTexGenfvNV,
    &GetPathTexGenivNV,
    &GetPerfCounterInfoINTEL,
    &GetPerfMonitorCounterDataAMD,
    &GetPerfMonitorCounterInfoAMD,
    &GetPerfMonitorCounterStringAMD,
    &GetPerfMonitorCountersAMD,
    &GetPerfMonitorGroupStringAMD,
    &GetPerfMonitorGroupsAMD,
    &GetPerfQueryDataINTEL,
    &GetPerfQueryIdByNameINTEL,
    &GetPerfQueryInfoINTEL,
    &GetPixelMapfv,
    &GetPixelMapuiv,
    &GetPixelMapusv,
    &GetPixelMapxv,
    &GetPixelTexGenParameterfvSGIS,
    &GetPixelTexGenParameterivSGIS,
    &GetPixelTransformParameterfvEXT,
    &GetPixelTransformParameterivEXT,
    &GetPointerIndexedvEXT,
    &GetPointeri_vEXT,
    &GetPointerv,
    &GetPointervEXT,
    &GetPolygonStipple,
    &GetProgramBinary,
    &GetProgramEnvParameterIivNV,
    &GetProgramEnvParameterIuivNV,
    &GetProgramEnvParameterdvARB,
    &GetProgramEnvParameterfvARB,
    &GetProgramInfoLog,
    &GetProgramInterfaceiv,
    &GetProgramLocalParameterIivNV,
    &GetProgramLocalParameterIuivNV,
    &GetProgramLocalParameterdvARB,
    &GetProgramLocalParameterfvARB,
    &GetProgramNamedParameterdvNV,
    &GetProgramNamedParameterfvNV,
    &GetProgramParameterdvNV,
    &GetProgramParameterfvNV,
    &GetProgramPipelineInfoLog,
    &GetProgramPipelineiv,
    &GetProgramResourceIndex,
    &GetProgramResourceLocation,
    &GetProgramResourceLocationIndex,
    &GetProgramResourceName,
    &GetProgramResourcefvNV,
    &GetProgramResourceiv,
    &GetProgramStageiv,
    &GetProgramStringARB,
    &GetProgramStringNV,
    &GetProgramSubroutineParameteruivNV,
    &GetProgramiv,
    &GetProgramivARB,
    &GetProgramivNV,
    &GetQueryBufferObjecti64v,
    &GetQueryBufferObjectiv,
    &GetQueryBufferObjectui64v,
    &GetQueryBufferObjectuiv,
    &GetQueryIndexediv,
    &GetQueryObjecti64v,
    &GetQueryObjecti64vEXT,
    &GetQueryObjectiv,
    &GetQueryObjectivARB,
    &GetQueryObjectui64v,
    &GetQueryObjectui64vEXT,
    &GetQueryObjectuiv,
    &GetQueryObjectuivARB,
    &GetQueryiv,
    &GetQueryivARB,
    &GetRenderbufferParameteriv,
    &GetRenderbufferParameterivEXT,
    &GetSamplerParameterIiv,
    &GetSamplerParameterIuiv,
    &GetSamplerParameterfv,
    &GetSamplerParameteriv,
    &GetSeparableFilter,
    &GetSeparableFilterEXT,
    &GetShaderInfoLog,
    &GetShaderPrecisionFormat,
    &GetShaderSource,
    &GetShaderSourceARB,
    &GetShaderiv,
    &GetSharpenTexFuncSGIS,
    &GetStageIndexNV,
    &GetString,
    &GetStringi,
    &GetSubroutineIndex,
    &GetSubroutineUniformLocation,
    &GetSynciv,
    &GetTexBumpParameterfvATI,
    &GetTexBumpParameterivATI,
    &GetTexEnvfv,
    &GetTexEnviv,
    &GetTexEnvxvOES,
    &GetTexFilterFuncSGIS,
    &GetTexGendv,
    &GetTexGenfv,
    &GetTexGeniv,
    &GetTexGenxvOES,
    &GetTexImage,
    &GetTexLevelParameterfv,
    &GetTexLevelParameteriv,
    &GetTexLevelParameterxvOES,
    &GetTexParameterIiv,
    &GetTexParameterIivEXT,
    &GetTexParameterIuiv,
    &GetTexParameterIuivEXT,
    &GetTexParameterPointervAPPLE,
    &GetTexParameterfv,
    &GetTexParameteriv,
    &GetTexParameterxvOES,
    &GetTextureHandleARB,
    &GetTextureHandleNV,
    &GetTextureImage,
    &GetTextureImageEXT,
    &GetTextureLevelParameterfv,
    &GetTextureLevelParameterfvEXT,
    &GetTextureLevelParameteriv,
    &GetTextureLevelParameterivEXT,
    &GetTextureParameterIiv,
    &GetTextureParameterIivEXT,
    &GetTextureParameterIuiv,
    &GetTextureParameterIuivEXT,
    &GetTextureParameterfv,
    &GetTextureParameterfvEXT,
    &GetTextureParameteriv,
    &GetTextureParameterivEXT,
    &GetTextureSamplerHandleARB,
    &GetTextureSamplerHandleNV,
    &GetTextureSubImage,
    &GetTrackMatrixivNV,
    &GetTransformFeedbackVarying,
    &GetTransformFeedbackVaryingEXT,
    &GetTransformFeedbackVaryingNV,
    &GetTransformFeedbacki64_v,
    &GetTransformFeedbacki_v,
    &GetTransformFeedbackiv,
    &GetUniformBlockIndex,
    &GetUniformBufferSizeEXT,
    &GetUniformIndices,
    &GetUniformLocation,
    &GetUniformLocationARB,
    &GetUniformOffsetEXT,
    &GetUniformSubroutineuiv,
    &GetUniformdv,
    &GetUniformfv,
    &GetUniformfvARB,
    &GetUniformi64vARB,
    &GetUniformi64vNV,
    &GetUniformiv,
    &GetUniformivARB,
    &GetUniformui64vARB,
    &GetUniformui64vNV,
    &GetUniformuiv,
    &GetUniformuivEXT,
    &GetVariantArrayObjectfvATI,
    &GetVariantArrayObjectivATI,
    &GetVariantBooleanvEXT,
    &GetVariantFloatvEXT,
    &GetVariantIntegervEXT,
    &GetVariantPointervEXT,
    &GetVaryingLocationNV,
    &GetVertexArrayIndexed64iv,
    &GetVertexArrayIndexediv,
    &GetVertexArrayIntegeri_vEXT,
    &GetVertexArrayIntegervEXT,
    &GetVertexArrayPointeri_vEXT,
    &GetVertexArrayPointervEXT,
    &GetVertexArrayiv,
    &GetVertexAttribArrayObjectfvATI,
    &GetVertexAttribArrayObjectivATI,
    &GetVertexAttribIiv,
    &GetVertexAttribIivEXT,
    &GetVertexAttribIuiv,
    &GetVertexAttribIuivEXT,
    &GetVertexAttribLdv,
    &GetVertexAttribLdvEXT,
    &GetVertexAttribLi64vNV,
    &GetVertexAttribLui64vARB,
    &GetVertexAttribLui64vNV,
    &GetVertexAttribPointerv,
    &GetVertexAttribPointervARB,
    &GetVertexAttribPointervNV,
    &GetVertexAttribdv,
    &GetVertexAttribdvARB,
    &GetVertexAttribdvNV,
    &GetVertexAttribfv,
    &GetVertexAttribfvARB,
    &GetVertexAttribfvNV,
    &GetVertexAttribiv,
    &GetVertexAttribivARB,
    &GetVertexAttribivNV,
    &GetVideoCaptureStreamdvNV,
    &GetVideoCaptureStreamfvNV,
    &GetVideoCaptureStreamivNV,
    &GetVideoCaptureivNV,
    &GetVideoi64vNV,
    &GetVideoivNV,
    &GetVideoui64vNV,
    &GetVideouivNV,
    &GetnColorTable,
    &GetnColorTableARB,
    &GetnCompressedTexImage,
    &GetnCompressedTexImageARB,
    &GetnConvolutionFilter,
    &GetnConvolutionFilterARB,
    &GetnHistogram,
    &GetnHistogramARB,
    &GetnMapdv,
    &GetnMapdvARB,
    &GetnMapfv,
    &GetnMapfvARB,
    &GetnMapiv,
    &GetnMapivARB,
    &GetnMinmax,
    &GetnMinmaxARB,
    &GetnPixelMapfv,
    &GetnPixelMapfvARB,
    &GetnPixelMapuiv,
    &GetnPixelMapuivARB,
    &GetnPixelMapusv,
    &GetnPixelMapusvARB,
    &GetnPolygonStipple,
    &GetnPolygonStippleARB,
    &GetnSeparableFilter,
    &GetnSeparableFilterARB,
    &GetnTexImage,
    &GetnTexImageARB,
    &GetnUniformdv,
    &GetnUniformdvARB,
    &GetnUniformfv,
    &GetnUniformfvARB,
    &GetnUniformi64vARB,
    &GetnUniformiv,
    &GetnUniformivARB,
    &GetnUniformui64vARB,
    &GetnUniformuiv,
    &GetnUniformuivARB,
    &GlobalAlphaFactorbSUN,
    &GlobalAlphaFactordSUN,
    &GlobalAlphaFactorfSUN,
    &GlobalAlphaFactoriSUN,
    &GlobalAlphaFactorsSUN,
    &GlobalAlphaFactorubSUN,
    &GlobalAlphaFactoruiSUN,
    &GlobalAlphaFactorusSUN,
    &Hint,
    &HintPGI,
    &Histogram,
    &HistogramEXT,
    &IglooInterfaceSGIX,
    &ImageTransformParameterfHP,
    &ImageTransformParameterfvHP,
    &ImageTransformParameteriHP,
    &ImageTransformParameterivHP,
    &ImportSyncEXT,
    &IndexFormatNV,
    &IndexFuncEXT,
    &IndexMask,
    &IndexMaterialEXT,
    &IndexPointer,
    &IndexPointerEXT,
    &IndexPointerListIBM,
    &Indexd,
    &Indexdv,
    &Indexf,
    &Indexfv,
    &Indexi,
    &Indexiv,
    &Indexs,
    &Indexsv,
    &Indexub,
    &Indexubv,
    &IndexxOES,
    &IndexxvOES,
    &InitNames,
    &InsertComponentEXT,
    &InsertEventMarkerEXT,
    &InstrumentsBufferSGIX,
    &InterleavedArrays,
    &InterpolatePathsNV,
    &InvalidateBufferData,
    &InvalidateBufferSubData,
    &InvalidateFramebuffer,
    &InvalidateNamedFramebufferData,
    &InvalidateNamedFramebufferSubData,
    &InvalidateSubFramebuffer,
    &InvalidateTexImage,
    &InvalidateTexSubImage,
    &IsAsyncMarkerSGIX,
    &IsBuffer,
    &IsBufferARB,
    &IsBufferResidentNV,
    &IsCommandListNV,
    &IsEnabled,
    &IsEnabledIndexedEXT,
    &IsEnabledi,
    &IsFenceAPPLE,
    &IsFenceNV,
    &IsFramebuffer,
    &IsFramebufferEXT,
    &IsImageHandleResidentARB,
    &IsImageHandleResidentNV,
    &IsList,
    &IsNameAMD,
    &IsNamedBufferResidentNV,
    &IsNamedStringARB,
    &IsObjectBufferATI,
    &IsOcclusionQueryNV,
    &IsPathNV,
    &IsPointInFillPathNV,
    &IsPointInStrokePathNV,
    &IsProgram,
    &IsProgramARB,
    &IsProgramNV,
    &IsProgramPipeline,
    &IsQuery,
    &IsQueryARB,
    &IsRenderbuffer,
    &IsRenderbufferEXT,
    &IsSampler,
    &IsShader,
    &IsStateNV,
    &IsSync,
    &IsTexture,
    &IsTextureEXT,
    &IsTextureHandleResidentARB,
    &IsTextureHandleResidentNV,
    &IsTransformFeedback,
    &IsTransformFeedbackNV,
    &IsVariantEnabledEXT,
    &IsVertexArray,
    &IsVertexArrayAPPLE,
    &IsVertexAttribEnabledAPPLE,
    &LabelObjectEXT,
    &LightEnviSGIX,
    &LightModelf,
    &LightModelfv,
    &LightModeli,
    &LightModeliv,
    &LightModelxOES,
    &LightModelxvOES,
    &Lightf,
    &Lightfv,
    &Lighti,
    &Lightiv,
    &LightxOES,
    &LightxvOES,
    &LineStipple,
    &LineWidth,
    &LineWidthxOES,
    &LinkProgram,
    &LinkProgramARB,
    &ListBase,
    &ListDrawCommandsStatesClientNV,
    &ListParameterfSGIX,
    &ListParameterfvSGIX,
    &ListParameteriSGIX,
    &ListParameterivSGIX,
    &LoadIdentity,
    &LoadIdentityDeformationMapSGIX,
    &LoadMatrixd,
    &LoadMatrixf,
    &LoadMatrixxOES,
    &LoadName,
    &LoadProgramNV,
    &LoadTransposeMatrixd,
    &LoadTransposeMatrixdARB,
    &LoadTransposeMatrixf,
    &LoadTransposeMatrixfARB,
    &LoadTransposeMatrixxOES,
    &LockArraysEXT,
    &LogicOp,
    &MakeBufferNonResidentNV,
    &MakeBufferResidentNV,
    &MakeImageHandleNonResidentARB,
    &MakeImageHandleNonResidentNV,
    &MakeImageHandleResidentARB,
    &MakeImageHandleResidentNV,
    &MakeNamedBufferNonResidentNV,
    &MakeNamedBufferResidentNV,
    &MakeTextureHandleNonResidentARB,
    &MakeTextureHandleNonResidentNV,
    &MakeTextureHandleResidentARB,
    &MakeTextureHandleResidentNV,
    &Map1d,
    &Map1f,
    &Map1xOES,
    &Map2d,
    &Map2f,
    &Map2xOES,
    &MapBuffer,
    &MapBufferARB,
    &MapBufferRange,
    &MapControlPointsNV,
    &MapGrid1d,
    &MapGrid1f,
    &MapGrid1xOES,
    &MapGrid2d,
    &MapGrid2f,
    &MapGrid2xOES,
    &MapNamedBuffer,
    &MapNamedBufferEXT,
    &MapNamedBufferRange,
    &MapNamedBufferRangeEXT,
    &MapObjectBufferATI,
    &MapParameterfvNV,
    &MapParameterivNV,
    &MapTexture2DINTEL,
    &MapVertexAttrib1dAPPLE,
    &MapVertexAttrib1fAPPLE,
    &MapVertexAttrib2dAPPLE,
    &MapVertexAttrib2fAPPLE,
    &Materialf,
    &Materialfv,
    &Materiali,
    &Materialiv,
    &MaterialxOES,
    &MaterialxvOES,
    &MatrixFrustumEXT,
    &MatrixIndexPointerARB,
    &MatrixIndexubvARB,
    &MatrixIndexuivARB,
    &MatrixIndexusvARB,
    &MatrixLoad3x2fNV,
    &MatrixLoad3x3fNV,
    &MatrixLoadIdentityEXT,
    &MatrixLoadTranspose3x3fNV,
    &MatrixLoadTransposedEXT,
    &MatrixLoadTransposefEXT,
    &MatrixLoaddEXT,
    &MatrixLoadfEXT,
    &MatrixMode,
    &MatrixMult3x2fNV,
    &MatrixMult3x3fNV,
    &MatrixMultTranspose3x3fNV,
    &MatrixMultTransposedEXT,
    &MatrixMultTransposefEXT,
    &MatrixMultdEXT,
    &MatrixMultfEXT,
    &MatrixOrthoEXT,
    &MatrixPopEXT,
    &MatrixPushEXT,
    &MatrixRotatedEXT,
    &MatrixRotatefEXT,
    &MatrixScaledEXT,
    &MatrixScalefEXT,
    &MatrixTranslatedEXT,
    &MatrixTranslatefEXT,
    &MaxShaderCompilerThreadsARB,
    &MemoryBarrier,
    &MemoryBarrierByRegion,
    &MemoryBarrierEXT,
    &MinSampleShading,
    &MinSampleShadingARB,
    &Minmax,
    &MinmaxEXT,
    &MultMatrixd,
    &MultMatrixf,
    &MultMatrixxOES,
    &MultTransposeMatrixd,
    &MultTransposeMatrixdARB,
    &MultTransposeMatrixf,
    &MultTransposeMatrixfARB,
    &MultTransposeMatrixxOES,
    &MultiDrawArrays,
    &MultiDrawArraysEXT,
    &MultiDrawArraysIndirect,
    &MultiDrawArraysIndirectAMD,
    &MultiDrawArraysIndirectBindlessCountNV,
    &MultiDrawArraysIndirectBindlessNV,
    &MultiDrawArraysIndirectCountARB,
    &MultiDrawElementArrayAPPLE,
    &MultiDrawElements,
    &MultiDrawElementsBaseVertex,
    &MultiDrawElementsEXT,
    &MultiDrawElementsIndirect,
    &MultiDrawElementsIndirectAMD,
    &MultiDrawElementsIndirectBindlessCountNV,
    &MultiDrawElementsIndirectBindlessNV,
    &MultiDrawElementsIndirectCountARB,
    &MultiDrawRangeElementArrayAPPLE,
    &MultiModeDrawArraysIBM,
    &MultiModeDrawElementsIBM,
    &MultiTexBufferEXT,
    &MultiTexCoord1bOES,
    &MultiTexCoord1bvOES,
    &MultiTexCoord1d,
    &MultiTexCoord1dARB,
    &MultiTexCoord1dv,
    &MultiTexCoord1dvARB,
    &MultiTexCoord1f,
    &MultiTexCoord1fARB,
    &MultiTexCoord1fv,
    &MultiTexCoord1fvARB,
    &MultiTexCoord1hNV,
    &MultiTexCoord1hvNV,
    &MultiTexCoord1i,
    &MultiTexCoord1iARB,
    &MultiTexCoord1iv,
    &MultiTexCoord1ivARB,
    &MultiTexCoord1s,
    &MultiTexCoord1sARB,
    &MultiTexCoord1sv,
    &MultiTexCoord1svARB,
    &MultiTexCoord1xOES,
    &MultiTexCoord1xvOES,
    &MultiTexCoord2bOES,
    &MultiTexCoord2bvOES,
    &MultiTexCoord2d,
    &MultiTexCoord2dARB,
    &MultiTexCoord2dv,
    &MultiTexCoord2dvARB,
    &MultiTexCoord2f,
    &MultiTexCoord2fARB,
    &MultiTexCoord2fv,
    &MultiTexCoord2fvARB,
    &MultiTexCoord2hNV,
    &MultiTexCoord2hvNV,
    &MultiTexCoord2i,
    &MultiTexCoord2iARB,
    &MultiTexCoord2iv,
    &MultiTexCoord2ivARB,
    &MultiTexCoord2s,
    &MultiTexCoord2sARB,
    &MultiTexCoord2sv,
    &MultiTexCoord2svARB,
    &MultiTexCoord2xOES,
    &MultiTexCoord2xvOES,
    &MultiTexCoord3bOES,
    &MultiTexCoord3bvOES,
    &MultiTexCoord3d,
    &MultiTexCoord3dARB,
    &MultiTexCoord3dv,
    &MultiTexCoord3dvARB,
    &MultiTexCoord3f,
    &MultiTexCoord3fARB,
    &MultiTexCoord3fv,
    &MultiTexCoord3fvARB,
    &MultiTexCoord3hNV,
    &MultiTexCoord3hvNV,
    &MultiTexCoord3i,
    &MultiTexCoord3iARB,
    &MultiTexCoord3iv,
    &MultiTexCoord3ivARB,
    &MultiTexCoord3s,
    &MultiTexCoord3sARB,
    &MultiTexCoord3sv,
    &MultiTexCoord3svARB,
    &MultiTexCoord3xOES,
    &MultiTexCoord3xvOES,
    &MultiTexCoord4bOES,
    &MultiTexCoord4bvOES,
    &MultiTexCoord4d,
    &MultiTexCoord4dARB,
    &MultiTexCoord4dv,
    &MultiTexCoord4dvARB,
    &MultiTexCoord4f,
    &MultiTexCoord4fARB,
    &MultiTexCoord4fv,
    &MultiTexCoord4fvARB,
    &MultiTexCoord4hNV,
    &MultiTexCoord4hvNV,
    &MultiTexCoord4i,
    &MultiTexCoord4iARB,
    &MultiTexCoord4iv,
    &MultiTexCoord4ivARB,
    &MultiTexCoord4s,
    &MultiTexCoord4sARB,
    &MultiTexCoord4sv,
    &MultiTexCoord4svARB,
    &MultiTexCoord4xOES,
    &MultiTexCoord4xvOES,
    &MultiTexCoordP1ui,
    &MultiTexCoordP1uiv,
    &MultiTexCoordP2ui,
    &MultiTexCoordP2uiv,
    &MultiTexCoordP3ui,
    &MultiTexCoordP3uiv,
    &MultiTexCoordP4ui,
    &MultiTexCoordP4uiv,
    &MultiTexCoordPointerEXT,
    &MultiTexEnvfEXT,
    &MultiTexEnvfvEXT,
    &MultiTexEnviEXT,
    &MultiTexEnvivEXT,
    &MultiTexGendEXT,
    &MultiTexGendvEXT,
    &MultiTexGenfEXT,
    &MultiTexGenfvEXT,
    &MultiTexGeniEXT,
    &MultiTexGenivEXT,
    &MultiTexImage1DEXT,
    &MultiTexImage2DEXT,
    &MultiTexImage3DEXT,
    &MultiTexParameterIivEXT,
    &MultiTexParameterIuivEXT,
    &MultiTexParameterfEXT,
    &MultiTexParameterfvEXT,
    &MultiTexParameteriEXT,
    &MultiTexParameterivEXT,
    &MultiTexRenderbufferEXT,
    &MultiTexSubImage1DEXT,
    &MultiTexSubImage2DEXT,
    &MultiTexSubImage3DEXT,
    &NamedBufferData,
    &NamedBufferDataEXT,
    &NamedBufferPageCommitmentARB,
    &NamedBufferPageCommitmentEXT,
    &NamedBufferStorage,
    &NamedBufferStorageEXT,
    &NamedBufferSubData,
    &NamedBufferSubDataEXT,
    &NamedCopyBufferSubDataEXT,
    &NamedFramebufferDrawBuffer,
    &NamedFramebufferDrawBuffers,
    &NamedFramebufferParameteri,
    &NamedFramebufferParameteriEXT,
    &NamedFramebufferReadBuffer,
    &NamedFramebufferRenderbuffer,
    &NamedFramebufferRenderbufferEXT,
    &NamedFramebufferSampleLocationsfvARB,
    &NamedFramebufferSampleLocationsfvNV,
    &NamedFramebufferTexture,
    &NamedFramebufferTexture1DEXT,
    &NamedFramebufferTexture2DEXT,
    &NamedFramebufferTexture3DEXT,
    &NamedFramebufferTextureEXT,
    &NamedFramebufferTextureFaceEXT,
    &NamedFramebufferTextureLayer,
    &NamedFramebufferTextureLayerEXT,
    &NamedProgramLocalParameter4dEXT,
    &NamedProgramLocalParameter4dvEXT,
    &NamedProgramLocalParameter4fEXT,
    &NamedProgramLocalParameter4fvEXT,
    &NamedProgramLocalParameterI4iEXT,
    &NamedProgramLocalParameterI4ivEXT,
    &NamedProgramLocalParameterI4uiEXT,
    &NamedProgramLocalParameterI4uivEXT,
    &NamedProgramLocalParameters4fvEXT,
    &NamedProgramLocalParametersI4ivEXT,
    &NamedProgramLocalParametersI4uivEXT,
    &NamedProgramStringEXT,
    &NamedRenderbufferStorage,
    &NamedRenderbufferStorageEXT,
    &NamedRenderbufferStorageMultisample,
    &NamedRenderbufferStorageMultisampleCoverageEXT,
    &NamedRenderbufferStorageMultisampleEXT,
    &NamedStringARB,
    &NewList,
    &NewObjectBufferATI,
    &Normal3b,
    &Normal3bv,
    &Normal3d,
    &Normal3dv,
    &Normal3f,
    &Normal3fVertex3fSUN,
    &Normal3fVertex3fvSUN,
    &Normal3fv,
    &Normal3hNV,
    &Normal3hvNV,
    &Normal3i,
    &Normal3iv,
    &Normal3s,
    &Normal3sv,
    &Normal3xOES,
    &Normal3xvOES,
    &NormalFormatNV,
    &NormalP3ui,
    &NormalP3uiv,
    &NormalPointer,
    &NormalPointerEXT,
    &NormalPointerListIBM,
    &NormalPointervINTEL,
    &NormalStream3bATI,
    &NormalStream3bvATI,
    &NormalStream3dATI,
    &NormalStream3dvATI,
    &NormalStream3fATI,
    &NormalStream3fvATI,
    &NormalStream3iATI,
    &NormalStream3ivATI,
    &NormalStream3sATI,
    &NormalStream3svATI,
    &ObjectLabel,
    &ObjectPtrLabel,
    &ObjectPurgeableAPPLE,
    &ObjectUnpurgeableAPPLE,
    &Ortho,
    &OrthofOES,
    &OrthoxOES,
    &PNTrianglesfATI,
    &PNTrianglesiATI,
    &PassTexCoordATI,
    &PassThrough,
    &PassThroughxOES,
    &PatchParameterfv,
    &PatchParameteri,
    &PathColorGenNV,
    &PathCommandsNV,
    &PathCoordsNV,
    &PathCoverDepthFuncNV,
    &PathDashArrayNV,
    &PathFogGenNV,
    &PathGlyphIndexArrayNV,
    &PathGlyphIndexRangeNV,
    &PathGlyphRangeNV,
    &PathGlyphsNV,
    &PathMemoryGlyphIndexArrayNV,
    &PathParameterfNV,
    &PathParameterfvNV,
    &PathParameteriNV,
    &PathParameterivNV,
    &PathStencilDepthOffsetNV,
    &PathStencilFuncNV,
    &PathStringNV,
    &PathSubCommandsNV,
    &PathSubCoordsNV,
    &PathTexGenNV,
    &PauseTransformFeedback,
    &PauseTransformFeedbackNV,
    &PixelDataRangeNV,
    &PixelMapfv,
    &PixelMapuiv,
    &PixelMapusv,
    &PixelMapx,
    &PixelStoref,
    &PixelStorei,
    &PixelStorex,
    &PixelTexGenParameterfSGIS,
    &PixelTexGenParameterfvSGIS,
    &PixelTexGenParameteriSGIS,
    &PixelTexGenParameterivSGIS,
    &PixelTexGenSGIX,
    &PixelTransferf,
    &PixelTransferi,
    &PixelTransferxOES,
    &PixelTransformParameterfEXT,
    &PixelTransformParameterfvEXT,
    &PixelTransformParameteriEXT,
    &PixelTransformParameterivEXT,
    &PixelZoom,
    &PixelZoomxOES,
    &PointAlongPathNV,
    &PointParameterf,
    &PointParameterfARB,
    &PointParameterfEXT,
    &PointParameterfSGIS,
    &PointParameterfv,
    &PointParameterfvARB,
    &PointParameterfvEXT,
    &PointParameterfvSGIS,
    &PointParameteri,
    &PointParameteriNV,
    &PointParameteriv,
    &PointParameterivNV,
    &PointParameterxvOES,
    &PointSize,
    &PointSizexOES,
    &PollAsyncSGIX,
    &PollInstrumentsSGIX,
    &PolygonMode,
    &PolygonOffset,
    &PolygonOffsetClampEXT,
    &PolygonOffsetEXT,
    &PolygonOffsetxOES,
    &PolygonStipple,
    &PopAttrib,
    &PopClientAttrib,
    &PopDebugGroup,
    &PopGroupMarkerEXT,
    &PopMatrix,
    &PopName,
    &PresentFrameDualFillNV,
    &PresentFrameKeyedNV,
    &PrimitiveBoundingBoxARB,
    &PrimitiveRestartIndex,
    &PrimitiveRestartIndexNV,
    &PrimitiveRestartNV,
    &PrioritizeTextures,
    &PrioritizeTexturesEXT,
    &PrioritizeTexturesxOES,
    &ProgramBinary,
    &ProgramBufferParametersIivNV,
    &ProgramBufferParametersIuivNV,
    &ProgramBufferParametersfvNV,
    &ProgramEnvParameter4dARB,
    &ProgramEnvParameter4dvARB,
    &ProgramEnvParameter4fARB,
    &ProgramEnvParameter4fvARB,
    &ProgramEnvParameterI4iNV,
    &ProgramEnvParameterI4ivNV,
    &ProgramEnvParameterI4uiNV,
    &ProgramEnvParameterI4uivNV,
    &ProgramEnvParameters4fvEXT,
    &ProgramEnvParametersI4ivNV,
    &ProgramEnvParametersI4uivNV,
    &ProgramLocalParameter4dARB,
    &ProgramLocalParameter4dvARB,
    &ProgramLocalParameter4fARB,
    &ProgramLocalParameter4fvARB,
    &ProgramLocalParameterI4iNV,
    &ProgramLocalParameterI4ivNV,
    &ProgramLocalParameterI4uiNV,
    &ProgramLocalParameterI4uivNV,
    &ProgramLocalParameters4fvEXT,
    &ProgramLocalParametersI4ivNV,
    &ProgramLocalParametersI4uivNV,
    &ProgramNamedParameter4dNV,
    &ProgramNamedParameter4dvNV,
    &ProgramNamedParameter4fNV,
    &ProgramNamedParameter4fvNV,
    &ProgramParameter4dNV,
    &ProgramParameter4dvNV,
    &ProgramParameter4fNV,
    &ProgramParameter4fvNV,
    &ProgramParameteri,
    &ProgramParameteriARB,
    &ProgramParameteriEXT,
    &ProgramParameters4dvNV,
    &ProgramParameters4fvNV,
    &ProgramPathFragmentInputGenNV,
    &ProgramStringARB,
    &ProgramSubroutineParametersuivNV,
    &ProgramUniform1d,
    &ProgramUniform1dEXT,
    &ProgramUniform1dv,
    &ProgramUniform1dvEXT,
    &ProgramUniform1f,
    &ProgramUniform1fEXT,
    &ProgramUniform1fv,
    &ProgramUniform1fvEXT,
    &ProgramUniform1i,
    &ProgramUniform1i64ARB,
    &ProgramUniform1i64NV,
    &ProgramUniform1i64vARB,
    &ProgramUniform1i64vNV,
    &ProgramUniform1iEXT,
    &ProgramUniform1iv,
    &ProgramUniform1ivEXT,
    &ProgramUniform1ui,
    &ProgramUniform1ui64ARB,
    &ProgramUniform1ui64NV,
    &ProgramUniform1ui64vARB,
    &ProgramUniform1ui64vNV,
    &ProgramUniform1uiEXT,
    &ProgramUniform1uiv,
    &ProgramUniform1uivEXT,
    &ProgramUniform2d,
    &ProgramUniform2dEXT,
    &ProgramUniform2dv,
    &ProgramUniform2dvEXT,
    &ProgramUniform2f,
    &ProgramUniform2fEXT,
    &ProgramUniform2fv,
    &ProgramUniform2fvEXT,
    &ProgramUniform2i,
    &ProgramUniform2i64ARB,
    &ProgramUniform2i64NV,
    &ProgramUniform2i64vARB,
    &ProgramUniform2i64vNV,
    &ProgramUniform2iEXT,
    &ProgramUniform2iv,
    &ProgramUniform2ivEXT,
    &ProgramUniform2ui,
    &ProgramUniform2ui64ARB,
    &ProgramUniform2ui64NV,
    &ProgramUniform2ui64vARB,
    &ProgramUniform2ui64vNV,
    &ProgramUniform2uiEXT,
    &ProgramUniform2uiv,
    &ProgramUniform2uivEXT,
    &ProgramUniform3d,
    &ProgramUniform3dEXT,
    &ProgramUniform3dv,
    &ProgramUniform3dvEXT,
    &ProgramUniform3f,
    &ProgramUniform3fEXT,
    &ProgramUniform3fv,
    &ProgramUniform3fvEXT,
    &ProgramUniform3i,
    &ProgramUniform3i64ARB,
    &ProgramUniform3i64NV,
    &ProgramUniform3i64vARB,
    &ProgramUniform3i64vNV,
    &ProgramUniform3iEXT,
    &ProgramUniform3iv,
    &ProgramUniform3ivEXT,
    &ProgramUniform3ui,
    &ProgramUniform3ui64ARB,
    &ProgramUniform3ui64NV,
    &ProgramUniform3ui64vARB,
    &ProgramUniform3ui64vNV,
    &ProgramUniform3uiEXT,
    &ProgramUniform3uiv,
    &ProgramUniform3uivEXT,
    &ProgramUniform4d,
    &ProgramUniform4dEXT,
    &ProgramUniform4dv,
    &ProgramUniform4dvEXT,
    &ProgramUniform4f,
    &ProgramUniform4fEXT,
    &ProgramUniform4fv,
    &ProgramUniform4fvEXT,
    &ProgramUniform4i,
    &ProgramUniform4i64ARB,
    &ProgramUniform4i64NV,
    &ProgramUniform4i64vARB,
    &ProgramUniform4i64vNV,
    &ProgramUniform4iEXT,
    &ProgramUniform4iv,
    &ProgramUniform4ivEXT,
    &ProgramUniform4ui,
    &ProgramUniform4ui64ARB,
    &ProgramUniform4ui64NV,
    &ProgramUniform4ui64vARB,
    &ProgramUniform4ui64vNV,
    &ProgramUniform4uiEXT,
    &ProgramUniform4uiv,
    &ProgramUniform4uivEXT,
    &ProgramUniformHandleui64ARB,
    &ProgramUniformHandleui64NV,
    &ProgramUniformHandleui64vARB,
    &ProgramUniformHandleui64vNV,
    &ProgramUniformMatrix2dv,
    &ProgramUniformMatrix2dvEXT,
    &ProgramUniformMatrix2fv,
    &ProgramUniformMatrix2fvEXT,
    &ProgramUniformMatrix2x3dv,
    &ProgramUniformMatrix2x3dvEXT,
    &ProgramUniformMatrix2x3fv,
    &ProgramUniformMatrix2x3fvEXT,
    &ProgramUniformMatrix2x4dv,
    &ProgramUniformMatrix2x4dvEXT,
    &ProgramUniformMatrix2x4fv,
    &ProgramUniformMatrix2x4fvEXT,
    &ProgramUniformMatrix3dv,
    &ProgramUniformMatrix3dvEXT,
    &ProgramUniformMatrix3fv,
    &ProgramUniformMatrix3fvEXT,
    &ProgramUniformMatrix3x2dv,
    &ProgramUniformMatrix3x2dvEXT,
    &ProgramUniformMatrix3x2fv,
    &ProgramUniformMatrix3x2fvEXT,
    &ProgramUniformMatrix3x4dv,
    &ProgramUniformMatrix3x4dvEXT,
    &ProgramUniformMatrix3x4fv,
    &ProgramUniformMatrix3x4fvEXT,
    &ProgramUniformMatrix4dv,
    &ProgramUniformMatrix4dvEXT,
    &ProgramUniformMatrix4fv,
    &ProgramUniformMatrix4fvEXT,
    &ProgramUniformMatrix4x2dv,
    &ProgramUniformMatrix4x2dvEXT,
    &ProgramUniformMatrix4x2fv,
    &ProgramUniformMatrix4x2fvEXT,
    &ProgramUniformMatrix4x3dv,
    &ProgramUniformMatrix4x3dvEXT,
    &ProgramUniformMatrix4x3fv,
    &ProgramUniformMatrix4x3fvEXT,
    &ProgramUniformui64NV,
    &ProgramUniformui64vNV,
    &ProgramVertexLimitNV,
    &ProvokingVertex,
    &ProvokingVertexEXT,
    &PushAttrib,
    &PushClientAttrib,
    &PushClientAttribDefaultEXT,
    &PushDebugGroup,
    &PushGroupMarkerEXT,
    &PushMatrix,
    &PushName,
    &QueryCounter,
    &QueryMatrixxOES,
    &QueryObjectParameteruiAMD,
    &RasterPos2d,
    &RasterPos2dv,
    &RasterPos2f,
    &RasterPos2fv,
    &RasterPos2i,
    &RasterPos2iv,
    &RasterPos2s,
    &RasterPos2sv,
    &RasterPos2xOES,
    &RasterPos2xvOES,
    &RasterPos3d,
    &RasterPos3dv,
    &RasterPos3f,
    &RasterPos3fv,
    &RasterPos3i,
    &RasterPos3iv,
    &RasterPos3s,
    &RasterPos3sv,
    &RasterPos3xOES,
    &RasterPos3xvOES,
    &RasterPos4d,
    &RasterPos4dv,
    &RasterPos4f,
    &RasterPos4fv,
    &RasterPos4i,
    &RasterPos4iv,
    &RasterPos4s,
    &RasterPos4sv,
    &RasterPos4xOES,
    &RasterPos4xvOES,
    &RasterSamplesEXT,
    &ReadBuffer,
    &ReadInstrumentsSGIX,
    &ReadPixels,
    &ReadnPixels,
    &ReadnPixelsARB,
    &Rectd,
    &Rectdv,
    &Rectf,
    &Rectfv,
    &Recti,
    &Rectiv,
    &Rects,
    &Rectsv,
    &RectxOES,
    &RectxvOES,
    &ReferencePlaneSGIX,
    &ReleaseShaderCompiler,
    &RenderMode,
    &RenderbufferStorage,
    &RenderbufferStorageEXT,
    &RenderbufferStorageMultisample,
    &RenderbufferStorageMultisampleCoverageNV,
    &RenderbufferStorageMultisampleEXT,
    &ReplacementCodePointerSUN,
    &ReplacementCodeubSUN,
    &ReplacementCodeubvSUN,
    &ReplacementCodeuiColor3fVertex3fSUN,
    &ReplacementCodeuiColor3fVertex3fvSUN,
    &ReplacementCodeuiColor4fNormal3fVertex3fSUN,
    &ReplacementCodeuiColor4fNormal3fVertex3fvSUN,
    &ReplacementCodeuiColor4ubVertex3fSUN,
    &ReplacementCodeuiColor4ubVertex3fvSUN,
    &ReplacementCodeuiNormal3fVertex3fSUN,
    &ReplacementCodeuiNormal3fVertex3fvSUN,
    &ReplacementCodeuiSUN,
    &ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN,
    &ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN,
    &ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN,
    &ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN,
    &ReplacementCodeuiTexCoord2fVertex3fSUN,
    &ReplacementCodeuiTexCoord2fVertex3fvSUN,
    &ReplacementCodeuiVertex3fSUN,
    &ReplacementCodeuiVertex3fvSUN,
    &ReplacementCodeuivSUN,
    &ReplacementCodeusSUN,
    &ReplacementCodeusvSUN,
    &RequestResidentProgramsNV,
    &ResetHistogram,
    &ResetHistogramEXT,
    &ResetMinmax,
    &ResetMinmaxEXT,
    &ResizeBuffersMESA,
    &ResolveDepthValuesNV,
    &ResumeTransformFeedback,
    &ResumeTransformFeedbackNV,
    &Rotated,
    &Rotatef,
    &RotatexOES,
    &SampleCoverage,
    &SampleCoverageARB,
    &SampleMapATI,
    &SampleMaskEXT,
    &SampleMaskIndexedNV,
    &SampleMaskSGIS,
    &SampleMaski,
    &SamplePatternEXT,
    &SamplePatternSGIS,
    &SamplerParameterIiv,
    &SamplerParameterIuiv,
    &SamplerParameterf,
    &SamplerParameterfv,
    &SamplerParameteri,
    &SamplerParameteriv,
    &Scaled,
    &Scalef,
    &ScalexOES,
    &Scissor,
    &ScissorArrayv,
    &ScissorIndexed,
    &ScissorIndexedv,
    &SecondaryColor3b,
    &SecondaryColor3bEXT,
    &SecondaryColor3bv,
    &SecondaryColor3bvEXT,
    &SecondaryColor3d,
    &SecondaryColor3dEXT,
    &SecondaryColor3dv,
    &SecondaryColor3dvEXT,
    &SecondaryColor3f,
    &SecondaryColor3fEXT,
    &SecondaryColor3fv,
    &SecondaryColor3fvEXT,
    &SecondaryColor3hNV,
    &SecondaryColor3hvNV,
    &SecondaryColor3i,
    &SecondaryColor3iEXT,
    &SecondaryColor3iv,
    &SecondaryColor3ivEXT,
    &SecondaryColor3s,
    &SecondaryColor3sEXT,
    &SecondaryColor3sv,
    &SecondaryColor3svEXT,
    &SecondaryColor3ub,
    &SecondaryColor3ubEXT,
    &SecondaryColor3ubv,
    &SecondaryColor3ubvEXT,
    &SecondaryColor3ui,
    &SecondaryColor3uiEXT,
    &SecondaryColor3uiv,
    &SecondaryColor3uivEXT,
    &SecondaryColor3us,
    &SecondaryColor3usEXT,
    &SecondaryColor3usv,
    &SecondaryColor3usvEXT,
    &SecondaryColorFormatNV,
    &SecondaryColorP3ui,
    &SecondaryColorP3uiv,
    &SecondaryColorPointer,
    &SecondaryColorPointerEXT,
    &SecondaryColorPointerListIBM,
    &SelectBuffer,
    &SelectPerfMonitorCountersAMD,
    &SeparableFilter2D,
    &SeparableFilter2DEXT,
    &SetFenceAPPLE,
    &SetFenceNV,
    &SetFragmentShaderConstantATI,
    &SetInvariantEXT,
    &SetLocalConstantEXT,
    &SetMultisamplefvAMD,
    &ShadeModel,
    &ShaderBinary,
    &ShaderOp1EXT,
    &ShaderOp2EXT,
    &ShaderOp3EXT,
    &ShaderSource,
    &ShaderSourceARB,
    &ShaderStorageBlockBinding,
    &SharpenTexFuncSGIS,
    &SpriteParameterfSGIX,
    &SpriteParameterfvSGIX,
    &SpriteParameteriSGIX,
    &SpriteParameterivSGIX,
    &StartInstrumentsSGIX,
    &StateCaptureNV,
    &StencilClearTagEXT,
    &StencilFillPathInstancedNV,
    &StencilFillPathNV,
    &StencilFunc,
    &StencilFuncSeparate,
    &StencilFuncSeparateATI,
    &StencilMask,
    &StencilMaskSeparate,
    &StencilOp,
    &StencilOpSeparate,
    &StencilOpSeparateATI,
    &StencilOpValueAMD,
    &StencilStrokePathInstancedNV,
    &StencilStrokePathNV,
    &StencilThenCoverFillPathInstancedNV,
    &StencilThenCoverFillPathNV,
    &StencilThenCoverStrokePathInstancedNV,
    &StencilThenCoverStrokePathNV,
    &StopInstrumentsSGIX,
    &StringMarkerGREMEDY,
    &SubpixelPrecisionBiasNV,
    &SwizzleEXT,
    &SyncTextureINTEL,
    &TagSampleBufferSGIX,
    &Tangent3bEXT,
    &Tangent3bvEXT,
    &Tangent3dEXT,
    &Tangent3dvEXT,
    &Tangent3fEXT,
    &Tangent3fvEXT,
    &Tangent3iEXT,
    &Tangent3ivEXT,
    &Tangent3sEXT,
    &Tangent3svEXT,
    &TangentPointerEXT,
    &TbufferMask3DFX,
    &TessellationFactorAMD,
    &TessellationModeAMD,
    &TestFenceAPPLE,
    &TestFenceNV,
    &TestObjectAPPLE,
    &TexBuffer,
    &TexBufferARB,
    &TexBufferEXT,
    &TexBufferRange,
    &TexBumpParameterfvATI,
    &TexBumpParameterivATI,
    &TexCoord1bOES,
    &TexCoord1bvOES,
    &TexCoord1d,
    &TexCoord1dv,
    &TexCoord1f,
    &TexCoord1fv,
    &TexCoord1hNV,
    &TexCoord1hvNV,
    &TexCoord1i,
    &TexCoord1iv,
    &TexCoord1s,
    &TexCoord1sv,
    &TexCoord1xOES,
    &TexCoord1xvOES,
    &TexCoord2bOES,
    &TexCoord2bvOES,
    &TexCoord2d,
    &TexCoord2dv,
    &TexCoord2f,
    &TexCoord2fColor3fVertex3fSUN,
    &TexCoord2fColor3fVertex3fvSUN,
    &TexCoord2fColor4fNormal3fVertex3fSUN,
    &TexCoord2fColor4fNormal3fVertex3fvSUN,
    &TexCoord2fColor4ubVertex3fSUN,
    &TexCoord2fColor4ubVertex3fvSUN,
    &TexCoord2fNormal3fVertex3fSUN,
    &TexCoord2fNormal3fVertex3fvSUN,
    &TexCoord2fVertex3fSUN,
    &TexCoord2fVertex3fvSUN,
    &TexCoord2fv,
    &TexCoord2hNV,
    &TexCoord2hvNV,
    &TexCoord2i,
    &TexCoord2iv,
    &TexCoord2s,
    &TexCoord2sv,
    &TexCoord2xOES,
    &TexCoord2xvOES,
    &TexCoord3bOES,
    &TexCoord3bvOES,
    &TexCoord3d,
    &TexCoord3dv,
    &TexCoord3f,
    &TexCoord3fv,
    &TexCoord3hNV,
    &TexCoord3hvNV,
    &TexCoord3i,
    &TexCoord3iv,
    &TexCoord3s,
    &TexCoord3sv,
    &TexCoord3xOES,
    &TexCoord3xvOES,
    &TexCoord4bOES,
    &TexCoord4bvOES,
    &TexCoord4d,
    &TexCoord4dv,
    &TexCoord4f,
    &TexCoord4fColor4fNormal3fVertex4fSUN,
    &TexCoord4fColor4fNormal3fVertex4fvSUN,
    &TexCoord4fVertex4fSUN,
    &TexCoord4fVertex4fvSUN,
    &TexCoord4fv,
    &TexCoord4hNV,
    &TexCoord4hvNV,
    &TexCoord4i,
    &TexCoord4iv,
    &TexCoord4s,
    &TexCoord4sv,
    &TexCoord4xOES,
    &TexCoord4xvOES,
    &TexCoordFormatNV,
    &TexCoordP1ui,
    &TexCoordP1uiv,
    &TexCoordP2ui,
    &TexCoordP2uiv,
    &TexCoordP3ui,
    &TexCoordP3uiv,
    &TexCoordP4ui,
    &TexCoordP4uiv,
    &TexCoordPointer,
    &TexCoordPointerEXT,
    &TexCoordPointerListIBM,
    &TexCoordPointervINTEL,
    &TexEnvf,
    &TexEnvfv,
    &TexEnvi,
    &TexEnviv,
    &TexEnvxOES,
    &TexEnvxvOES,
    &TexFilterFuncSGIS,
    &TexGend,
    &TexGendv,
    &TexGenf,
    &TexGenfv,
    &TexGeni,
    &TexGeniv,
    &TexGenxOES,
    &TexGenxvOES,
    &TexImage1D,
    &TexImage2D,
    &TexImage2DMultisample,
    &TexImage2DMultisampleCoverageNV,
    &TexImage3D,
    &TexImage3DEXT,
    &TexImage3DMultisample,
    &TexImage3DMultisampleCoverageNV,
    &TexImage4DSGIS,
    &TexPageCommitmentARB,
    &TexParameterIiv,
    &TexParameterIivEXT,
    &TexParameterIuiv,
    &TexParameterIuivEXT,
    &TexParameterf,
    &TexParameterfv,
    &TexParameteri,
    &TexParameteriv,
    &TexParameterxOES,
    &TexParameterxvOES,
    &TexRenderbufferNV,
    &TexStorage1D,
    &TexStorage2D,
    &TexStorage2DMultisample,
    &TexStorage3D,
    &TexStorage3DMultisample,
    &TexStorageSparseAMD,
    &TexSubImage1D,
    &TexSubImage1DEXT,
    &TexSubImage2D,
    &TexSubImage2DEXT,
    &TexSubImage3D,
    &TexSubImage3DEXT,
    &TexSubImage4DSGIS,
    &TextureBarrier,
    &TextureBarrierNV,
    &TextureBuffer,
    &TextureBufferEXT,
    &TextureBufferRange,
    &TextureBufferRangeEXT,
    &TextureColorMaskSGIS,
    &TextureImage1DEXT,
    &TextureImage2DEXT,
    &TextureImage2DMultisampleCoverageNV,
    &TextureImage2DMultisampleNV,
    &TextureImage3DEXT,
    &TextureImage3DMultisampleCoverageNV,
    &TextureImage3DMultisampleNV,
    &TextureLightEXT,
    &TextureMaterialEXT,
    &TextureNormalEXT,
    &TexturePageCommitmentEXT,
    &TextureParameterIiv,
    &TextureParameterIivEXT,
    &TextureParameterIuiv,
    &TextureParameterIuivEXT,
    &TextureParameterf,
    &TextureParameterfEXT,
    &TextureParameterfv,
    &TextureParameterfvEXT,
    &TextureParameteri,
    &TextureParameteriEXT,
    &TextureParameteriv,
    &TextureParameterivEXT,
    &TextureRangeAPPLE,
    &TextureRenderbufferEXT,
    &TextureStorage1D,
    &TextureStorage1DEXT,
    &TextureStorage2D,
    &TextureStorage2DEXT,
    &TextureStorage2DMultisample,
    &TextureStorage2DMultisampleEXT,
    &TextureStorage3D,
    &TextureStorage3DEXT,
    &TextureStorage3DMultisample,
    &TextureStorage3DMultisampleEXT,
    &TextureStorageSparseAMD,
    &TextureSubImage1D,
    &TextureSubImage1DEXT,
    &TextureSubImage2D,
    &TextureSubImage2DEXT,
    &TextureSubImage3D,
    &TextureSubImage3DEXT,
    &TextureView,
    &TrackMatrixNV,
    &TransformFeedbackAttribsNV,
    &TransformFeedbackBufferBase,
    &TransformFeedbackBufferRange,
    &TransformFeedbackStreamAttribsNV,
    &TransformFeedbackVaryings,
    &TransformFeedbackVaryingsEXT,
    &TransformFeedbackVaryingsNV,
    &TransformPathNV,
    &Translated,
    &Translatef,
    &TranslatexOES,
    &Uniform1d,
    &Uniform1dv,
    &Uniform1f,
    &Uniform1fARB,
    &Uniform1fv,
    &Uniform1fvARB,
    &Uniform1i,
    &Uniform1i64ARB,
    &Uniform1i64NV,
    &Uniform1i64vARB,
    &Uniform1i64vNV,
    &Uniform1iARB,
    &Uniform1iv,
    &Uniform1ivARB,
    &Uniform1ui,
    &Uniform1ui64ARB,
    &Uniform1ui64NV,
    &Uniform1ui64vARB,
    &Uniform1ui64vNV,
    &Uniform1uiEXT,
    &Uniform1uiv,
    &Uniform1uivEXT,
    &Uniform2d,
    &Uniform2dv,
    &Uniform2f,
    &Uniform2fARB,
    &Uniform2fv,
    &Uniform2fvARB,
    &Uniform2i,
    &Uniform2i64ARB,
    &Uniform2i64NV,
    &Uniform2i64vARB,
    &Uniform2i64vNV,
    &Uniform2iARB,
    &Uniform2iv,
    &Uniform2ivARB,
    &Uniform2ui,
    &Uniform2ui64ARB,
    &Uniform2ui64NV,
    &Uniform2ui64vARB,
    &Uniform2ui64vNV,
    &Uniform2uiEXT,
    &Uniform2uiv,
    &Uniform2uivEXT,
    &Uniform3d,
    &Uniform3dv,
    &Uniform3f,
    &Uniform3fARB,
    &Uniform3fv,
    &Uniform3fvARB,
    &Uniform3i,
    &Uniform3i64ARB,
    &Uniform3i64NV,
    &Uniform3i64vARB,
    &Uniform3i64vNV,
    &Uniform3iARB,
    &Uniform3iv,
    &Uniform3ivARB,
    &Uniform3ui,
    &Uniform3ui64ARB,
    &Uniform3ui64NV,
    &Uniform3ui64vARB,
    &Uniform3ui64vNV,
    &Uniform3uiEXT,
    &Uniform3uiv,
    &Uniform3uivEXT,
    &Uniform4d,
    &Uniform4dv,
    &Uniform4f,
    &Uniform4fARB,
    &Uniform4fv,
    &Uniform4fvARB,
    &Uniform4i,
    &Uniform4i64ARB,
    &Uniform4i64NV,
    &Uniform4i64vARB,
    &Uniform4i64vNV,
    &Uniform4iARB,
    &Uniform4iv,
    &Uniform4ivARB,
    &Uniform4ui,
    &Uniform4ui64ARB,
    &Uniform4ui64NV,
    &Uniform4ui64vARB,
    &Uniform4ui64vNV,
    &Uniform4uiEXT,
    &Uniform4uiv,
    &Uniform4uivEXT,
    &UniformBlockBinding,
    &UniformBufferEXT,
    &UniformHandleui64ARB,
    &UniformHandleui64NV,
    &UniformHandleui64vARB,
    &UniformHandleui64vNV,
    &UniformMatrix2dv,
    &UniformMatrix2fv,
    &UniformMatrix2fvARB,
    &UniformMatrix2x3dv,
    &UniformMatrix2x3fv,
    &UniformMatrix2x4dv,
    &UniformMatrix2x4fv,
    &UniformMatrix3dv,
    &UniformMatrix3fv,
    &UniformMatrix3fvARB,
    &UniformMatrix3x2dv,
    &UniformMatrix3x2fv,
    &UniformMatrix3x4dv,
    &UniformMatrix3x4fv,
    &UniformMatrix4dv,
    &UniformMatrix4fv,
    &UniformMatrix4fvARB,
    &UniformMatrix4x2dv,
    &UniformMatrix4x2fv,
    &UniformMatrix4x3dv,
    &UniformMatrix4x3fv,
    &UniformSubroutinesuiv,
    &Uniformui64NV,
    &Uniformui64vNV,
    &UnlockArraysEXT,
    &UnmapBuffer,
    &UnmapBufferARB,
    &UnmapNamedBuffer,
    &UnmapNamedBufferEXT,
    &UnmapObjectBufferATI,
    &UnmapTexture2DINTEL,
    &UpdateObjectBufferATI,
    &UseProgram,
    &UseProgramObjectARB,
    &UseProgramStages,
    &UseShaderProgramEXT,
    &VDPAUFiniNV,
    &VDPAUGetSurfaceivNV,
    &VDPAUInitNV,
    &VDPAUIsSurfaceNV,
    &VDPAUMapSurfacesNV,
    &VDPAURegisterOutputSurfaceNV,
    &VDPAURegisterVideoSurfaceNV,
    &VDPAUSurfaceAccessNV,
    &VDPAUUnmapSurfacesNV,
    &VDPAUUnregisterSurfaceNV,
    &ValidateProgram,
    &ValidateProgramARB,
    &ValidateProgramPipeline,
    &VariantArrayObjectATI,
    &VariantPointerEXT,
    &VariantbvEXT,
    &VariantdvEXT,
    &VariantfvEXT,
    &VariantivEXT,
    &VariantsvEXT,
    &VariantubvEXT,
    &VariantuivEXT,
    &VariantusvEXT,
    &Vertex2bOES,
    &Vertex2bvOES,
    &Vertex2d,
    &Vertex2dv,
    &Vertex2f,
    &Vertex2fv,
    &Vertex2hNV,
    &Vertex2hvNV,
    &Vertex2i,
    &Vertex2iv,
    &Vertex2s,
    &Vertex2sv,
    &Vertex2xOES,
    &Vertex2xvOES,
    &Vertex3bOES,
    &Vertex3bvOES,
    &Vertex3d,
    &Vertex3dv,
    &Vertex3f,
    &Vertex3fv,
    &Vertex3hNV,
    &Vertex3hvNV,
    &Vertex3i,
    &Vertex3iv,
    &Vertex3s,
    &Vertex3sv,
    &Vertex3xOES,
    &Vertex3xvOES,
    &Vertex4bOES,
    &Vertex4bvOES,
    &Vertex4d,
    &Vertex4dv,
    &Vertex4f,
    &Vertex4fv,
    &Vertex4hNV,
    &Vertex4hvNV,
    &Vertex4i,
    &Vertex4iv,
    &Vertex4s,
    &Vertex4sv,
    &Vertex4xOES,
    &Vertex4xvOES,
    &VertexArrayAttribBinding,
    &VertexArrayAttribFormat,
    &VertexArrayAttribIFormat,
    &VertexArrayAttribLFormat,
    &VertexArrayBindVertexBufferEXT,
    &VertexArrayBindingDivisor,
    &VertexArrayColorOffsetEXT,
    &VertexArrayEdgeFlagOffsetEXT,
    &VertexArrayElementBuffer,
    &VertexArrayFogCoordOffsetEXT,
    &VertexArrayIndexOffsetEXT,
    &VertexArrayMultiTexCoordOffsetEXT,
    &VertexArrayNormalOffsetEXT,
    &VertexArrayParameteriAPPLE,
    &VertexArrayRangeAPPLE,
    &VertexArrayRangeNV,
    &VertexArraySecondaryColorOffsetEXT,
    &VertexArrayTexCoordOffsetEXT,
    &VertexArrayVertexAttribBindingEXT,
    &VertexArrayVertexAttribDivisorEXT,
    &VertexArrayVertexAttribFormatEXT,
    &VertexArrayVertexAttribIFormatEXT,
    &VertexArrayVertexAttribIOffsetEXT,
    &VertexArrayVertexAttribLFormatEXT,
    &VertexArrayVertexAttribLOffsetEXT,
    &VertexArrayVertexAttribOffsetEXT,
    &VertexArrayVertexBindingDivisorEXT,
    &VertexArrayVertexBuffer,
    &VertexArrayVertexBuffers,
    &VertexArrayVertexOffsetEXT,
    &VertexAttrib1d,
    &VertexAttrib1dARB,
    &VertexAttrib1dNV,
    &VertexAttrib1dv,
    &VertexAttrib1dvARB,
    &VertexAttrib1dvNV,
    &VertexAttrib1f,
    &VertexAttrib1fARB,
    &VertexAttrib1fNV,
    &VertexAttrib1fv,
    &VertexAttrib1fvARB,
    &VertexAttrib1fvNV,
    &VertexAttrib1hNV,
    &VertexAttrib1hvNV,
    &VertexAttrib1s,
    &VertexAttrib1sARB,
    &VertexAttrib1sNV,
    &VertexAttrib1sv,
    &VertexAttrib1svARB,
    &VertexAttrib1svNV,
    &VertexAttrib2d,
    &VertexAttrib2dARB,
    &VertexAttrib2dNV,
    &VertexAttrib2dv,
    &VertexAttrib2dvARB,
    &VertexAttrib2dvNV,
    &VertexAttrib2f,
    &VertexAttrib2fARB,
    &VertexAttrib2fNV,
    &VertexAttrib2fv,
    &VertexAttrib2fvARB,
    &VertexAttrib2fvNV,
    &VertexAttrib2hNV,
    &VertexAttrib2hvNV,
    &VertexAttrib2s,
    &VertexAttrib2sARB,
    &VertexAttrib2sNV,
    &VertexAttrib2sv,
    &VertexAttrib2svARB,
    &VertexAttrib2svNV,
    &VertexAttrib3d,
    &VertexAttrib3dARB,
    &VertexAttrib3dNV,
    &VertexAttrib3dv,
    &VertexAttrib3dvARB,
    &VertexAttrib3dvNV,
    &VertexAttrib3f,
    &VertexAttrib3fARB,
    &VertexAttrib3fNV,
    &VertexAttrib3fv,
    &VertexAttrib3fvARB,
    &VertexAttrib3fvNV,
    &VertexAttrib3hNV,
    &VertexAttrib3hvNV,
    &VertexAttrib3s,
    &VertexAttrib3sARB,
    &VertexAttrib3sNV,
    &VertexAttrib3sv,
    &VertexAttrib3svARB,
    &VertexAttrib3svNV,
    &VertexAttrib4Nbv,
    &VertexAttrib4NbvARB,
    &VertexAttrib4Niv,
    &VertexAttrib4NivARB,
    &VertexAttrib4Nsv,
    &VertexAttrib4NsvARB,
    &VertexAttrib4Nub,
    &VertexAttrib4NubARB,
    &VertexAttrib4Nubv,
    &VertexAttrib4NubvARB,
    &VertexAttrib4Nuiv,
    &VertexAttrib4NuivARB,
    &VertexAttrib4Nusv,
    &VertexAttrib4NusvARB,
    &VertexAttrib4bv,
    &VertexAttrib4bvARB,
    &VertexAttrib4d,
    &VertexAttrib4dARB,
    &VertexAttrib4dNV,
    &VertexAttrib4dv,
    &VertexAttrib4dvARB,
    &VertexAttrib4dvNV,
    &VertexAttrib4f,
    &VertexAttrib4fARB,
    &VertexAttrib4fNV,
    &VertexAttrib4fv,
    &VertexAttrib4fvARB,
    &VertexAttrib4fvNV,
    &VertexAttrib4hNV,
    &VertexAttrib4hvNV,
    &VertexAttrib4iv,
    &VertexAttrib4ivARB,
    &VertexAttrib4s,
    &VertexAttrib4sARB,
    &VertexAttrib4sNV,
    &VertexAttrib4sv,
    &VertexAttrib4svARB,
    &VertexAttrib4svNV,
    &VertexAttrib4ubNV,
    &VertexAttrib4ubv,
    &VertexAttrib4ubvARB,
    &VertexAttrib4ubvNV,
    &VertexAttrib4uiv,
    &VertexAttrib4uivARB,
    &VertexAttrib4usv,
    &VertexAttrib4usvARB,
    &VertexAttribArrayObjectATI,
    &VertexAttribBinding,
    &VertexAttribDivisor,
    &VertexAttribDivisorARB,
    &VertexAttribFormat,
    &VertexAttribFormatNV,
    &VertexAttribI1i,
    &VertexAttribI1iEXT,
    &VertexAttribI1iv,
    &VertexAttribI1ivEXT,
    &VertexAttribI1ui,
    &VertexAttribI1uiEXT,
    &VertexAttribI1uiv,
    &VertexAttribI1uivEXT,
    &VertexAttribI2i,
    &VertexAttribI2iEXT,
    &VertexAttribI2iv,
    &VertexAttribI2ivEXT,
    &VertexAttribI2ui,
    &VertexAttribI2uiEXT,
    &VertexAttribI2uiv,
    &VertexAttribI2uivEXT,
    &VertexAttribI3i,
    &VertexAttribI3iEXT,
    &VertexAttribI3iv,
    &VertexAttribI3ivEXT,
    &VertexAttribI3ui,
    &VertexAttribI3uiEXT,
    &VertexAttribI3uiv,
    &VertexAttribI3uivEXT,
    &VertexAttribI4bv,
    &VertexAttribI4bvEXT,
    &VertexAttribI4i,
    &VertexAttribI4iEXT,
    &VertexAttribI4iv,
    &VertexAttribI4ivEXT,
    &VertexAttribI4sv,
    &VertexAttribI4svEXT,
    &VertexAttribI4ubv,
    &VertexAttribI4ubvEXT,
    &VertexAttribI4ui,
    &VertexAttribI4uiEXT,
    &VertexAttribI4uiv,
    &VertexAttribI4uivEXT,
    &VertexAttribI4usv,
    &VertexAttribI4usvEXT,
    &VertexAttribIFormat,
    &VertexAttribIFormatNV,
    &VertexAttribIPointer,
    &VertexAttribIPointerEXT,
    &VertexAttribL1d,
    &VertexAttribL1dEXT,
    &VertexAttribL1dv,
    &VertexAttribL1dvEXT,
    &VertexAttribL1i64NV,
    &VertexAttribL1i64vNV,
    &VertexAttribL1ui64ARB,
    &VertexAttribL1ui64NV,
    &VertexAttribL1ui64vARB,
    &VertexAttribL1ui64vNV,
    &VertexAttribL2d,
    &VertexAttribL2dEXT,
    &VertexAttribL2dv,
    &VertexAttribL2dvEXT,
    &VertexAttribL2i64NV,
    &VertexAttribL2i64vNV,
    &VertexAttribL2ui64NV,
    &VertexAttribL2ui64vNV,
    &VertexAttribL3d,
    &VertexAttribL3dEXT,
    &VertexAttribL3dv,
    &VertexAttribL3dvEXT,
    &VertexAttribL3i64NV,
    &VertexAttribL3i64vNV,
    &VertexAttribL3ui64NV,
    &VertexAttribL3ui64vNV,
    &VertexAttribL4d,
    &VertexAttribL4dEXT,
    &VertexAttribL4dv,
    &VertexAttribL4dvEXT,
    &VertexAttribL4i64NV,
    &VertexAttribL4i64vNV,
    &VertexAttribL4ui64NV,
    &VertexAttribL4ui64vNV,
    &VertexAttribLFormat,
    &VertexAttribLFormatNV,
    &VertexAttribLPointer,
    &VertexAttribLPointerEXT,
    &VertexAttribP1ui,
    &VertexAttribP1uiv,
    &VertexAttribP2ui,
    &VertexAttribP2uiv,
    &VertexAttribP3ui,
    &VertexAttribP3uiv,
    &VertexAttribP4ui,
    &VertexAttribP4uiv,
    &VertexAttribParameteriAMD,
    &VertexAttribPointer,
    &VertexAttribPointerARB,
    &VertexAttribPointerNV,
    &VertexAttribs1dvNV,
    &VertexAttribs1fvNV,
    &VertexAttribs1hvNV,
    &VertexAttribs1svNV,
    &VertexAttribs2dvNV,
    &VertexAttribs2fvNV,
    &VertexAttribs2hvNV,
    &VertexAttribs2svNV,
    &VertexAttribs3dvNV,
    &VertexAttribs3fvNV,
    &VertexAttribs3hvNV,
    &VertexAttribs3svNV,
    &VertexAttribs4dvNV,
    &VertexAttribs4fvNV,
    &VertexAttribs4hvNV,
    &VertexAttribs4svNV,
    &VertexAttribs4ubvNV,
    &VertexBindingDivisor,
    &VertexBlendARB,
    &VertexBlendEnvfATI,
    &VertexBlendEnviATI,
    &VertexFormatNV,
    &VertexP2ui,
    &VertexP2uiv,
    &VertexP3ui,
    &VertexP3uiv,
    &VertexP4ui,
    &VertexP4uiv,
    &VertexPointer,
    &VertexPointerEXT,
    &VertexPointerListIBM,
    &VertexPointervINTEL,
    &VertexStream1dATI,
    &VertexStream1dvATI,
    &VertexStream1fATI,
    &VertexStream1fvATI,
    &VertexStream1iATI,
    &VertexStream1ivATI,
    &VertexStream1sATI,
    &VertexStream1svATI,
    &VertexStream2dATI,
    &VertexStream2dvATI,
    &VertexStream2fATI,
    &VertexStream2fvATI,
    &VertexStream2iATI,
    &VertexStream2ivATI,
    &VertexStream2sATI,
    &VertexStream2svATI,
    &VertexStream3dATI,
    &VertexStream3dvATI,
    &VertexStream3fATI,
    &VertexStream3fvATI,
    &VertexStream3iATI,
    &VertexStream3ivATI,
    &VertexStream3sATI,
    &VertexStream3svATI,
    &VertexStream4dATI,
    &VertexStream4dvATI,
    &VertexStream4fATI,
    &VertexStream4fvATI,
    &VertexStream4iATI,
    &VertexStream4ivATI,
    &VertexStream4sATI,
    &VertexStream4svATI,
    &VertexWeightPointerEXT,
    &VertexWeightfEXT,
    &VertexWeightfvEXT,
    &VertexWeighthNV,
    &VertexWeighthvNV,
    &VideoCaptureNV,
    &VideoCaptureStreamParameterdvNV,
    &VideoCaptureStreamParameterfvNV,
    &VideoCaptureStreamParameterivNV,
    &Viewport,
    &ViewportArrayv,
    &ViewportIndexedf,
    &ViewportIndexedfv,
    &WaitSync,
    &WeightPathsNV,
    &WeightPointerARB,
    &WeightbvARB,
    &WeightdvARB,
    &WeightfvARB,
    &WeightivARB,
    &WeightsvARB,
    &WeightubvARB,
    &WeightuivARB,
    &WeightusvARB,
    &WindowPos2d,
    &WindowPos2dARB,
    &WindowPos2dMESA,
    &WindowPos2dv,
    &WindowPos2dvARB,
    &WindowPos2dvMESA,
    &WindowPos2f,
    &WindowPos2fARB,
    &WindowPos2fMESA,
    &WindowPos2fv,
    &WindowPos2fvARB,
    &WindowPos2fvMESA,
    &WindowPos2i,
    &WindowPos2iARB,
    &WindowPos2iMESA,
    &WindowPos2iv,
    &WindowPos2ivARB,
    &WindowPos2ivMESA,
    &WindowPos2s,
    &WindowPos2sARB,
    &WindowPos2sMESA,
    &WindowPos2sv,
    &WindowPos2svARB,
    &WindowPos2svMESA,
    &WindowPos3d,
    &WindowPos3dARB,
    &WindowPos3dMESA,
    &WindowPos3dv,
    &WindowPos3dvARB,
    &WindowPos3dvMESA,
    &WindowPos3f,
    &WindowPos3fARB,
    &WindowPos3fMESA,
    &WindowPos3fv,
    &WindowPos3fvARB,
    &WindowPos3fvMESA,
    &WindowPos3i,
    &WindowPos3iARB,
    &WindowPos3iMESA,
    &WindowPos3iv,
    &WindowPos3ivARB,
    &WindowPos3ivMESA,
    &WindowPos3s,
    &WindowPos3sARB,
    &WindowPos3sMESA,
    &WindowPos3sv,
    &WindowPos3svARB,
    &WindowPos3svMESA,
    &WindowPos4dMESA,
    &WindowPos4dvMESA,
    &WindowPos4fMESA,
    &WindowPos4fvMESA,
    &WindowPos4iMESA,
    &WindowPos4ivMESA,
    &WindowPos4sMESA,
    &WindowPos4svMESA,
    &WriteMaskEXT
}};

} // namespace glbinding
