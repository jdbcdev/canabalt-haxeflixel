#include <hxcpp.h>

#include <sys/io/FileOutput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <openfl/utils/Endian.h>
#include <openfl/ui/MultitouchInputMode.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/net/SharedObjectFlushStatus.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/ID3Info.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Orientation3D.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/errors/Error.h>
#include <openfl/display3D/textures/Texture.h>
#include <openfl/display3D/textures/RectangleTexture.h>
#include <openfl/display3D/textures/CubeTexture.h>
#include <openfl/display3D/textures/TextureBase.h>
#include <openfl/display3D/VertexBuffer3D.h>
#include <openfl/display3D/Program3D.h>
#include <openfl/display3D/IndexBuffer3D.h>
#include <openfl/display3D/Context3DWrapMode.h>
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#include <openfl/display3D/_Context3DTriangleFace/Context3DTriangleFace_Impl_.h>
#include <openfl/display3D/Context3DTextureFormat.h>
#include <openfl/display3D/Context3DTextureFilter.h>
#include <openfl/display3D/Context3DProgramType.h>
#include <openfl/display3D/Context3DMipFilter.h>
#include <openfl/display3D/Context3DClearMask.h>
#include <openfl/display3D/_Context3D/SamplerState.h>
#include <openfl/display3D/Context3D.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/Stage3D.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/PNGEncoderOptions.h>
#include <openfl/display/JPEGEncoderOptions.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/display/BitmapDataChannel.h>
#include <openfl/_v2/utils/WeakRef.h>
#include <openfl/_v2/utils/UInt8Array.h>
#include <openfl/_v2/utils/Int16Array.h>
#include <openfl/_v2/utils/Float32Array.h>
#include <openfl/_v2/utils/CompressionAlgorithm.h>
#include <openfl/_v2/utils/ByteArray.h>
#include <openfl/_v2/utils/IDataInput.h>
#include <openfl/_v2/utils/IDataOutput.h>
#include <openfl/_v2/utils/ArrayBufferView.h>
#include <openfl/_v2/utils/IMemoryRange.h>
#include <openfl/_v2/ui/Multitouch.h>
#include <openfl/_v2/ui/Mouse.h>
#include <openfl/_v2/ui/Keyboard.h>
#include <openfl/_v2/text/TextLineMetrics.h>
#include <openfl/_v2/text/TextFormatAlign.h>
#include <openfl/_v2/text/TextFormat.h>
#include <openfl/_v2/text/TextField.h>
#include <openfl/_v2/text/FontType.h>
#include <openfl/_v2/text/FontStyle.h>
#include <openfl/_v2/system/ScreenMode.h>
#include <openfl/_v2/system/PixelFormat.h>
#include <openfl/_v2/net/URLRequestMethod.h>
#include <openfl/_v2/net/URLRequest.h>
#include <openfl/_v2/net/SharedObject.h>
#include <openfl/_v2/media/AudioThreadState.h>
#include <openfl/_v2/media/SoundChannel.h>
#include <openfl/_v2/media/InternalAudioType.h>
#include <openfl/_v2/media/Sound.h>
#include <openfl/_v2/gl/GLTexture.h>
#include <openfl/_v2/gl/GLShader.h>
#include <openfl/_v2/gl/GLRenderbuffer.h>
#include <openfl/_v2/gl/GLProgram.h>
#include <openfl/_v2/gl/GLFramebuffer.h>
#include <openfl/_v2/gl/GLBuffer.h>
#include <openfl/_v2/gl/GLObject.h>
#include <openfl/_v2/gl/_GL/Float32Data_Impl_.h>
#include <openfl/_v2/gl/GL.h>
#include <openfl/_v2/geom/Transform.h>
#include <openfl/_v2/geom/ColorTransform.h>
#include <openfl/_v2/filters/BitmapFilter.h>
#include <openfl/_v2/filesystem/File.h>
#include <openfl/_v2/events/SystemEvent.h>
#include <openfl/_v2/events/KeyboardEvent.h>
#include <openfl/_v2/events/HTTPStatusEvent.h>
#include <openfl/_v2/events/_EventDispatcher/Listener.h>
#include <openfl/_v2/display/TriangleCulling.h>
#include <openfl/_v2/display/StageQuality.h>
#include <openfl/_v2/display/TouchInfo.h>
#include <openfl/_v2/display/SpreadMethod.h>
#include <openfl/_v2/display/Shape.h>
#include <openfl/_v2/display/OpenGLView.h>
#include <openfl/_v2/display/MovieClip.h>
#include <openfl/_v2/display/ManagedStage.h>
#include <openfl/_v2/display/Stage.h>
#include <openfl/_v2/events/TouchEvent.h>
#include <openfl/_v2/events/MouseEvent.h>
#include <openfl/_v2/events/Event.h>
#include <openfl/_v2/display/LoaderInfo.h>
#include <openfl/_v2/net/URLLoader.h>
#include <openfl/_v2/display/Loader.h>
#include <openfl/_v2/display/LineScaleMode.h>
#include <openfl/_v2/display/JointStyle.h>
#include <openfl/_v2/display/IGraphicsData.h>
#include <openfl/_v2/display/Graphics.h>
#include <openfl/_v2/display/DirectRenderer.h>
#include <openfl/_v2/display/CapsStyle.h>
#include <openfl/_v2/display/BlendMode.h>
#include <openfl/_v2/display/OptimizedPerlin.h>
#include <openfl/_v2/display/Bitmap.h>
#include <openfl/_v2/Memory.h>
#include <openfl/_v2/AssetType.h>
#include <openfl/_v2/AssetData.h>
#include <openfl/_v2/Assets.h>
#include <openfl/_v2/AssetCache.h>
#include <openfl/_v2/IAssetCache.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Serializer.h>
#include <haxe/Resource.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <flixel/util/loaders/TextureRegion.h>
#include <flixel/util/loaders/TexturePackerData.h>
#include <flixel/util/loaders/TextureAtlasFrame.h>
#include <flixel/util/loaders/CachedGraphics.h>
#include <flixel/util/FlxVelocity.h>
#include <flixel/util/LabelValuePair.h>
#include <flixel/util/FlxStringUtil.h>
#include <flixel/util/FlxSpriteUtil.h>
#include <flixel/util/FlxSort.h>
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#include <flixel/util/FlxRandom.h>
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#include <flixel/util/FlxCallbackPoint.h>
#include <flixel/util/FlxMath.h>
#include <flixel/util/FlxDestroyUtil.h>
#include <flixel/util/FlxColorUtil.h>
#include <flixel/util/FlxColor.h>
#include <flixel/util/FlxCollision.h>
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#include <flixel/util/FlxBitmapDataPool.h>
#include <flixel/util/FlxArrayUtil.h>
#include <flixel/util/FlxAngle.h>
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#include <flixel/ui/_FlxTypedButton/GraphicButton.h>
#include <flixel/ui/FlxButton.h>
#include <flixel/ui/FlxTypedButton.h>
#include <flixel/tweens/motion/QuadPath.h>
#include <flixel/tweens/motion/QuadMotion.h>
#include <flixel/tweens/motion/LinearPath.h>
#include <flixel/tweens/motion/LinearMotion.h>
#include <flixel/tweens/motion/CubicMotion.h>
#include <flixel/tweens/motion/CircularMotion.h>
#include <flixel/tweens/motion/Motion.h>
#include <flixel/tweens/misc/VarTween.h>
#include <flixel/tweens/misc/NumTween.h>
#include <flixel/tweens/misc/ColorTween.h>
#include <flixel/tweens/misc/AngleTween.h>
#include <flixel/tweens/FlxEase.h>
#include <flixel/tile/FlxTilemap.h>
#include <flixel/tile/FlxTilemapBuffer.h>
#include <flixel/tile/GraphicAutoAlt.h>
#include <flixel/tile/GraphicAuto.h>
#include <flixel/tile/FlxTile.h>
#include <flixel/text/pxText/PxFontSymbol.h>
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#include <flixel/text/pxText/PxBitmapFont.h>
#include <flixel/text/FlxTextFormat.h>
#include <flixel/system/ui/FlxSystemButton.h>
#include <flixel/system/ui/FlxSoundTray.h>
#include <flixel/system/ui/FlxFocusLostScreen.h>
#include <flixel/system/replay/MouseRecord.h>
#include <flixel/system/replay/FrameRecord.h>
#include <flixel/system/replay/FlxReplay.h>
#include <flixel/system/replay/CodeValuePair.h>
#include <flixel/system/layer/frames/FrameType.h>
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#include <flixel/system/layer/frames/FlxFrame.h>
#include <openfl/_v2/geom/Matrix.h>
#include <flixel/system/layer/_TileSheetExt/RectPointTileID.h>
#include <flixel/system/layer/TileSheetExt.h>
#include <openfl/_v2/display/Tilesheet.h>
#include <openfl/_v2/geom/Point.h>
#include <flixel/system/layer/TileSheetData.h>
#include <flixel/system/layer/Region.h>
#include <flixel/system/layer/DrawStackItem.h>
#include <flixel/system/debug/_Window/GraphicCloseButton.h>
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#include <flixel/system/debug/TrackerProfile.h>
#include <flixel/system/debug/Tracker.h>
#include <flixel/system/debug/Watch.h>
#include <flixel/system/debug/Window.h>
#include <flixel/system/debug/LogStyle.h>
#include <flixel/system/debug/DebuggerLayout.h>
#include <flixel/system/debug/ButtonAlignment.h>
#include <flixel/system/debug/ConsoleUtil.h>
#include <flixel/system/FlxSplash.h>
#include <flixel/system/FlxSound.h>
#include <flixel/system/FlxQuadTree.h>
#include <flixel/system/FlxList.h>
#include <flixel/system/_FlxCollisionType/FlxCollisionType_Impl_.h>
#include <flixel/system/FlxBGSprite.h>
#include <flixel/system/FlxAssets.h>
#include <flixel/system/GraphicLogo.h>
#include <flixel/system/_FlxAssets/FontDefault.h>
#include <openfl/_v2/text/Font.h>
#include <flixel/interfaces/IFlxSignal.h>
#include <flixel/input/touch/FlxTouchManager.h>
#include <flixel/input/touch/FlxTouch.h>
#include <flixel/input/mouse/FlxMouseButton.h>
#include <flixel/input/mouse/FlxMouse.h>
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#include <flixel/input/keyboard/FlxKeyboard.h>
#include <flixel/input/keyboard/FlxKeyList.h>
#include <flixel/input/keyboard/FlxKey.h>
#include <flixel/input/gamepad/FlxGamepadManager.h>
#include <flixel/interfaces/IFlxInput.h>
#include <flixel/input/gamepad/FlxGamepadButton.h>
#include <flixel/input/gamepad/FlxGamepad.h>
#include <flixel/input/FlxSwipe.h>
#include <flixel/group/FlxTypedGroupIterator.h>
#include <flixel/effects/particles/Bounds.h>
#include <flixel/effects/particles/FlxParticle.h>
#include <flixel/interfaces/IFlxParticle.h>
#include <flixel/interfaces/IFlxSprite.h>
#include <flixel/interfaces/IFlxBasic.h>
#include <flixel/effects/particles/FlxEmitter.h>
#include <flixel/effects/particles/FlxTypedEmitter.h>
#include <flixel/effects/FlxFlicker.h>
#include <flixel/util/FlxPool_flixel_effects_FlxFlicker.h>
#include <flixel/animation/FlxPrerotatedAnimation.h>
#include <flixel/animation/FlxAnimationController.h>
#include <flixel/animation/FlxAnimation.h>
#include <flixel/animation/FlxBaseAnimation.h>
#include <flixel/FlxSubState.h>
#include <flixel/_FlxSprite/GraphicDefault.h>
#include <openfl/_v2/display/BitmapData.h>
#include <flixel/FlxGame.h>
#include <flixel/FlxG.h>
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#include <flixel/util/FlxSave.h>
#include <flixel/plugin/TweenManager.h>
#include <flixel/tweens/FlxTween.h>
#include <flixel/plugin/TimerManager.h>
#include <flixel/util/FlxTimer.h>
#include <flixel/plugin/PathManager.h>
#include <flixel/plugin/FlxPlugin.h>
#include <flixel/util/FlxPath.h>
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#include <haxe/Log.h>
#include <flixel/system/frontEnds/LogFrontEnd.h>
#include <flixel/system/frontEnds/InputFrontEnd.h>
#include <flixel/util/_FlxSignal/FlxTypedSignal_Impl_.h>
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#include <openfl/_v2/geom/Rectangle.h>
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#include <flixel/system/scaleModes/RatioScaleMode.h>
#include <flixel/system/scaleModes/BaseScaleMode.h>
#include <flixel/util/FlxPoint.h>
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#include <flixel/system/FlxVersion.h>
#include <flixel/FlxCamera.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Sequence.h>
#include <Types.h>
#include <Reflect.h>
#include <Player.h>
#include <PlayState.h>
#include <MenuState.h>
#include <flixel/FlxState.h>
#include <flixel/group/FlxGroup.h>
#include <flixel/group/FlxTypedGroup.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <Hall.h>
#include <HUD.h>
#include <flixel/text/FlxText.h>
#include <EReg.h>
#include <DefaultAssetLibrary.h>
#include <openfl/_v2/AssetLibrary.h>
#include <Date.h>
#include <CBlock.h>
#include <flixel/tile/FlxTileblock.h>
#include <Building.h>
#include <flixel/group/FlxSpriteGroup.h>
#include <flixel/group/FlxTypedSpriteGroup.h>
#include <Billboard.h>
#include <BG.h>
#include <flixel/FlxSprite.h>
#include <flixel/FlxObject.h>
#include <flixel/util/FlxRect.h>
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#include <flixel/interfaces/IFlxPooled.h>
#include <flixel/FlxBasic.h>
#include <flixel/interfaces/IFlxDestroyable.h>
#include <DocumentClass.h>
#include <Main.h>
#include <openfl/_v2/display/Sprite.h>
#include <openfl/_v2/display/DisplayObjectContainer.h>
#include <openfl/_v2/display/InteractiveObject.h>
#include <openfl/_v2/display/DisplayObject.h>
#include <openfl/_v2/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/_v2/display/IBitmapDrawable.h>
#include <openfl/_v2/events/EventDispatcher.h>
#include <openfl/_v2/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileOutput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::ui::MultitouchInputMode_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::net::SharedObjectFlushStatus_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Orientation3D_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display3D::textures::Texture_obj::__register();
::openfl::display3D::textures::RectangleTexture_obj::__register();
::openfl::display3D::textures::CubeTexture_obj::__register();
::openfl::display3D::textures::TextureBase_obj::__register();
::openfl::display3D::VertexBuffer3D_obj::__register();
::openfl::display3D::Program3D_obj::__register();
::openfl::display3D::IndexBuffer3D_obj::__register();
::openfl::display3D::Context3DWrapMode_obj::__register();
::openfl::display3D::Context3DVertexBufferFormat_obj::__register();
::openfl::display3D::_Context3DTriangleFace::Context3DTriangleFace_Impl__obj::__register();
::openfl::display3D::Context3DTextureFormat_obj::__register();
::openfl::display3D::Context3DTextureFilter_obj::__register();
::openfl::display3D::Context3DProgramType_obj::__register();
::openfl::display3D::Context3DMipFilter_obj::__register();
::openfl::display3D::Context3DClearMask_obj::__register();
::openfl::display3D::_Context3D::SamplerState_obj::__register();
::openfl::display3D::Context3D_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::Stage3D_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::PNGEncoderOptions_obj::__register();
::openfl::display::JPEGEncoderOptions_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::display::BitmapDataChannel_obj::__register();
::openfl::_v2::utils::WeakRef_obj::__register();
::openfl::_v2::utils::UInt8Array_obj::__register();
::openfl::_v2::utils::Int16Array_obj::__register();
::openfl::_v2::utils::Float32Array_obj::__register();
::openfl::_v2::utils::CompressionAlgorithm_obj::__register();
::openfl::_v2::utils::ByteArray_obj::__register();
::openfl::_v2::utils::IDataInput_obj::__register();
::openfl::_v2::utils::IDataOutput_obj::__register();
::openfl::_v2::utils::ArrayBufferView_obj::__register();
::openfl::_v2::utils::IMemoryRange_obj::__register();
::openfl::_v2::ui::Multitouch_obj::__register();
::openfl::_v2::ui::Mouse_obj::__register();
::openfl::_v2::ui::Keyboard_obj::__register();
::openfl::_v2::text::TextLineMetrics_obj::__register();
::openfl::_v2::text::TextFormatAlign_obj::__register();
::openfl::_v2::text::TextFormat_obj::__register();
::openfl::_v2::text::TextField_obj::__register();
::openfl::_v2::text::FontType_obj::__register();
::openfl::_v2::text::FontStyle_obj::__register();
::openfl::_v2::system::ScreenMode_obj::__register();
::openfl::_v2::system::PixelFormat_obj::__register();
::openfl::_v2::net::URLRequestMethod_obj::__register();
::openfl::_v2::net::URLRequest_obj::__register();
::openfl::_v2::net::SharedObject_obj::__register();
::openfl::_v2::media::AudioThreadState_obj::__register();
::openfl::_v2::media::SoundChannel_obj::__register();
::openfl::_v2::media::InternalAudioType_obj::__register();
::openfl::_v2::media::Sound_obj::__register();
::openfl::_v2::gl::GLTexture_obj::__register();
::openfl::_v2::gl::GLShader_obj::__register();
::openfl::_v2::gl::GLRenderbuffer_obj::__register();
::openfl::_v2::gl::GLProgram_obj::__register();
::openfl::_v2::gl::GLFramebuffer_obj::__register();
::openfl::_v2::gl::GLBuffer_obj::__register();
::openfl::_v2::gl::GLObject_obj::__register();
::openfl::_v2::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::_v2::gl::GL_obj::__register();
::openfl::_v2::geom::Transform_obj::__register();
::openfl::_v2::geom::ColorTransform_obj::__register();
::openfl::_v2::filters::BitmapFilter_obj::__register();
::openfl::_v2::filesystem::File_obj::__register();
::openfl::_v2::events::SystemEvent_obj::__register();
::openfl::_v2::events::KeyboardEvent_obj::__register();
::openfl::_v2::events::HTTPStatusEvent_obj::__register();
::openfl::_v2::events::_EventDispatcher::Listener_obj::__register();
::openfl::_v2::display::TriangleCulling_obj::__register();
::openfl::_v2::display::StageQuality_obj::__register();
::openfl::_v2::display::TouchInfo_obj::__register();
::openfl::_v2::display::SpreadMethod_obj::__register();
::openfl::_v2::display::Shape_obj::__register();
::openfl::_v2::display::OpenGLView_obj::__register();
::openfl::_v2::display::MovieClip_obj::__register();
::openfl::_v2::display::ManagedStage_obj::__register();
::openfl::_v2::display::Stage_obj::__register();
::openfl::_v2::events::TouchEvent_obj::__register();
::openfl::_v2::events::MouseEvent_obj::__register();
::openfl::_v2::events::Event_obj::__register();
::openfl::_v2::display::LoaderInfo_obj::__register();
::openfl::_v2::net::URLLoader_obj::__register();
::openfl::_v2::display::Loader_obj::__register();
::openfl::_v2::display::LineScaleMode_obj::__register();
::openfl::_v2::display::JointStyle_obj::__register();
::openfl::_v2::display::IGraphicsData_obj::__register();
::openfl::_v2::display::Graphics_obj::__register();
::openfl::_v2::display::DirectRenderer_obj::__register();
::openfl::_v2::display::CapsStyle_obj::__register();
::openfl::_v2::display::BlendMode_obj::__register();
::openfl::_v2::display::OptimizedPerlin_obj::__register();
::openfl::_v2::display::Bitmap_obj::__register();
::openfl::_v2::Memory_obj::__register();
::openfl::_v2::AssetType_obj::__register();
::openfl::_v2::AssetData_obj::__register();
::openfl::_v2::Assets_obj::__register();
::openfl::_v2::AssetCache_obj::__register();
::openfl::_v2::IAssetCache_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::flixel::util::loaders::TextureRegion_obj::__register();
::flixel::util::loaders::TexturePackerData_obj::__register();
::flixel::util::loaders::TextureAtlasFrame_obj::__register();
::flixel::util::loaders::CachedGraphics_obj::__register();
::flixel::util::FlxVelocity_obj::__register();
::flixel::util::LabelValuePair_obj::__register();
::flixel::util::FlxStringUtil_obj::__register();
::flixel::util::FlxSpriteUtil_obj::__register();
::flixel::util::FlxSort_obj::__register();
::flixel::util::_FlxSignal::FlxSignal4_obj::__register();
::flixel::util::_FlxSignal::FlxSignal3_obj::__register();
::flixel::util::_FlxSignal::FlxSignal2_obj::__register();
::flixel::util::_FlxSignal::FlxSignal1_obj::__register();
::flixel::util::_FlxSignal::FlxSignal0_obj::__register();
::flixel::util::_FlxSignal::FlxSignalBase_obj::__register();
::flixel::util::_FlxSignal::FlxSignalHandler_obj::__register();
::flixel::util::FlxRandom_obj::__register();
::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__register();
::flixel::util::FlxCallbackPoint_obj::__register();
::flixel::util::FlxMath_obj::__register();
::flixel::util::FlxDestroyUtil_obj::__register();
::flixel::util::FlxColorUtil_obj::__register();
::flixel::util::FlxColor_obj::__register();
::flixel::util::FlxCollision_obj::__register();
::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__register();
::flixel::util::FlxBitmapDataPool_obj::__register();
::flixel::util::FlxArrayUtil_obj::__register();
::flixel::util::FlxAngle_obj::__register();
::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__register();
::flixel::ui::_FlxTypedButton::GraphicButton_obj::__register();
::flixel::ui::FlxButton_obj::__register();
::flixel::ui::FlxTypedButton_obj::__register();
::flixel::tweens::motion::QuadPath_obj::__register();
::flixel::tweens::motion::QuadMotion_obj::__register();
::flixel::tweens::motion::LinearPath_obj::__register();
::flixel::tweens::motion::LinearMotion_obj::__register();
::flixel::tweens::motion::CubicMotion_obj::__register();
::flixel::tweens::motion::CircularMotion_obj::__register();
::flixel::tweens::motion::Motion_obj::__register();
::flixel::tweens::misc::VarTween_obj::__register();
::flixel::tweens::misc::NumTween_obj::__register();
::flixel::tweens::misc::ColorTween_obj::__register();
::flixel::tweens::misc::AngleTween_obj::__register();
::flixel::tweens::FlxEase_obj::__register();
::flixel::tile::FlxTilemap_obj::__register();
::flixel::tile::FlxTilemapBuffer_obj::__register();
::flixel::tile::GraphicAutoAlt_obj::__register();
::flixel::tile::GraphicAuto_obj::__register();
::flixel::tile::FlxTile_obj::__register();
::flixel::text::pxText::PxFontSymbol_obj::__register();
::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__register();
::flixel::text::pxText::PxBitmapFont_obj::__register();
::flixel::text::FlxTextFormat_obj::__register();
::flixel::system::ui::FlxSystemButton_obj::__register();
::flixel::system::ui::FlxSoundTray_obj::__register();
::flixel::system::ui::FlxFocusLostScreen_obj::__register();
::flixel::system::replay::MouseRecord_obj::__register();
::flixel::system::replay::FrameRecord_obj::__register();
::flixel::system::replay::FlxReplay_obj::__register();
::flixel::system::replay::CodeValuePair_obj::__register();
::flixel::system::layer::frames::FrameType_obj::__register();
::flixel::system::layer::frames::FlxSpriteFrames_obj::__register();
::flixel::system::layer::frames::FlxRotatedFrame_obj::__register();
::flixel::system::layer::frames::FlxFrame_obj::__register();
::openfl::_v2::geom::Matrix_obj::__register();
::flixel::system::layer::_TileSheetExt::RectPointTileID_obj::__register();
::flixel::system::layer::TileSheetExt_obj::__register();
::openfl::_v2::display::Tilesheet_obj::__register();
::openfl::_v2::geom::Point_obj::__register();
::flixel::system::layer::TileSheetData_obj::__register();
::flixel::system::layer::Region_obj::__register();
::flixel::system::layer::DrawStackItem_obj::__register();
::flixel::system::debug::_Window::GraphicCloseButton_obj::__register();
::flixel::system::debug::_Window::GraphicWindowHandle_obj::__register();
::flixel::system::debug::TrackerProfile_obj::__register();
::flixel::system::debug::Tracker_obj::__register();
::flixel::system::debug::Watch_obj::__register();
::flixel::system::debug::Window_obj::__register();
::flixel::system::debug::LogStyle_obj::__register();
::flixel::system::debug::DebuggerLayout_obj::__register();
::flixel::system::debug::ButtonAlignment_obj::__register();
::flixel::system::debug::ConsoleUtil_obj::__register();
::flixel::system::FlxSplash_obj::__register();
::flixel::system::FlxSound_obj::__register();
::flixel::system::FlxQuadTree_obj::__register();
::flixel::system::FlxList_obj::__register();
::flixel::system::_FlxCollisionType::FlxCollisionType_Impl__obj::__register();
::flixel::system::FlxBGSprite_obj::__register();
::flixel::system::FlxAssets_obj::__register();
::flixel::system::GraphicLogo_obj::__register();
::flixel::system::_FlxAssets::FontDefault_obj::__register();
::openfl::_v2::text::Font_obj::__register();
::flixel::interfaces::IFlxSignal_obj::__register();
::flixel::input::touch::FlxTouchManager_obj::__register();
::flixel::input::touch::FlxTouch_obj::__register();
::flixel::input::mouse::FlxMouseButton_obj::__register();
::flixel::input::mouse::FlxMouse_obj::__register();
::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__register();
::flixel::input::keyboard::FlxKeyboard_obj::__register();
::flixel::input::keyboard::FlxKeyList_obj::__register();
::flixel::input::keyboard::FlxKey_obj::__register();
::flixel::input::gamepad::FlxGamepadManager_obj::__register();
::flixel::interfaces::IFlxInput_obj::__register();
::flixel::input::gamepad::FlxGamepadButton_obj::__register();
::flixel::input::gamepad::FlxGamepad_obj::__register();
::flixel::input::FlxSwipe_obj::__register();
::flixel::group::FlxTypedGroupIterator_obj::__register();
::flixel::effects::particles::Bounds_obj::__register();
::flixel::effects::particles::FlxParticle_obj::__register();
::flixel::interfaces::IFlxParticle_obj::__register();
::flixel::interfaces::IFlxSprite_obj::__register();
::flixel::interfaces::IFlxBasic_obj::__register();
::flixel::effects::particles::FlxEmitter_obj::__register();
::flixel::effects::particles::FlxTypedEmitter_obj::__register();
::flixel::effects::FlxFlicker_obj::__register();
::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__register();
::flixel::animation::FlxPrerotatedAnimation_obj::__register();
::flixel::animation::FlxAnimationController_obj::__register();
::flixel::animation::FlxAnimation_obj::__register();
::flixel::animation::FlxBaseAnimation_obj::__register();
::flixel::FlxSubState_obj::__register();
::flixel::_FlxSprite::GraphicDefault_obj::__register();
::openfl::_v2::display::BitmapData_obj::__register();
::flixel::FlxGame_obj::__register();
::flixel::FlxG_obj::__register();
::flixel::system::frontEnds::WatchFrontEnd_obj::__register();
::flixel::system::frontEnds::VCRFrontEnd_obj::__register();
::flixel::system::frontEnds::SoundFrontEnd_obj::__register();
::flixel::system::frontEnds::SignalFrontEnd_obj::__register();
::flixel::util::FlxSave_obj::__register();
::flixel::plugin::TweenManager_obj::__register();
::flixel::tweens::FlxTween_obj::__register();
::flixel::plugin::TimerManager_obj::__register();
::flixel::util::FlxTimer_obj::__register();
::flixel::plugin::PathManager_obj::__register();
::flixel::plugin::FlxPlugin_obj::__register();
::flixel::util::FlxPath_obj::__register();
::flixel::system::frontEnds::PluginFrontEnd_obj::__register();
::haxe::Log_obj::__register();
::flixel::system::frontEnds::LogFrontEnd_obj::__register();
::flixel::system::frontEnds::InputFrontEnd_obj::__register();
::flixel::util::_FlxSignal::FlxTypedSignal_Impl__obj::__register();
::flixel::system::frontEnds::DebuggerFrontEnd_obj::__register();
::flixel::system::frontEnds::ConsoleFrontEnd_obj::__register();
::openfl::_v2::geom::Rectangle_obj::__register();
::flixel::system::frontEnds::CameraFrontEnd_obj::__register();
::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__register();
::flixel::system::frontEnds::BitmapFrontEnd_obj::__register();
::flixel::system::scaleModes::RatioScaleMode_obj::__register();
::flixel::system::scaleModes::BaseScaleMode_obj::__register();
::flixel::util::FlxPoint_obj::__register();
::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__register();
::flixel::system::FlxVersion_obj::__register();
::flixel::FlxCamera_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Sequence_obj::__register();
::Types_obj::__register();
::Reflect_obj::__register();
::Player_obj::__register();
::PlayState_obj::__register();
::MenuState_obj::__register();
::flixel::FlxState_obj::__register();
::flixel::group::FlxGroup_obj::__register();
::flixel::group::FlxTypedGroup_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::Hall_obj::__register();
::HUD_obj::__register();
::flixel::text::FlxText_obj::__register();
::EReg_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::_v2::AssetLibrary_obj::__register();
::Date_obj::__register();
::CBlock_obj::__register();
::flixel::tile::FlxTileblock_obj::__register();
::Building_obj::__register();
::flixel::group::FlxSpriteGroup_obj::__register();
::flixel::group::FlxTypedSpriteGroup_obj::__register();
::Billboard_obj::__register();
::BG_obj::__register();
::flixel::FlxSprite_obj::__register();
::flixel::FlxObject_obj::__register();
::flixel::util::FlxRect_obj::__register();
::flixel::util::FlxPool_flixel_util_FlxRect_obj::__register();
::flixel::interfaces::IFlxPooled_obj::__register();
::flixel::FlxBasic_obj::__register();
::flixel::interfaces::IFlxDestroyable_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::openfl::_v2::display::Sprite_obj::__register();
::openfl::_v2::display::DisplayObjectContainer_obj::__register();
::openfl::_v2::display::InteractiveObject_obj::__register();
::openfl::_v2::display::DisplayObject_obj::__register();
::openfl::_v2::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::_v2::display::IBitmapDrawable_obj::__register();
::openfl::_v2::events::EventDispatcher_obj::__register();
::openfl::_v2::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::openfl::_v2::ui::Multitouch_obj::__init__();
::openfl::_v2::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::_v2::events::IEventDispatcher_obj::__boot();
::openfl::_v2::events::EventDispatcher_obj::__boot();
::openfl::_v2::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::_v2::Lib_obj::__boot();
::openfl::_v2::display::DisplayObject_obj::__boot();
::openfl::_v2::display::InteractiveObject_obj::__boot();
::openfl::_v2::display::DisplayObjectContainer_obj::__boot();
::openfl::_v2::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::flixel::interfaces::IFlxDestroyable_obj::__boot();
::flixel::FlxBasic_obj::__boot();
::flixel::interfaces::IFlxPooled_obj::__boot();
::flixel::util::FlxPool_flixel_util_FlxRect_obj::__boot();
::flixel::util::FlxRect_obj::__boot();
::flixel::FlxObject_obj::__boot();
::flixel::FlxSprite_obj::__boot();
::BG_obj::__boot();
::Billboard_obj::__boot();
::flixel::group::FlxTypedSpriteGroup_obj::__boot();
::flixel::group::FlxSpriteGroup_obj::__boot();
::Building_obj::__boot();
::flixel::tile::FlxTileblock_obj::__boot();
::CBlock_obj::__boot();
::Date_obj::__boot();
::openfl::_v2::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::flixel::text::FlxText_obj::__boot();
::HUD_obj::__boot();
::Hall_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::flixel::group::FlxTypedGroup_obj::__boot();
::flixel::group::FlxGroup_obj::__boot();
::flixel::FlxState_obj::__boot();
::MenuState_obj::__boot();
::PlayState_obj::__boot();
::Player_obj::__boot();
::Reflect_obj::__boot();
::Types_obj::__boot();
::Sequence_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::flixel::FlxCamera_obj::__boot();
::flixel::system::FlxVersion_obj::__boot();
::flixel::util::FlxPool_flixel_util_FlxPoint_obj::__boot();
::flixel::util::FlxPoint_obj::__boot();
::flixel::system::scaleModes::BaseScaleMode_obj::__boot();
::flixel::system::scaleModes::RatioScaleMode_obj::__boot();
::flixel::system::frontEnds::BitmapFrontEnd_obj::__boot();
::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__boot();
::flixel::system::frontEnds::CameraFrontEnd_obj::__boot();
::openfl::_v2::geom::Rectangle_obj::__boot();
::flixel::system::frontEnds::ConsoleFrontEnd_obj::__boot();
::flixel::system::frontEnds::DebuggerFrontEnd_obj::__boot();
::flixel::util::_FlxSignal::FlxTypedSignal_Impl__obj::__boot();
::flixel::system::frontEnds::InputFrontEnd_obj::__boot();
::flixel::system::frontEnds::LogFrontEnd_obj::__boot();
::flixel::system::frontEnds::PluginFrontEnd_obj::__boot();
::flixel::util::FlxPath_obj::__boot();
::flixel::plugin::FlxPlugin_obj::__boot();
::flixel::plugin::PathManager_obj::__boot();
::flixel::util::FlxTimer_obj::__boot();
::flixel::plugin::TimerManager_obj::__boot();
::flixel::tweens::FlxTween_obj::__boot();
::flixel::plugin::TweenManager_obj::__boot();
::flixel::util::FlxSave_obj::__boot();
::flixel::system::frontEnds::SignalFrontEnd_obj::__boot();
::flixel::system::frontEnds::SoundFrontEnd_obj::__boot();
::flixel::system::frontEnds::VCRFrontEnd_obj::__boot();
::flixel::system::frontEnds::WatchFrontEnd_obj::__boot();
::flixel::FlxG_obj::__boot();
::flixel::FlxGame_obj::__boot();
::openfl::_v2::display::BitmapData_obj::__boot();
::flixel::_FlxSprite::GraphicDefault_obj::__boot();
::flixel::FlxSubState_obj::__boot();
::flixel::animation::FlxBaseAnimation_obj::__boot();
::flixel::animation::FlxAnimation_obj::__boot();
::flixel::animation::FlxAnimationController_obj::__boot();
::flixel::animation::FlxPrerotatedAnimation_obj::__boot();
::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__boot();
::flixel::effects::FlxFlicker_obj::__boot();
::flixel::effects::particles::FlxTypedEmitter_obj::__boot();
::flixel::effects::particles::FlxEmitter_obj::__boot();
::flixel::interfaces::IFlxBasic_obj::__boot();
::flixel::interfaces::IFlxSprite_obj::__boot();
::flixel::interfaces::IFlxParticle_obj::__boot();
::flixel::effects::particles::FlxParticle_obj::__boot();
::flixel::effects::particles::Bounds_obj::__boot();
::flixel::group::FlxTypedGroupIterator_obj::__boot();
::flixel::input::FlxSwipe_obj::__boot();
::flixel::input::gamepad::FlxGamepad_obj::__boot();
::flixel::input::gamepad::FlxGamepadButton_obj::__boot();
::flixel::interfaces::IFlxInput_obj::__boot();
::flixel::input::gamepad::FlxGamepadManager_obj::__boot();
::flixel::input::keyboard::FlxKey_obj::__boot();
::flixel::input::keyboard::FlxKeyList_obj::__boot();
::flixel::input::keyboard::FlxKeyboard_obj::__boot();
::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__boot();
::flixel::input::mouse::FlxMouse_obj::__boot();
::flixel::input::mouse::FlxMouseButton_obj::__boot();
::flixel::input::touch::FlxTouch_obj::__boot();
::flixel::input::touch::FlxTouchManager_obj::__boot();
::flixel::interfaces::IFlxSignal_obj::__boot();
::openfl::_v2::text::Font_obj::__boot();
::flixel::system::_FlxAssets::FontDefault_obj::__boot();
::flixel::system::GraphicLogo_obj::__boot();
::flixel::system::FlxAssets_obj::__boot();
::flixel::system::FlxBGSprite_obj::__boot();
::flixel::system::_FlxCollisionType::FlxCollisionType_Impl__obj::__boot();
::flixel::system::FlxList_obj::__boot();
::flixel::system::FlxQuadTree_obj::__boot();
::flixel::system::FlxSound_obj::__boot();
::flixel::system::FlxSplash_obj::__boot();
::flixel::system::debug::ConsoleUtil_obj::__boot();
::flixel::system::debug::ButtonAlignment_obj::__boot();
::flixel::system::debug::DebuggerLayout_obj::__boot();
::flixel::system::debug::LogStyle_obj::__boot();
::flixel::system::debug::Window_obj::__boot();
::flixel::system::debug::Watch_obj::__boot();
::flixel::system::debug::Tracker_obj::__boot();
::flixel::system::debug::TrackerProfile_obj::__boot();
::flixel::system::debug::_Window::GraphicWindowHandle_obj::__boot();
::flixel::system::debug::_Window::GraphicCloseButton_obj::__boot();
::flixel::system::layer::DrawStackItem_obj::__boot();
::flixel::system::layer::Region_obj::__boot();
::flixel::system::layer::TileSheetData_obj::__boot();
::openfl::_v2::geom::Point_obj::__boot();
::openfl::_v2::display::Tilesheet_obj::__boot();
::flixel::system::layer::TileSheetExt_obj::__boot();
::flixel::system::layer::_TileSheetExt::RectPointTileID_obj::__boot();
::openfl::_v2::geom::Matrix_obj::__boot();
::flixel::system::layer::frames::FlxFrame_obj::__boot();
::flixel::system::layer::frames::FlxRotatedFrame_obj::__boot();
::flixel::system::layer::frames::FlxSpriteFrames_obj::__boot();
::flixel::system::layer::frames::FrameType_obj::__boot();
::flixel::system::replay::CodeValuePair_obj::__boot();
::flixel::system::replay::FlxReplay_obj::__boot();
::flixel::system::replay::FrameRecord_obj::__boot();
::flixel::system::replay::MouseRecord_obj::__boot();
::flixel::system::ui::FlxFocusLostScreen_obj::__boot();
::flixel::system::ui::FlxSoundTray_obj::__boot();
::flixel::system::ui::FlxSystemButton_obj::__boot();
::flixel::text::FlxTextFormat_obj::__boot();
::flixel::text::pxText::PxBitmapFont_obj::__boot();
::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__boot();
::flixel::text::pxText::PxFontSymbol_obj::__boot();
::flixel::tile::FlxTile_obj::__boot();
::flixel::tile::GraphicAuto_obj::__boot();
::flixel::tile::GraphicAutoAlt_obj::__boot();
::flixel::tile::FlxTilemapBuffer_obj::__boot();
::flixel::tile::FlxTilemap_obj::__boot();
::flixel::tweens::FlxEase_obj::__boot();
::flixel::tweens::misc::AngleTween_obj::__boot();
::flixel::tweens::misc::ColorTween_obj::__boot();
::flixel::tweens::misc::NumTween_obj::__boot();
::flixel::tweens::misc::VarTween_obj::__boot();
::flixel::tweens::motion::Motion_obj::__boot();
::flixel::tweens::motion::CircularMotion_obj::__boot();
::flixel::tweens::motion::CubicMotion_obj::__boot();
::flixel::tweens::motion::LinearMotion_obj::__boot();
::flixel::tweens::motion::LinearPath_obj::__boot();
::flixel::tweens::motion::QuadMotion_obj::__boot();
::flixel::tweens::motion::QuadPath_obj::__boot();
::flixel::ui::FlxTypedButton_obj::__boot();
::flixel::ui::FlxButton_obj::__boot();
::flixel::ui::_FlxTypedButton::GraphicButton_obj::__boot();
::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__boot();
::flixel::util::FlxAngle_obj::__boot();
::flixel::util::FlxArrayUtil_obj::__boot();
::flixel::util::FlxBitmapDataPool_obj::__boot();
::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__boot();
::flixel::util::FlxCollision_obj::__boot();
::flixel::util::FlxColor_obj::__boot();
::flixel::util::FlxColorUtil_obj::__boot();
::flixel::util::FlxDestroyUtil_obj::__boot();
::flixel::util::FlxMath_obj::__boot();
::flixel::util::FlxCallbackPoint_obj::__boot();
::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__boot();
::flixel::util::FlxRandom_obj::__boot();
::flixel::util::_FlxSignal::FlxSignalHandler_obj::__boot();
::flixel::util::_FlxSignal::FlxSignalBase_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal0_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal1_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal2_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal3_obj::__boot();
::flixel::util::_FlxSignal::FlxSignal4_obj::__boot();
::flixel::util::FlxSort_obj::__boot();
::flixel::util::FlxSpriteUtil_obj::__boot();
::flixel::util::FlxStringUtil_obj::__boot();
::flixel::util::LabelValuePair_obj::__boot();
::flixel::util::FlxVelocity_obj::__boot();
::flixel::util::loaders::CachedGraphics_obj::__boot();
::flixel::util::loaders::TextureAtlasFrame_obj::__boot();
::flixel::util::loaders::TexturePackerData_obj::__boot();
::flixel::util::loaders::TextureRegion_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::_v2::IAssetCache_obj::__boot();
::openfl::_v2::AssetCache_obj::__boot();
::openfl::_v2::Assets_obj::__boot();
::openfl::_v2::AssetData_obj::__boot();
::openfl::_v2::AssetType_obj::__boot();
::openfl::_v2::Memory_obj::__boot();
::openfl::_v2::display::Bitmap_obj::__boot();
::openfl::_v2::display::OptimizedPerlin_obj::__boot();
::openfl::_v2::display::BlendMode_obj::__boot();
::openfl::_v2::display::CapsStyle_obj::__boot();
::openfl::_v2::display::DirectRenderer_obj::__boot();
::openfl::_v2::display::Graphics_obj::__boot();
::openfl::_v2::display::IGraphicsData_obj::__boot();
::openfl::_v2::display::JointStyle_obj::__boot();
::openfl::_v2::display::LineScaleMode_obj::__boot();
::openfl::_v2::display::Loader_obj::__boot();
::openfl::_v2::net::URLLoader_obj::__boot();
::openfl::_v2::display::LoaderInfo_obj::__boot();
::openfl::_v2::events::Event_obj::__boot();
::openfl::_v2::events::MouseEvent_obj::__boot();
::openfl::_v2::events::TouchEvent_obj::__boot();
::openfl::_v2::display::Stage_obj::__boot();
::openfl::_v2::display::ManagedStage_obj::__boot();
::openfl::_v2::display::MovieClip_obj::__boot();
::openfl::_v2::display::OpenGLView_obj::__boot();
::openfl::_v2::display::Shape_obj::__boot();
::openfl::_v2::display::SpreadMethod_obj::__boot();
::openfl::_v2::display::TouchInfo_obj::__boot();
::openfl::_v2::display::StageQuality_obj::__boot();
::openfl::_v2::display::TriangleCulling_obj::__boot();
::openfl::_v2::events::_EventDispatcher::Listener_obj::__boot();
::openfl::_v2::events::HTTPStatusEvent_obj::__boot();
::openfl::_v2::events::KeyboardEvent_obj::__boot();
::openfl::_v2::events::SystemEvent_obj::__boot();
::openfl::_v2::filesystem::File_obj::__boot();
::openfl::_v2::filters::BitmapFilter_obj::__boot();
::openfl::_v2::geom::ColorTransform_obj::__boot();
::openfl::_v2::geom::Transform_obj::__boot();
::openfl::_v2::gl::GL_obj::__boot();
::openfl::_v2::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::_v2::gl::GLObject_obj::__boot();
::openfl::_v2::gl::GLBuffer_obj::__boot();
::openfl::_v2::gl::GLFramebuffer_obj::__boot();
::openfl::_v2::gl::GLProgram_obj::__boot();
::openfl::_v2::gl::GLRenderbuffer_obj::__boot();
::openfl::_v2::gl::GLShader_obj::__boot();
::openfl::_v2::gl::GLTexture_obj::__boot();
::openfl::_v2::media::Sound_obj::__boot();
::openfl::_v2::media::InternalAudioType_obj::__boot();
::openfl::_v2::media::SoundChannel_obj::__boot();
::openfl::_v2::media::AudioThreadState_obj::__boot();
::openfl::_v2::net::SharedObject_obj::__boot();
::openfl::_v2::net::URLRequest_obj::__boot();
::openfl::_v2::net::URLRequestMethod_obj::__boot();
::openfl::_v2::system::PixelFormat_obj::__boot();
::openfl::_v2::system::ScreenMode_obj::__boot();
::openfl::_v2::text::FontStyle_obj::__boot();
::openfl::_v2::text::FontType_obj::__boot();
::openfl::_v2::text::TextField_obj::__boot();
::openfl::_v2::text::TextFormat_obj::__boot();
::openfl::_v2::text::TextFormatAlign_obj::__boot();
::openfl::_v2::text::TextLineMetrics_obj::__boot();
::openfl::_v2::ui::Keyboard_obj::__boot();
::openfl::_v2::ui::Mouse_obj::__boot();
::openfl::_v2::ui::Multitouch_obj::__boot();
::openfl::_v2::utils::IMemoryRange_obj::__boot();
::openfl::_v2::utils::ArrayBufferView_obj::__boot();
::openfl::_v2::utils::IDataOutput_obj::__boot();
::openfl::_v2::utils::IDataInput_obj::__boot();
::openfl::_v2::utils::ByteArray_obj::__boot();
::openfl::_v2::utils::CompressionAlgorithm_obj::__boot();
::openfl::_v2::utils::Float32Array_obj::__boot();
::openfl::_v2::utils::Int16Array_obj::__boot();
::openfl::_v2::utils::UInt8Array_obj::__boot();
::openfl::_v2::utils::WeakRef_obj::__boot();
::openfl::display::BitmapDataChannel_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::JPEGEncoderOptions_obj::__boot();
::openfl::display::PNGEncoderOptions_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Stage3D_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::display3D::Context3D_obj::__boot();
::openfl::display3D::_Context3D::SamplerState_obj::__boot();
::openfl::display3D::Context3DClearMask_obj::__boot();
::openfl::display3D::Context3DMipFilter_obj::__boot();
::openfl::display3D::Context3DProgramType_obj::__boot();
::openfl::display3D::Context3DTextureFilter_obj::__boot();
::openfl::display3D::Context3DTextureFormat_obj::__boot();
::openfl::display3D::_Context3DTriangleFace::Context3DTriangleFace_Impl__obj::__boot();
::openfl::display3D::Context3DVertexBufferFormat_obj::__boot();
::openfl::display3D::Context3DWrapMode_obj::__boot();
::openfl::display3D::IndexBuffer3D_obj::__boot();
::openfl::display3D::Program3D_obj::__boot();
::openfl::display3D::VertexBuffer3D_obj::__boot();
::openfl::display3D::textures::TextureBase_obj::__boot();
::openfl::display3D::textures::CubeTexture_obj::__boot();
::openfl::display3D::textures::RectangleTexture_obj::__boot();
::openfl::display3D::textures::Texture_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Orientation3D_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::SharedObjectFlushStatus_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::ui::MultitouchInputMode_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileOutput_obj::__boot();
}

