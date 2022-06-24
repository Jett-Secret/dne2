#include "AbortControllerBinding.h"
#include "AbortSignalBinding.h"
#include "AccessibleNodeBinding.h"
#include "AnalyserNodeBinding.h"
#include "AnimationBinding.h"
#include "AnimationEffectReadOnlyBinding.h"
#include "AnimationEffectTimingBinding.h"
#include "AnimationEffectTimingReadOnlyBinding.h"
#include "AnimationEventBinding.h"
#include "AnimationPlaybackEventBinding.h"
#include "AnimationTimelineBinding.h"
#include "AnonymousContentBinding.h"
#include "ArchiveReaderBinding.h"
#include "ArchiveRequestBinding.h"
#include "AttrBinding.h"
#include "AudioBufferBinding.h"
#include "AudioBufferSourceNodeBinding.h"
#include "AudioContextBinding.h"
#include "AudioDestinationNodeBinding.h"
#include "AudioListenerBinding.h"
#include "AudioNodeBinding.h"
#include "AudioParamBinding.h"
#include "AudioProcessingEventBinding.h"
#include "AudioStreamTrackBinding.h"
#include "AudioTrackBinding.h"
#include "AudioTrackListBinding.h"
#include "AutocompleteErrorEventBinding.h"
#include "BarPropBinding.h"
#include "BeforeAfterKeyboardEventBinding.h"
#include "BeforeUnloadEventBinding.h"
#include "BiquadFilterNodeBinding.h"
#include "BlobBinding.h"
#include "BlobEventBinding.h"
#include "BoxObjectBinding.h"
#include "BroadcastChannelBinding.h"
#include "BrowserElementAudioChannelBinding.h"
#include "BrowserElementProxyBinding.h"
#include "BrowserFeedWriterBinding.h"
#include "CDATASectionBinding.h"
#include "CSS2PropertiesBinding.h"
#include "CSSAnimationBinding.h"
#include "CSSBinding.h"
#include "CSSLexerBinding.h"
#include "CSSPrimitiveValueBinding.h"
#include "CSSPseudoElementBinding.h"
#include "CSSRuleListBinding.h"
#include "CSSStyleDeclarationBinding.h"
#include "CSSStyleSheetBinding.h"
#include "CSSTransitionBinding.h"
#include "CSSValueBinding.h"
#include "CSSValueListBinding.h"
#include "CacheBinding.h"
#include "CacheStorageBinding.h"
#include "CanvasCaptureMediaStreamBinding.h"
#include "CanvasRenderingContext2DBinding.h"
#include "CaretPositionBinding.h"
#include "CaretStateChangedEventBinding.h"
#include "ChannelMergerNodeBinding.h"
#include "ChannelSplitterNodeBinding.h"
#include "CharacterDataBinding.h"
#include "CheckerboardReportServiceBinding.h"
#include "ChromeNodeListBinding.h"
#include "ChromeUtilsBinding.h"
#include "ClipboardEventBinding.h"
#include "CloseEventBinding.h"
#include "CommandEventBinding.h"
#include "CommentBinding.h"
#include "CompositionEventBinding.h"
#include "ConsoleBinding.h"
#include "ConstantSourceNodeBinding.h"
#include "ConvolverNodeBinding.h"
#include "CreateOfferRequestBinding.h"
#include "CryptoBinding.h"
#include "CustomElementRegistryBinding.h"
#include "CustomEventBinding.h"
#include "DOMCursorBinding.h"
#include "DOMErrorBinding.h"
#include "DOMExceptionBinding.h"
#include "DOMImplementationBinding.h"
#include "DOMMatrixBinding.h"
#include "DOMParserBinding.h"
#include "DOMPointBinding.h"
#include "DOMQuadBinding.h"
#include "DOMRectBinding.h"
#include "DOMRectListBinding.h"
#include "DOMRequestBinding.h"
#include "DOMStringListBinding.h"
#include "DOMStringMapBinding.h"
#include "DOMTokenListBinding.h"
#include "DataChannelBinding.h"
#include "DataContainerEventBinding.h"
#include "DataTransferBinding.h"
#include "DataTransferItemBinding.h"
#include "DataTransferItemListBinding.h"
#include "DelayNodeBinding.h"
#include "DesktopNotificationBinding.h"
#include "DeviceLightEventBinding.h"
#include "DeviceMotionEventBinding.h"
#include "DeviceOrientationEventBinding.h"
#include "DeviceProximityEventBinding.h"
#include "DirectoryBinding.h"
#include "DocumentBinding.h"
#include "DocumentFragmentBinding.h"
#include "DocumentTimelineBinding.h"
#include "DocumentTypeBinding.h"
#include "DominatorTreeBinding.h"
#include "DownloadEventBinding.h"
#include "DownloadsBinding.h"
#include "DragEventBinding.h"
#include "DynamicsCompressorNodeBinding.h"
#include "ElementBinding.h"
#include "ErrorEventBinding.h"
#include "EventBinding.h"
#include "EventSourceBinding.h"
#include "EventTargetBinding.h"
#include "ExternalBinding.h"
#include "FetchObserverBinding.h"
#include "FileBinding.h"
#include "FileListBinding.h"
#include "FileReaderBinding.h"
#include "FileSystemBinding.h"
#include "FileSystemDirectoryEntryBinding.h"
#include "FileSystemDirectoryReaderBinding.h"
#include "FileSystemEntryBinding.h"
#include "FileSystemFileEntryBinding.h"
#include "FocusEventBinding.h"
#include "FontFaceBinding.h"
#include "FontFaceSetBinding.h"
#include "FontFaceSetLoadEventBinding.h"
#include "FormDataBinding.h"
#include "GainNodeBinding.h"
#include "GamepadAxisMoveEventBinding.h"
#include "GamepadBinding.h"
#include "GamepadButtonEventBinding.h"
#include "GamepadEventBinding.h"
#include "GamepadPoseBinding.h"
#include "GamepadServiceTestBinding.h"
#include "GridBinding.h"
#include "HTMLAllCollectionBinding.h"
#include "HTMLAnchorElementBinding.h"
#include "HTMLAppletElementBinding.h"
#include "HTMLAreaElementBinding.h"
#include "HTMLAudioElementBinding.h"
#include "HTMLBRElementBinding.h"
#include "HTMLBaseElementBinding.h"
#include "HTMLBodyElementBinding.h"
#include "HTMLButtonElementBinding.h"
#include "HTMLCanvasElementBinding.h"
#include "HTMLCollectionBinding.h"
#include "HTMLDListElementBinding.h"
#include "HTMLDataElementBinding.h"
#include "HTMLDataListElementBinding.h"
#include "HTMLDetailsElementBinding.h"
#include "HTMLDialogElementBinding.h"
#include "HTMLDirectoryElementBinding.h"
#include "HTMLDivElementBinding.h"
#include "HTMLDocumentBinding.h"
#include "HTMLElementBinding.h"
#include "HTMLEmbedElementBinding.h"
#include "HTMLFieldSetElementBinding.h"
#include "HTMLFontElementBinding.h"
#include "HTMLFormControlsCollectionBinding.h"
#include "HTMLFormElementBinding.h"
#include "HTMLFrameElementBinding.h"
#include "HTMLFrameSetElementBinding.h"
#include "HTMLHRElementBinding.h"
#include "HTMLHeadElementBinding.h"
#include "HTMLHeadingElementBinding.h"
#include "HTMLHtmlElementBinding.h"
#include "HTMLIFrameElementBinding.h"
#include "HTMLImageElementBinding.h"
#include "HTMLInputElementBinding.h"
#include "HTMLLIElementBinding.h"
#include "HTMLLabelElementBinding.h"
#include "HTMLLegendElementBinding.h"
#include "HTMLLinkElementBinding.h"
#include "HTMLMapElementBinding.h"
#include "HTMLMediaElementBinding.h"
#include "HTMLMenuElementBinding.h"
#include "HTMLMenuItemElementBinding.h"
#include "HTMLMetaElementBinding.h"
#include "HTMLMeterElementBinding.h"
#include "HTMLModElementBinding.h"
#include "HTMLOListElementBinding.h"
#include "HTMLObjectElementBinding.h"
#include "HTMLOptGroupElementBinding.h"
#include "HTMLOptionElementBinding.h"
#include "HTMLOptionsCollectionBinding.h"
#include "HTMLOutputElementBinding.h"
#include "HTMLParagraphElementBinding.h"
#include "HTMLParamElementBinding.h"
#include "HTMLPictureElementBinding.h"
#include "HTMLPreElementBinding.h"
#include "HTMLProgressElementBinding.h"
#include "HTMLQuoteElementBinding.h"
#include "HTMLScriptElementBinding.h"
#include "HTMLSelectElementBinding.h"
#include "HTMLSlotElementBinding.h"
#include "HTMLSourceElementBinding.h"
#include "HTMLSpanElementBinding.h"
#include "HTMLStyleElementBinding.h"
#include "HTMLTableCaptionElementBinding.h"
#include "HTMLTableCellElementBinding.h"
#include "HTMLTableColElementBinding.h"
#include "HTMLTableElementBinding.h"
#include "HTMLTableRowElementBinding.h"
#include "HTMLTableSectionElementBinding.h"
#include "HTMLTemplateElementBinding.h"
#include "HTMLTextAreaElementBinding.h"
#include "HTMLTimeElementBinding.h"
#include "HTMLTitleElementBinding.h"
#include "HTMLTrackElementBinding.h"
#include "HTMLUListElementBinding.h"
#include "HTMLVideoElementBinding.h"
#include "HashChangeEventBinding.h"
#include "HeadersBinding.h"
#include "HeapSnapshotBinding.h"
#include "HiddenPluginEventBinding.h"
#include "HistoryBinding.h"
#include "IDBCursorBinding.h"
#include "IDBDatabaseBinding.h"
#include "IDBFactoryBinding.h"
#include "IDBFileHandleBinding.h"
#include "IDBFileRequestBinding.h"
#include "IDBIndexBinding.h"
#include "IDBKeyRangeBinding.h"
#include "IDBMutableFileBinding.h"
#include "IDBObjectStoreBinding.h"
#include "IDBOpenDBRequestBinding.h"
#include "IDBRequestBinding.h"
#include "IDBTransactionBinding.h"
#include "IDBVersionChangeEventBinding.h"
#include "IIRFilterNodeBinding.h"
#include "IdleDeadlineBinding.h"
#include "ImageBitmapBinding.h"
#include "ImageBitmapRenderingContextBinding.h"
#include "ImageCaptureBinding.h"
#include "ImageCaptureErrorEventBinding.h"
#include "ImageDataBinding.h"
#include "ImageDocumentBinding.h"
#include "InputEventBinding.h"
#include "InputMethodBinding.h"
#include "InstallTriggerBinding.h"
#include "IntersectionObserverBinding.h"
#include "KeyEventBinding.h"
#include "KeyboardEventBinding.h"
#include "KeyframeEffectBinding.h"
#include "LocalMediaStreamBinding.h"
#include "LocationBinding.h"
#include "MediaDeviceInfoBinding.h"
#include "MediaDevicesBinding.h"
#include "MediaElementAudioSourceNodeBinding.h"
#include "MediaErrorBinding.h"
#include "MediaListBinding.h"
#include "MediaQueryListBinding.h"
#include "MediaQueryListEventBinding.h"
#include "MediaRecorderBinding.h"
#include "MediaSourceBinding.h"
#include "MediaStreamAudioDestinationNodeBinding.h"
#include "MediaStreamAudioSourceNodeBinding.h"
#include "MediaStreamBinding.h"
#include "MediaStreamEventBinding.h"
#include "MediaStreamListBinding.h"
#include "MediaStreamTrackBinding.h"
#include "MediaStreamTrackEventBinding.h"
#include "MenuBoxObjectBinding.h"
#include "MessageChannelBinding.h"
#include "MessageEventBinding.h"
#include "MessagePortBinding.h"
#include "MimeTypeArrayBinding.h"
#include "MimeTypeBinding.h"
#include "MouseEventBinding.h"
#include "MouseScrollEventBinding.h"
#include "MozPowerManagerBinding.h"
#include "MozSelfSupportBinding.h"
#include "MozSettingsEventBinding.h"
#include "MozSettingsTransactionEventBinding.h"
#include "MozTetheringManagerBinding.h"
#include "MozTimeManagerBinding.h"
#include "MozWakeLockBinding.h"
#include "MutationEventBinding.h"
#include "MutationObserverBinding.h"
#include "NamedNodeMapBinding.h"
#include "NavigatorBinding.h"
#include "NetworkInformationBinding.h"
#include "NodeBinding.h"
#include "NodeFilterBinding.h"
#include "NodeIteratorBinding.h"
#include "NodeListBinding.h"
#include "NotificationBinding.h"
#include "NotifyPaintEventBinding.h"
#include "OfflineAudioCompletionEventBinding.h"
#include "OfflineAudioContextBinding.h"
#include "OfflineResourceListBinding.h"
#include "OffscreenCanvasBinding.h"
#include "OscillatorNodeBinding.h"
#include "PageTransitionEventBinding.h"
#include "PaintRequestBinding.h"
#include "PaintRequestListBinding.h"
#include "PannerNodeBinding.h"
#include "PeerConnectionImplBinding.h"
#include "PeerConnectionObserverBinding.h"
#include "PerformanceBinding.h"
#include "PerformanceEntryBinding.h"
#include "PerformanceEntryEventBinding.h"
#include "PerformanceMarkBinding.h"
#include "PerformanceMeasureBinding.h"
#include "PerformanceNavigationBinding.h"
#include "PerformanceNavigationTimingBinding.h"
#include "PerformanceObserverBinding.h"
#include "PerformanceObserverEntryListBinding.h"
#include "PerformanceResourceTimingBinding.h"
#include "PerformanceTimingBinding.h"
#include "PeriodicWaveBinding.h"
#include "PermissionSettingsBinding.h"
#include "PermissionStatusBinding.h"
#include "PermissionsBinding.h"
#include "PluginArrayBinding.h"
#include "PluginBinding.h"
#include "PluginCrashedEventBinding.h"
#include "PointerEventBinding.h"
#include "PopStateEventBinding.h"
#include "PopupBlockedEventBinding.h"
#include "PopupBoxObjectBinding.h"
#include "ProcessingInstructionBinding.h"
#include "ProgressEventBinding.h"
#include "PromiseDebuggingBinding.h"
#include "PushManagerBinding.h"
#include "PushSubscriptionBinding.h"
#include "PushSubscriptionOptionsBinding.h"
#include "RGBColorBinding.h"
#include "RTCCertificateBinding.h"
#include "RTCDTMFSenderBinding.h"
#include "RTCDTMFToneChangeEventBinding.h"
#include "RTCDataChannelEventBinding.h"
#include "RTCIceCandidateBinding.h"
#include "RTCPeerConnectionBinding.h"
#include "RTCPeerConnectionIceEventBinding.h"
#include "RTCPeerConnectionStaticBinding.h"
#include "RTCRtpReceiverBinding.h"
#include "RTCRtpSenderBinding.h"
#include "RTCSessionDescriptionBinding.h"
#include "RTCStatsReportBinding.h"
#include "RTCTrackEventBinding.h"
#include "RadioNodeListBinding.h"
#include "RangeBinding.h"
#include "RecordErrorEventBinding.h"
#include "RectBinding.h"
#include "RequestBinding.h"
#include "ResizeObserverBinding.h"
#include "ResponseBinding.h"
#include "SVGAElementBinding.h"
#include "SVGAngleBinding.h"
#include "SVGAnimateElementBinding.h"
#include "SVGAnimateMotionElementBinding.h"
#include "SVGAnimateTransformElementBinding.h"
#include "SVGAnimatedAngleBinding.h"
#include "SVGAnimatedBooleanBinding.h"
#include "SVGAnimatedEnumerationBinding.h"
#include "SVGAnimatedIntegerBinding.h"
#include "SVGAnimatedLengthBinding.h"
#include "SVGAnimatedLengthListBinding.h"
#include "SVGAnimatedNumberBinding.h"
#include "SVGAnimatedNumberListBinding.h"
#include "SVGAnimatedPreserveAspectRatioBinding.h"
#include "SVGAnimatedRectBinding.h"
#include "SVGAnimatedStringBinding.h"
#include "SVGAnimatedTransformListBinding.h"
#include "SVGAnimationElementBinding.h"
#include "SVGCircleElementBinding.h"
#include "SVGClipPathElementBinding.h"
#include "SVGComponentTransferFunctionElementBinding.h"
#include "SVGDefsElementBinding.h"
#include "SVGDescElementBinding.h"
#include "SVGElementBinding.h"
#include "SVGEllipseElementBinding.h"
#include "SVGFEBlendElementBinding.h"
#include "SVGFEColorMatrixElementBinding.h"
#include "SVGFEComponentTransferElementBinding.h"
#include "SVGFECompositeElementBinding.h"
#include "SVGFEConvolveMatrixElementBinding.h"
#include "SVGFEDiffuseLightingElementBinding.h"
#include "SVGFEDisplacementMapElementBinding.h"
#include "SVGFEDistantLightElementBinding.h"
#include "SVGFEDropShadowElementBinding.h"
#include "SVGFEFloodElementBinding.h"
#include "SVGFEFuncAElementBinding.h"
#include "SVGFEFuncBElementBinding.h"
#include "SVGFEFuncGElementBinding.h"
#include "SVGFEFuncRElementBinding.h"
#include "SVGFEGaussianBlurElementBinding.h"
#include "SVGFEImageElementBinding.h"
#include "SVGFEMergeElementBinding.h"
#include "SVGFEMergeNodeElementBinding.h"
#include "SVGFEMorphologyElementBinding.h"
#include "SVGFEOffsetElementBinding.h"
#include "SVGFEPointLightElementBinding.h"
#include "SVGFESpecularLightingElementBinding.h"
#include "SVGFESpotLightElementBinding.h"
#include "SVGFETileElementBinding.h"
#include "SVGFETurbulenceElementBinding.h"
#include "SVGFilterElementBinding.h"
#include "SVGForeignObjectElementBinding.h"
#include "SVGGElementBinding.h"
#include "SVGGradientElementBinding.h"
#include "SVGGraphicsElementBinding.h"
#include "SVGImageElementBinding.h"
#include "SVGLengthBinding.h"
#include "SVGLengthListBinding.h"
#include "SVGLineElementBinding.h"
#include "SVGLinearGradientElementBinding.h"
#include "SVGMPathElementBinding.h"
#include "SVGMarkerElementBinding.h"
#include "SVGMaskElementBinding.h"
#include "SVGMatrixBinding.h"
#include "SVGMetadataElementBinding.h"
#include "SVGNumberBinding.h"
#include "SVGNumberListBinding.h"
#include "SVGPathElementBinding.h"
#include "SVGPathSegBinding.h"
#include "SVGPathSegListBinding.h"
#include "SVGPatternElementBinding.h"
#include "SVGPointBinding.h"
#include "SVGPointListBinding.h"
#include "SVGPolygonElementBinding.h"
#include "SVGPolylineElementBinding.h"
#include "SVGPreserveAspectRatioBinding.h"
#include "SVGRadialGradientElementBinding.h"
#include "SVGRectBinding.h"
#include "SVGRectElementBinding.h"
#include "SVGSVGElementBinding.h"
#include "SVGScriptElementBinding.h"
#include "SVGSetElementBinding.h"
#include "SVGStopElementBinding.h"
#include "SVGStringListBinding.h"
#include "SVGStyleElementBinding.h"
#include "SVGSwitchElementBinding.h"
#include "SVGSymbolElementBinding.h"
#include "SVGTSpanElementBinding.h"
#include "SVGTextContentElementBinding.h"
#include "SVGTextElementBinding.h"
#include "SVGTextPathElementBinding.h"
#include "SVGTextPositioningElementBinding.h"
#include "SVGTitleElementBinding.h"
#include "SVGTransformBinding.h"
#include "SVGTransformListBinding.h"
#include "SVGUnitTypesBinding.h"
#include "SVGUseElementBinding.h"
#include "SVGViewElementBinding.h"
#include "SVGZoomAndPanBinding.h"
#include "SVGZoomEventBinding.h"
#include "ScreenBinding.h"
#include "ScreenOrientationBinding.h"
#include "ScriptProcessorNodeBinding.h"
#include "ScrollAreaEventBinding.h"
#include "ScrollViewChangeEventBinding.h"
#include "SecureElementBinding.h"
#include "SecureElementManagerBinding.h"
#include "SelectionBinding.h"
#include "ServiceWorkerBinding.h"
#include "ServiceWorkerContainerBinding.h"
#include "ServiceWorkerMessageEventBinding.h"
#include "ServiceWorkerRegistrationBinding.h"
#include "SettingsManagerBinding.h"
#include "ShadowRootBinding.h"
#include "SharedWorkerBinding.h"
#include "SimpleGestureEventBinding.h"
#include "SourceBufferBinding.h"
#include "SourceBufferListBinding.h"
#include "SpeechSynthesisBinding.h"
#include "SpeechSynthesisErrorEventBinding.h"
#include "SpeechSynthesisEventBinding.h"
#include "SpeechSynthesisUtteranceBinding.h"
#include "SpeechSynthesisVoiceBinding.h"
#include "StereoPannerNodeBinding.h"
#include "StorageBinding.h"
#include "StorageEventBinding.h"
#include "StorageManagerBinding.h"
#include "StyleRuleChangeEventBinding.h"
#include "StyleSheetApplicableStateChangeEventBinding.h"
#include "StyleSheetBinding.h"
#include "StyleSheetChangeEventBinding.h"
#include "StyleSheetListBinding.h"
#include "SubtleCryptoBinding.h"
#include "SystemUpdateBinding.h"
#include "TCPServerSocketBinding.h"
#include "TCPServerSocketEventBinding.h"
#include "TCPSocketBinding.h"
#include "TCPSocketErrorEventBinding.h"
#include "TCPSocketEventBinding.h"
#include "TextBinding.h"
#include "TextClauseBinding.h"
#include "TextDecoderBinding.h"
#include "TextEncoderBinding.h"
#include "TextTrackBinding.h"
#include "TextTrackCueBinding.h"
#include "TextTrackCueListBinding.h"
#include "TextTrackListBinding.h"
#include "ThreadSafeChromeUtilsBinding.h"
#include "TimeEventBinding.h"
#include "TimeRangesBinding.h"
#include "TouchBinding.h"
#include "TouchEventBinding.h"
#include "TouchListBinding.h"
#include "TrackEventBinding.h"
#include "TransitionEventBinding.h"
#include "TreeColumnBinding.h"
#include "TreeColumnsBinding.h"
#include "TreeWalkerBinding.h"
#include "U2FBinding.h"
#include "UDPMessageEventBinding.h"
#include "UDPSocketBinding.h"
#include "UIEventBinding.h"
#include "URLBinding.h"
#include "URLSearchParamsBinding.h"
#include "UserProximityEventBinding.h"
#include "VTTCueBinding.h"
#include "VTTRegionBinding.h"
#include "ValidityStateBinding.h"
#include "VideoPlaybackQualityBinding.h"
#include "VideoStreamTrackBinding.h"
#include "VideoTrackBinding.h"
#include "VideoTrackListBinding.h"
#include "WaveShaperNodeBinding.h"
#include "WebGL2RenderingContextBinding.h"
#include "WebGLContextEventBinding.h"
#include "WebGLRenderingContextBinding.h"
#include "WebKitCSSMatrixBinding.h"
#include "WebSocketBinding.h"
#include "WebrtcDeprecatedBinding.h"
#include "WebrtcGlobalInformationBinding.h"
#include "WheelEventBinding.h"
#include "WindowBinding.h"
#include "WindowRootBinding.h"
#include "WorkerBinding.h"
#include "WorkletBinding.h"
#include "XMLDocumentBinding.h"
#include "XMLHttpRequestBinding.h"
#include "XMLHttpRequestEventTargetBinding.h"
#include "XMLHttpRequestUploadBinding.h"
#include "XMLSerializerBinding.h"
#include "XMLStylesheetProcessingInstructionBinding.h"
#include "XPathEvaluatorBinding.h"
#include "XPathExpressionBinding.h"
#include "XPathResultBinding.h"
#include "XSLTProcessorBinding.h"
#include "XULCommandEventBinding.h"
#include "XULDocumentBinding.h"
#include "XULElementBinding.h"
#include "mozilla/dom/WebIDLGlobalNameHash.h"

namespace mozilla {
namespace dom {
const uint32_t WebIDLGlobalNameHash::sCount = 627;

const char WebIDLGlobalNameHash::sNames[] =
  /* 0 */ "AbortController\0"
  /* 16 */ "AbortSignal\0"
  /* 28 */ "AccessibleNode\0"
  /* 43 */ "AnalyserNode\0"
  /* 56 */ "Animation\0"
  /* 66 */ "AnimationEffectReadOnly\0"
  /* 90 */ "AnimationEffectTiming\0"
  /* 112 */ "AnimationEffectTimingReadOnly\0"
  /* 142 */ "AnimationEvent\0"
  /* 157 */ "AnimationPlaybackEvent\0"
  /* 180 */ "AnimationTimeline\0"
  /* 198 */ "AnonymousContent\0"
  /* 215 */ "ArchiveReader\0"
  /* 229 */ "ArchiveRequest\0"
  /* 244 */ "Attr\0"
  /* 249 */ "AudioBuffer\0"
  /* 261 */ "AudioBufferSourceNode\0"
  /* 283 */ "AudioContext\0"
  /* 296 */ "AudioDestinationNode\0"
  /* 317 */ "AudioListener\0"
  /* 331 */ "AudioNode\0"
  /* 341 */ "AudioParam\0"
  /* 352 */ "AudioProcessingEvent\0"
  /* 373 */ "AudioStreamTrack\0"
  /* 390 */ "AudioTrack\0"
  /* 401 */ "AudioTrackList\0"
  /* 416 */ "AutocompleteErrorEvent\0"
  /* 439 */ "BarProp\0"
  /* 447 */ "BeforeAfterKeyboardEvent\0"
  /* 472 */ "BeforeUnloadEvent\0"
  /* 490 */ "BiquadFilterNode\0"
  /* 507 */ "Blob\0"
  /* 512 */ "BlobEvent\0"
  /* 522 */ "BoxObject\0"
  /* 532 */ "BroadcastChannel\0"
  /* 549 */ "BrowserElementAudioChannel\0"
  /* 576 */ "BrowserElementProxy\0"
  /* 596 */ "BrowserFeedWriter\0"
  /* 614 */ "CDATASection\0"
  /* 627 */ "CSS\0"
  /* 631 */ "CSS2Properties\0"
  /* 646 */ "CSSAnimation\0"
  /* 659 */ "CSSLexer\0"
  /* 668 */ "CSSPrimitiveValue\0"
  /* 686 */ "CSSPseudoElement\0"
  /* 703 */ "CSSRuleList\0"
  /* 715 */ "CSSStyleDeclaration\0"
  /* 735 */ "CSSStyleSheet\0"
  /* 749 */ "CSSTransition\0"
  /* 763 */ "CSSValue\0"
  /* 772 */ "CSSValueList\0"
  /* 785 */ "Cache\0"
  /* 791 */ "CacheStorage\0"
  /* 804 */ "CanvasCaptureMediaStream\0"
  /* 829 */ "CanvasGradient\0"
  /* 844 */ "CanvasPattern\0"
  /* 858 */ "CanvasRenderingContext2D\0"
  /* 883 */ "CaretPosition\0"
  /* 897 */ "CaretStateChangedEvent\0"
  /* 920 */ "ChannelMergerNode\0"
  /* 938 */ "ChannelSplitterNode\0"
  /* 958 */ "CharacterData\0"
  /* 972 */ "CheckerboardReportService\0"
  /* 998 */ "ChromeNodeList\0"
  /* 1013 */ "ChromeUtils\0"
  /* 1025 */ "ChromeWindow\0"
  /* 1038 */ "ChromeWorker\0"
  /* 1051 */ "ClipboardEvent\0"
  /* 1066 */ "CloseEvent\0"
  /* 1077 */ "CommandEvent\0"
  /* 1090 */ "Comment\0"
  /* 1098 */ "CompositionEvent\0"
  /* 1115 */ "ConstantSourceNode\0"
  /* 1134 */ "ConvolverNode\0"
  /* 1148 */ "CreateOfferRequest\0"
  /* 1167 */ "Crypto\0"
  /* 1174 */ "CryptoKey\0"
  /* 1184 */ "CustomElementRegistry\0"
  /* 1206 */ "CustomEvent\0"
  /* 1218 */ "DOMCursor\0"
  /* 1228 */ "DOMDownload\0"
  /* 1240 */ "DOMError\0"
  /* 1249 */ "DOMException\0"
  /* 1262 */ "DOMImplementation\0"
  /* 1280 */ "DOMMatrix\0"
  /* 1290 */ "DOMMatrixReadOnly\0"
  /* 1308 */ "DOMParser\0"
  /* 1318 */ "DOMPoint\0"
  /* 1327 */ "DOMPointReadOnly\0"
  /* 1344 */ "DOMQuad\0"
  /* 1352 */ "DOMRect\0"
  /* 1360 */ "DOMRectList\0"
  /* 1372 */ "DOMRectReadOnly\0"
  /* 1388 */ "DOMRequest\0"
  /* 1399 */ "DOMStringList\0"
  /* 1413 */ "DOMStringMap\0"
  /* 1426 */ "DOMTokenList\0"
  /* 1439 */ "DataChannel\0"
  /* 1451 */ "DataContainerEvent\0"
  /* 1470 */ "DataTransfer\0"
  /* 1483 */ "DataTransferItem\0"
  /* 1500 */ "DataTransferItemList\0"
  /* 1521 */ "DelayNode\0"
  /* 1531 */ "DesktopNotification\0"
  /* 1551 */ "DesktopNotificationCenter\0"
  /* 1577 */ "DeviceLightEvent\0"
  /* 1594 */ "DeviceMotionEvent\0"
  /* 1612 */ "DeviceOrientationEvent\0"
  /* 1635 */ "DeviceProximityEvent\0"
  /* 1656 */ "Directory\0"
  /* 1666 */ "Document\0"
  /* 1675 */ "DocumentFragment\0"
  /* 1692 */ "DocumentTimeline\0"
  /* 1709 */ "DocumentType\0"
  /* 1722 */ "DominatorTree\0"
  /* 1736 */ "DownloadEvent\0"
  /* 1750 */ "DragEvent\0"
  /* 1760 */ "DynamicsCompressorNode\0"
  /* 1783 */ "Element\0"
  /* 1791 */ "ErrorEvent\0"
  /* 1802 */ "Event\0"
  /* 1808 */ "EventSource\0"
  /* 1820 */ "EventTarget\0"
  /* 1832 */ "External\0"
  /* 1841 */ "FetchObserver\0"
  /* 1855 */ "File\0"
  /* 1860 */ "FileList\0"
  /* 1869 */ "FileReader\0"
  /* 1880 */ "FileSystem\0"
  /* 1891 */ "FileSystemDirectoryEntry\0"
  /* 1916 */ "FileSystemDirectoryReader\0"
  /* 1942 */ "FileSystemEntry\0"
  /* 1958 */ "FileSystemFileEntry\0"
  /* 1978 */ "FocusEvent\0"
  /* 1989 */ "FontFace\0"
  /* 1998 */ "FontFaceSet\0"
  /* 2010 */ "FontFaceSetLoadEvent\0"
  /* 2031 */ "FormData\0"
  /* 2040 */ "GainNode\0"
  /* 2049 */ "Gamepad\0"
  /* 2057 */ "GamepadAxisMoveEvent\0"
  /* 2078 */ "GamepadButton\0"
  /* 2092 */ "GamepadButtonEvent\0"
  /* 2111 */ "GamepadEvent\0"
  /* 2124 */ "GamepadPose\0"
  /* 2136 */ "GamepadServiceTest\0"
  /* 2155 */ "Grid\0"
  /* 2160 */ "GridArea\0"
  /* 2169 */ "GridDimension\0"
  /* 2183 */ "GridLine\0"
  /* 2192 */ "GridLines\0"
  /* 2202 */ "GridTrack\0"
  /* 2212 */ "GridTracks\0"
  /* 2223 */ "HTMLAllCollection\0"
  /* 2241 */ "HTMLAnchorElement\0"
  /* 2259 */ "HTMLAppletElement\0"
  /* 2277 */ "HTMLAreaElement\0"
  /* 2293 */ "HTMLAudioElement\0"
  /* 2310 */ "Audio\0"
  /* 2316 */ "HTMLBRElement\0"
  /* 2330 */ "HTMLBaseElement\0"
  /* 2346 */ "HTMLBodyElement\0"
  /* 2362 */ "HTMLButtonElement\0"
  /* 2380 */ "HTMLCanvasElement\0"
  /* 2398 */ "HTMLCollection\0"
  /* 2413 */ "HTMLDListElement\0"
  /* 2430 */ "HTMLDataElement\0"
  /* 2446 */ "HTMLDataListElement\0"
  /* 2466 */ "HTMLDetailsElement\0"
  /* 2485 */ "HTMLDialogElement\0"
  /* 2503 */ "HTMLDirectoryElement\0"
  /* 2524 */ "HTMLDivElement\0"
  /* 2539 */ "HTMLDocument\0"
  /* 2552 */ "HTMLElement\0"
  /* 2564 */ "HTMLEmbedElement\0"
  /* 2581 */ "HTMLFieldSetElement\0"
  /* 2601 */ "HTMLFontElement\0"
  /* 2617 */ "HTMLFormControlsCollection\0"
  /* 2644 */ "HTMLFormElement\0"
  /* 2660 */ "HTMLFrameElement\0"
  /* 2677 */ "HTMLFrameSetElement\0"
  /* 2697 */ "HTMLHRElement\0"
  /* 2711 */ "HTMLHeadElement\0"
  /* 2727 */ "HTMLHeadingElement\0"
  /* 2746 */ "HTMLHtmlElement\0"
  /* 2762 */ "HTMLIFrameElement\0"
  /* 2780 */ "HTMLImageElement\0"
  /* 2797 */ "Image\0"
  /* 2803 */ "HTMLInputElement\0"
  /* 2820 */ "HTMLLIElement\0"
  /* 2834 */ "HTMLLabelElement\0"
  /* 2851 */ "HTMLLegendElement\0"
  /* 2869 */ "HTMLLinkElement\0"
  /* 2885 */ "HTMLMapElement\0"
  /* 2900 */ "HTMLMediaElement\0"
  /* 2917 */ "HTMLMenuElement\0"
  /* 2933 */ "HTMLMenuItemElement\0"
  /* 2953 */ "HTMLMetaElement\0"
  /* 2969 */ "HTMLMeterElement\0"
  /* 2986 */ "HTMLModElement\0"
  /* 3001 */ "HTMLOListElement\0"
  /* 3018 */ "HTMLObjectElement\0"
  /* 3036 */ "HTMLOptGroupElement\0"
  /* 3056 */ "HTMLOptionElement\0"
  /* 3074 */ "Option\0"
  /* 3081 */ "HTMLOptionsCollection\0"
  /* 3103 */ "HTMLOutputElement\0"
  /* 3121 */ "HTMLParagraphElement\0"
  /* 3142 */ "HTMLParamElement\0"
  /* 3159 */ "HTMLPictureElement\0"
  /* 3178 */ "HTMLPreElement\0"
  /* 3193 */ "HTMLProgressElement\0"
  /* 3213 */ "HTMLQuoteElement\0"
  /* 3230 */ "HTMLScriptElement\0"
  /* 3248 */ "HTMLSelectElement\0"
  /* 3266 */ "HTMLSlotElement\0"
  /* 3282 */ "HTMLSourceElement\0"
  /* 3300 */ "HTMLSpanElement\0"
  /* 3316 */ "HTMLStyleElement\0"
  /* 3333 */ "HTMLTableCaptionElement\0"
  /* 3357 */ "HTMLTableCellElement\0"
  /* 3378 */ "HTMLTableColElement\0"
  /* 3398 */ "HTMLTableElement\0"
  /* 3415 */ "HTMLTableRowElement\0"
  /* 3435 */ "HTMLTableSectionElement\0"
  /* 3459 */ "HTMLTemplateElement\0"
  /* 3479 */ "HTMLTextAreaElement\0"
  /* 3499 */ "HTMLTimeElement\0"
  /* 3515 */ "HTMLTitleElement\0"
  /* 3532 */ "HTMLTrackElement\0"
  /* 3549 */ "HTMLUListElement\0"
  /* 3566 */ "HTMLUnknownElement\0"
  /* 3585 */ "HTMLVideoElement\0"
  /* 3602 */ "HashChangeEvent\0"
  /* 3618 */ "Headers\0"
  /* 3626 */ "HeapSnapshot\0"
  /* 3639 */ "HiddenPluginEvent\0"
  /* 3657 */ "History\0"
  /* 3665 */ "IDBCursor\0"
  /* 3675 */ "IDBCursorWithValue\0"
  /* 3694 */ "IDBDatabase\0"
  /* 3706 */ "IDBFactory\0"
  /* 3717 */ "IDBFileHandle\0"
  /* 3731 */ "IDBFileRequest\0"
  /* 3746 */ "IDBIndex\0"
  /* 3755 */ "IDBKeyRange\0"
  /* 3767 */ "IDBLocaleAwareKeyRange\0"
  /* 3790 */ "IDBMutableFile\0"
  /* 3805 */ "IDBObjectStore\0"
  /* 3820 */ "IDBOpenDBRequest\0"
  /* 3837 */ "IDBRequest\0"
  /* 3848 */ "IDBTransaction\0"
  /* 3863 */ "IDBVersionChangeEvent\0"
  /* 3885 */ "IIRFilterNode\0"
  /* 3899 */ "IdleDeadline\0"
  /* 3912 */ "ImageBitmap\0"
  /* 3924 */ "ImageBitmapRenderingContext\0"
  /* 3952 */ "ImageCapture\0"
  /* 3965 */ "ImageCaptureErrorEvent\0"
  /* 3988 */ "ImageData\0"
  /* 3998 */ "ImageDocument\0"
  /* 4012 */ "InputEvent\0"
  /* 4023 */ "InstallTriggerImpl\0"
  /* 4042 */ "IntersectionObserver\0"
  /* 4063 */ "IntersectionObserverEntry\0"
  /* 4089 */ "KeyEvent\0"
  /* 4098 */ "KeyboardEvent\0"
  /* 4112 */ "KeyframeEffect\0"
  /* 4127 */ "KeyframeEffectReadOnly\0"
  /* 4150 */ "LocalMediaStream\0"
  /* 4167 */ "Location\0"
  /* 4176 */ "MediaDeviceInfo\0"
  /* 4192 */ "MediaDevices\0"
  /* 4205 */ "MediaElementAudioSourceNode\0"
  /* 4233 */ "MediaError\0"
  /* 4244 */ "MediaList\0"
  /* 4254 */ "MediaQueryList\0"
  /* 4269 */ "MediaQueryListEvent\0"
  /* 4289 */ "MediaRecorder\0"
  /* 4303 */ "MediaSource\0"
  /* 4315 */ "MediaStream\0"
  /* 4327 */ "MediaStreamAudioDestinationNode\0"
  /* 4359 */ "MediaStreamAudioSourceNode\0"
  /* 4386 */ "MediaStreamEvent\0"
  /* 4403 */ "MediaStreamList\0"
  /* 4419 */ "MediaStreamTrack\0"
  /* 4436 */ "MediaStreamTrackEvent\0"
  /* 4458 */ "MenuBoxObject\0"
  /* 4472 */ "MessageChannel\0"
  /* 4487 */ "MessageEvent\0"
  /* 4500 */ "MessagePort\0"
  /* 4512 */ "MimeType\0"
  /* 4521 */ "MimeTypeArray\0"
  /* 4535 */ "MouseEvent\0"
  /* 4546 */ "MouseScrollEvent\0"
  /* 4563 */ "MozCanvasPrintState\0"
  /* 4583 */ "MozHardwareInput\0"
  /* 4600 */ "MozInputContext\0"
  /* 4616 */ "MozInputContextFocusEventDetail\0"
  /* 4648 */ "MozInputContextSelectionChangeEventDetail\0"
  /* 4690 */ "MozInputContextSurroundingTextChangeEventDetail\0"
  /* 4738 */ "MozInputMethod\0"
  /* 4753 */ "MozInputMethodManager\0"
  /* 4775 */ "MozInputRegistryEventDetail\0"
  /* 4803 */ "MozPowerManager\0"
  /* 4819 */ "MozSelfSupport\0"
  /* 4834 */ "MozSettingsEvent\0"
  /* 4851 */ "MozSettingsTransactionEvent\0"
  /* 4879 */ "MozTetheringManager\0"
  /* 4899 */ "MozTimeManager\0"
  /* 4914 */ "MozWakeLock\0"
  /* 4926 */ "MutationEvent\0"
  /* 4940 */ "MutationObserver\0"
  /* 4957 */ "MutationRecord\0"
  /* 4972 */ "NamedNodeMap\0"
  /* 4985 */ "Navigator\0"
  /* 4995 */ "NetworkInformation\0"
  /* 5014 */ "Node\0"
  /* 5019 */ "NodeFilter\0"
  /* 5030 */ "NodeIterator\0"
  /* 5043 */ "NodeList\0"
  /* 5052 */ "Notification\0"
  /* 5065 */ "NotifyPaintEvent\0"
  /* 5082 */ "OfflineAudioCompletionEvent\0"
  /* 5110 */ "OfflineAudioContext\0"
  /* 5130 */ "OfflineResourceList\0"
  /* 5150 */ "OffscreenCanvas\0"
  /* 5166 */ "OscillatorNode\0"
  /* 5181 */ "PageTransitionEvent\0"
  /* 5201 */ "PaintRequest\0"
  /* 5214 */ "PaintRequestList\0"
  /* 5231 */ "PannerNode\0"
  /* 5242 */ "Path2D\0"
  /* 5249 */ "PeerConnectionImpl\0"
  /* 5268 */ "PeerConnectionObserver\0"
  /* 5291 */ "Performance\0"
  /* 5303 */ "PerformanceEntry\0"
  /* 5320 */ "PerformanceEntryEvent\0"
  /* 5342 */ "PerformanceMark\0"
  /* 5358 */ "PerformanceMeasure\0"
  /* 5377 */ "PerformanceNavigation\0"
  /* 5399 */ "PerformanceNavigationTiming\0"
  /* 5427 */ "PerformanceObserver\0"
  /* 5447 */ "PerformanceObserverEntryList\0"
  /* 5476 */ "PerformanceResourceTiming\0"
  /* 5502 */ "PerformanceTiming\0"
  /* 5520 */ "PeriodicWave\0"
  /* 5533 */ "PermissionSettings\0"
  /* 5552 */ "PermissionStatus\0"
  /* 5569 */ "Permissions\0"
  /* 5581 */ "Plugin\0"
  /* 5588 */ "PluginArray\0"
  /* 5600 */ "PluginCrashedEvent\0"
  /* 5619 */ "PointerEvent\0"
  /* 5632 */ "PopStateEvent\0"
  /* 5646 */ "PopupBlockedEvent\0"
  /* 5664 */ "PopupBoxObject\0"
  /* 5679 */ "ProcessingInstruction\0"
  /* 5701 */ "ProgressEvent\0"
  /* 5715 */ "PromiseDebugging\0"
  /* 5732 */ "PushManager\0"
  /* 5744 */ "PushManagerImpl\0"
  /* 5760 */ "PushSubscription\0"
  /* 5777 */ "PushSubscriptionOptions\0"
  /* 5801 */ "RGBColor\0"
  /* 5810 */ "RTCCertificate\0"
  /* 5825 */ "RTCDTMFSender\0"
  /* 5839 */ "RTCDTMFToneChangeEvent\0"
  /* 5862 */ "RTCDataChannelEvent\0"
  /* 5882 */ "RTCIceCandidate\0"
  /* 5898 */ "RTCPeerConnection\0"
  /* 5916 */ "RTCPeerConnectionIceEvent\0"
  /* 5942 */ "RTCPeerConnectionStatic\0"
  /* 5966 */ "RTCRtpReceiver\0"
  /* 5981 */ "RTCRtpSender\0"
  /* 5994 */ "RTCSessionDescription\0"
  /* 6016 */ "RTCStatsReport\0"
  /* 6031 */ "RTCTrackEvent\0"
  /* 6045 */ "RadioNodeList\0"
  /* 6059 */ "Range\0"
  /* 6065 */ "RecordErrorEvent\0"
  /* 6082 */ "Rect\0"
  /* 6087 */ "Request\0"
  /* 6095 */ "ResizeObservation\0"
  /* 6113 */ "ResizeObserver\0"
  /* 6128 */ "ResizeObserverEntry\0"
  /* 6148 */ "ResizeObserverSize\0"
  /* 6167 */ "Response\0"
  /* 6176 */ "SEChannel\0"
  /* 6186 */ "SEReader\0"
  /* 6195 */ "SEResponse\0"
  /* 6206 */ "SESession\0"
  /* 6216 */ "SVGAElement\0"
  /* 6228 */ "SVGAngle\0"
  /* 6237 */ "SVGAnimateElement\0"
  /* 6255 */ "SVGAnimateMotionElement\0"
  /* 6279 */ "SVGAnimateTransformElement\0"
  /* 6306 */ "SVGAnimatedAngle\0"
  /* 6323 */ "SVGAnimatedBoolean\0"
  /* 6342 */ "SVGAnimatedEnumeration\0"
  /* 6365 */ "SVGAnimatedInteger\0"
  /* 6384 */ "SVGAnimatedLength\0"
  /* 6402 */ "SVGAnimatedLengthList\0"
  /* 6424 */ "SVGAnimatedNumber\0"
  /* 6442 */ "SVGAnimatedNumberList\0"
  /* 6464 */ "SVGAnimatedPreserveAspectRatio\0"
  /* 6495 */ "SVGAnimatedRect\0"
  /* 6511 */ "SVGAnimatedString\0"
  /* 6529 */ "SVGAnimatedTransformList\0"
  /* 6554 */ "SVGAnimationElement\0"
  /* 6574 */ "SVGCircleElement\0"
  /* 6591 */ "SVGClipPathElement\0"
  /* 6610 */ "SVGComponentTransferFunctionElement\0"
  /* 6646 */ "SVGDefsElement\0"
  /* 6661 */ "SVGDescElement\0"
  /* 6676 */ "SVGElement\0"
  /* 6687 */ "SVGEllipseElement\0"
  /* 6705 */ "SVGFEBlendElement\0"
  /* 6723 */ "SVGFEColorMatrixElement\0"
  /* 6747 */ "SVGFEComponentTransferElement\0"
  /* 6777 */ "SVGFECompositeElement\0"
  /* 6799 */ "SVGFEConvolveMatrixElement\0"
  /* 6826 */ "SVGFEDiffuseLightingElement\0"
  /* 6854 */ "SVGFEDisplacementMapElement\0"
  /* 6882 */ "SVGFEDistantLightElement\0"
  /* 6907 */ "SVGFEDropShadowElement\0"
  /* 6930 */ "SVGFEFloodElement\0"
  /* 6948 */ "SVGFEFuncAElement\0"
  /* 6966 */ "SVGFEFuncBElement\0"
  /* 6984 */ "SVGFEFuncGElement\0"
  /* 7002 */ "SVGFEFuncRElement\0"
  /* 7020 */ "SVGFEGaussianBlurElement\0"
  /* 7045 */ "SVGFEImageElement\0"
  /* 7063 */ "SVGFEMergeElement\0"
  /* 7081 */ "SVGFEMergeNodeElement\0"
  /* 7103 */ "SVGFEMorphologyElement\0"
  /* 7126 */ "SVGFEOffsetElement\0"
  /* 7145 */ "SVGFEPointLightElement\0"
  /* 7168 */ "SVGFESpecularLightingElement\0"
  /* 7197 */ "SVGFESpotLightElement\0"
  /* 7219 */ "SVGFETileElement\0"
  /* 7236 */ "SVGFETurbulenceElement\0"
  /* 7259 */ "SVGFilterElement\0"
  /* 7276 */ "SVGForeignObjectElement\0"
  /* 7300 */ "SVGGElement\0"
  /* 7312 */ "SVGGradientElement\0"
  /* 7331 */ "SVGGraphicsElement\0"
  /* 7350 */ "SVGImageElement\0"
  /* 7366 */ "SVGLength\0"
  /* 7376 */ "SVGLengthList\0"
  /* 7390 */ "SVGLineElement\0"
  /* 7405 */ "SVGLinearGradientElement\0"
  /* 7430 */ "SVGMPathElement\0"
  /* 7446 */ "SVGMarkerElement\0"
  /* 7463 */ "SVGMaskElement\0"
  /* 7478 */ "SVGMatrix\0"
  /* 7488 */ "SVGMetadataElement\0"
  /* 7507 */ "SVGNumber\0"
  /* 7517 */ "SVGNumberList\0"
  /* 7531 */ "SVGPathElement\0"
  /* 7546 */ "SVGPathSeg\0"
  /* 7557 */ "SVGPathSegArcAbs\0"
  /* 7574 */ "SVGPathSegArcRel\0"
  /* 7591 */ "SVGPathSegClosePath\0"
  /* 7611 */ "SVGPathSegCurvetoCubicAbs\0"
  /* 7637 */ "SVGPathSegCurvetoCubicRel\0"
  /* 7663 */ "SVGPathSegCurvetoCubicSmoothAbs\0"
  /* 7695 */ "SVGPathSegCurvetoCubicSmoothRel\0"
  /* 7727 */ "SVGPathSegCurvetoQuadraticAbs\0"
  /* 7757 */ "SVGPathSegCurvetoQuadraticRel\0"
  /* 7787 */ "SVGPathSegCurvetoQuadraticSmoothAbs\0"
  /* 7823 */ "SVGPathSegCurvetoQuadraticSmoothRel\0"
  /* 7859 */ "SVGPathSegLinetoAbs\0"
  /* 7879 */ "SVGPathSegLinetoHorizontalAbs\0"
  /* 7909 */ "SVGPathSegLinetoHorizontalRel\0"
  /* 7939 */ "SVGPathSegLinetoRel\0"
  /* 7959 */ "SVGPathSegLinetoVerticalAbs\0"
  /* 7987 */ "SVGPathSegLinetoVerticalRel\0"
  /* 8015 */ "SVGPathSegList\0"
  /* 8030 */ "SVGPathSegMovetoAbs\0"
  /* 8050 */ "SVGPathSegMovetoRel\0"
  /* 8070 */ "SVGPatternElement\0"
  /* 8088 */ "SVGPoint\0"
  /* 8097 */ "SVGPointList\0"
  /* 8110 */ "SVGPolygonElement\0"
  /* 8128 */ "SVGPolylineElement\0"
  /* 8147 */ "SVGPreserveAspectRatio\0"
  /* 8170 */ "SVGRadialGradientElement\0"
  /* 8195 */ "SVGRect\0"
  /* 8203 */ "SVGRectElement\0"
  /* 8218 */ "SVGSVGElement\0"
  /* 8232 */ "SVGScriptElement\0"
  /* 8249 */ "SVGSetElement\0"
  /* 8263 */ "SVGStopElement\0"
  /* 8278 */ "SVGStringList\0"
  /* 8292 */ "SVGStyleElement\0"
  /* 8308 */ "SVGSwitchElement\0"
  /* 8325 */ "SVGSymbolElement\0"
  /* 8342 */ "SVGTSpanElement\0"
  /* 8358 */ "SVGTextContentElement\0"
  /* 8380 */ "SVGTextElement\0"
  /* 8395 */ "SVGTextPathElement\0"
  /* 8414 */ "SVGTextPositioningElement\0"
  /* 8440 */ "SVGTitleElement\0"
  /* 8456 */ "SVGTransform\0"
  /* 8469 */ "SVGTransformList\0"
  /* 8486 */ "SVGUnitTypes\0"
  /* 8499 */ "SVGUseElement\0"
  /* 8513 */ "SVGViewElement\0"
  /* 8528 */ "SVGZoomAndPan\0"
  /* 8542 */ "SVGZoomEvent\0"
  /* 8555 */ "Screen\0"
  /* 8562 */ "ScreenOrientation\0"
  /* 8580 */ "ScriptProcessorNode\0"
  /* 8600 */ "ScrollAreaEvent\0"
  /* 8616 */ "ScrollViewChangeEvent\0"
  /* 8638 */ "Selection\0"
  /* 8648 */ "ServiceWorker\0"
  /* 8662 */ "ServiceWorkerContainer\0"
  /* 8685 */ "ServiceWorkerMessageEvent\0"
  /* 8711 */ "ServiceWorkerRegistration\0"
  /* 8737 */ "SettingsLock\0"
  /* 8750 */ "SettingsManager\0"
  /* 8766 */ "ShadowRoot\0"
  /* 8777 */ "SharedWorker\0"
  /* 8790 */ "SimpleGestureEvent\0"
  /* 8809 */ "SourceBuffer\0"
  /* 8822 */ "SourceBufferList\0"
  /* 8839 */ "SpeechSynthesis\0"
  /* 8855 */ "SpeechSynthesisErrorEvent\0"
  /* 8881 */ "SpeechSynthesisEvent\0"
  /* 8902 */ "SpeechSynthesisUtterance\0"
  /* 8927 */ "SpeechSynthesisVoice\0"
  /* 8948 */ "StereoPannerNode\0"
  /* 8965 */ "Storage\0"
  /* 8973 */ "StorageEvent\0"
  /* 8986 */ "StorageManager\0"
  /* 9001 */ "StyleRuleChangeEvent\0"
  /* 9022 */ "StyleSheet\0"
  /* 9033 */ "StyleSheetApplicableStateChangeEvent\0"
  /* 9070 */ "StyleSheetChangeEvent\0"
  /* 9092 */ "StyleSheetList\0"
  /* 9107 */ "SubtleCrypto\0"
  /* 9120 */ "SystemUpdateManager\0"
  /* 9140 */ "SystemUpdateProvider\0"
  /* 9161 */ "TCPServerSocket\0"
  /* 9177 */ "TCPServerSocketEvent\0"
  /* 9198 */ "TCPSocket\0"
  /* 9208 */ "TCPSocketErrorEvent\0"
  /* 9228 */ "TCPSocketEvent\0"
  /* 9243 */ "Text\0"
  /* 9248 */ "TextClause\0"
  /* 9259 */ "TextDecoder\0"
  /* 9271 */ "TextEncoder\0"
  /* 9283 */ "TextMetrics\0"
  /* 9295 */ "TextTrack\0"
  /* 9305 */ "TextTrackCue\0"
  /* 9318 */ "TextTrackCueList\0"
  /* 9335 */ "TextTrackList\0"
  /* 9349 */ "ThreadSafeChromeUtils\0"
  /* 9371 */ "TimeEvent\0"
  /* 9381 */ "TimeRanges\0"
  /* 9392 */ "Touch\0"
  /* 9398 */ "TouchEvent\0"
  /* 9409 */ "TouchList\0"
  /* 9419 */ "TrackEvent\0"
  /* 9430 */ "TransitionEvent\0"
  /* 9446 */ "TreeColumn\0"
  /* 9457 */ "TreeColumns\0"
  /* 9469 */ "TreeWalker\0"
  /* 9480 */ "U2F\0"
  /* 9484 */ "UDPMessageEvent\0"
  /* 9500 */ "UDPSocket\0"
  /* 9510 */ "UIEvent\0"
  /* 9518 */ "URL\0"
  /* 9522 */ "URLSearchParams\0"
  /* 9538 */ "UserProximityEvent\0"
  /* 9557 */ "VTTCue\0"
  /* 9564 */ "VTTRegion\0"
  /* 9574 */ "ValidityState\0"
  /* 9588 */ "VideoPlaybackQuality\0"
  /* 9609 */ "VideoStreamTrack\0"
  /* 9626 */ "VideoTrack\0"
  /* 9637 */ "VideoTrackList\0"
  /* 9652 */ "WaveShaperNode\0"
  /* 9667 */ "WebGL2RenderingContext\0"
  /* 9690 */ "WebGLActiveInfo\0"
  /* 9706 */ "WebGLBuffer\0"
  /* 9718 */ "WebGLContextEvent\0"
  /* 9736 */ "WebGLFramebuffer\0"
  /* 9753 */ "WebGLProgram\0"
  /* 9766 */ "WebGLQuery\0"
  /* 9777 */ "WebGLRenderbuffer\0"
  /* 9795 */ "WebGLRenderingContext\0"
  /* 9817 */ "WebGLSampler\0"
  /* 9830 */ "WebGLShader\0"
  /* 9842 */ "WebGLShaderPrecisionFormat\0"
  /* 9869 */ "WebGLSync\0"
  /* 9879 */ "WebGLTexture\0"
  /* 9892 */ "WebGLTransformFeedback\0"
  /* 9915 */ "WebGLUniformLocation\0"
  /* 9936 */ "WebGLVertexArrayObject\0"
  /* 9959 */ "WebKitCSSMatrix\0"
  /* 9975 */ "WebSocket\0"
  /* 9985 */ "WebrtcGlobalInformation\0"
  /* 10009 */ "WheelEvent\0"
  /* 10020 */ "Window\0"
  /* 10027 */ "WindowRoot\0"
  /* 10038 */ "Worker\0"
  /* 10045 */ "Worklet\0"
  /* 10053 */ "XMLDocument\0"
  /* 10065 */ "XMLHttpRequest\0"
  /* 10080 */ "XMLHttpRequestEventTarget\0"
  /* 10106 */ "XMLHttpRequestUpload\0"
  /* 10127 */ "XMLSerializer\0"
  /* 10141 */ "XMLStylesheetProcessingInstruction\0"
  /* 10176 */ "XPathEvaluator\0"
  /* 10191 */ "XPathExpression\0"
  /* 10207 */ "XPathResult\0"
  /* 10219 */ "XSLTProcessor\0"
  /* 10233 */ "XULCommandEvent\0"
  /* 10249 */ "XULDocument\0"
  /* 10261 */ "XULElement\0"
  /* 10272 */ "console\0"
  /* 10280 */ "mozRTCIceCandidate\0"
  /* 10299 */ "mozRTCPeerConnection\0"
  /* 10320 */ "mozRTCSessionDescription\0";

void
RegisterWebIDLGlobalNames()
{
  WebIDLGlobalNameHash::Register(0, 15, AbortControllerBinding::DefineDOMInterface, AbortControllerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(16, 11, AbortSignalBinding::DefineDOMInterface, AbortSignalBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(28, 14, AccessibleNodeBinding::DefineDOMInterface, AccessibleNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(43, 12, AnalyserNodeBinding::DefineDOMInterface, AnalyserNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(56, 9, AnimationBinding::DefineDOMInterface, AnimationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(66, 23, AnimationEffectReadOnlyBinding::DefineDOMInterface, AnimationEffectReadOnlyBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(90, 21, AnimationEffectTimingBinding::DefineDOMInterface, AnimationEffectTimingBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(112, 29, AnimationEffectTimingReadOnlyBinding::DefineDOMInterface, AnimationEffectTimingReadOnlyBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(142, 14, AnimationEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(157, 22, AnimationPlaybackEventBinding::DefineDOMInterface, AnimationPlaybackEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(180, 17, AnimationTimelineBinding::DefineDOMInterface, AnimationTimelineBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(198, 16, AnonymousContentBinding::DefineDOMInterface, AnonymousContentBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(215, 13, ArchiveReaderBinding::DefineDOMInterface, ArchiveReaderBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(229, 14, ArchiveRequestBinding::DefineDOMInterface, ArchiveRequestBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(244, 4, AttrBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(249, 11, AudioBufferBinding::DefineDOMInterface, AudioBufferBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(261, 21, AudioBufferSourceNodeBinding::DefineDOMInterface, AudioBufferSourceNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(283, 12, AudioContextBinding::DefineDOMInterface, AudioContextBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(296, 20, AudioDestinationNodeBinding::DefineDOMInterface, AudioDestinationNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(317, 13, AudioListenerBinding::DefineDOMInterface, AudioListenerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(331, 9, AudioNodeBinding::DefineDOMInterface, AudioNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(341, 10, AudioParamBinding::DefineDOMInterface, AudioParamBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(352, 20, AudioProcessingEventBinding::DefineDOMInterface, AudioProcessingEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(373, 16, AudioStreamTrackBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(390, 10, AudioTrackBinding::DefineDOMInterface, AudioTrackBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(401, 14, AudioTrackListBinding::DefineDOMInterface, AudioTrackListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(416, 22, AutocompleteErrorEventBinding::DefineDOMInterface, AutocompleteErrorEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(439, 7, BarPropBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(447, 24, BeforeAfterKeyboardEventBinding::DefineDOMInterface, BeforeAfterKeyboardEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(472, 17, BeforeUnloadEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(490, 16, BiquadFilterNodeBinding::DefineDOMInterface, BiquadFilterNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(507, 4, BlobBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(512, 9, BlobEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(522, 9, BoxObjectBinding::DefineDOMInterface, BoxObjectBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(532, 16, BroadcastChannelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(549, 26, BrowserElementAudioChannelBinding::DefineDOMInterface, BrowserElementAudioChannelBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(576, 19, BrowserElementProxyBinding::DefineDOMInterface, BrowserElementProxyBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(596, 17, BrowserFeedWriterBinding::DefineDOMInterface, BrowserFeedWriterBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(614, 12, CDATASectionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(627, 3, CSSBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(631, 14, CSS2PropertiesBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(646, 12, CSSAnimationBinding::DefineDOMInterface, CSSAnimationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(659, 8, CSSLexerBinding::DefineDOMInterface, CSSLexerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(668, 17, CSSPrimitiveValueBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(686, 16, CSSPseudoElementBinding::DefineDOMInterface, CSSPseudoElementBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(703, 11, CSSRuleListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(715, 19, CSSStyleDeclarationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(735, 13, CSSStyleSheetBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(749, 13, CSSTransitionBinding::DefineDOMInterface, CSSTransitionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(763, 8, CSSValueBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(772, 12, CSSValueListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(785, 5, CacheBinding::DefineDOMInterface, CacheBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(791, 12, CacheStorageBinding::DefineDOMInterface, CacheStorageBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(804, 24, CanvasCaptureMediaStreamBinding::DefineDOMInterface, CanvasCaptureMediaStreamBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(829, 14, CanvasGradientBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(844, 13, CanvasPatternBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(858, 24, CanvasRenderingContext2DBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(883, 13, CaretPositionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(897, 22, CaretStateChangedEventBinding::DefineDOMInterface, CaretStateChangedEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(920, 17, ChannelMergerNodeBinding::DefineDOMInterface, ChannelMergerNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(938, 19, ChannelSplitterNodeBinding::DefineDOMInterface, ChannelSplitterNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(958, 13, CharacterDataBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(972, 25, CheckerboardReportServiceBinding::DefineDOMInterface, CheckerboardReportServiceBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(998, 14, ChromeNodeListBinding::DefineDOMInterface, ChromeNodeListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1013, 11, ChromeUtilsBinding::DefineDOMInterface, ChromeUtilsBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1025, 12, ChromeWindowBinding::DefineDOMInterface, ChromeWindowBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1038, 12, ChromeWorkerBinding::DefineDOMInterface, ChromeWorkerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1051, 14, ClipboardEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1066, 10, CloseEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1077, 12, CommandEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1090, 7, CommentBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1098, 16, CompositionEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1115, 18, ConstantSourceNodeBinding::DefineDOMInterface, ConstantSourceNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1134, 13, ConvolverNodeBinding::DefineDOMInterface, ConvolverNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1148, 18, CreateOfferRequestBinding::DefineDOMInterface, CreateOfferRequestBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1167, 6, CryptoBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1174, 9, CryptoKeyBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1184, 21, CustomElementRegistryBinding::DefineDOMInterface, CustomElementRegistryBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1206, 11, CustomEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1218, 9, DOMCursorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1228, 11, DOMDownloadBinding::DefineDOMInterface, DOMDownloadBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1240, 8, DOMErrorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1249, 12, DOMExceptionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1262, 17, DOMImplementationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1280, 9, DOMMatrixBinding::DefineDOMInterface, DOMMatrixBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1290, 17, DOMMatrixReadOnlyBinding::DefineDOMInterface, DOMMatrixReadOnlyBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1308, 9, DOMParserBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1318, 8, DOMPointBinding::DefineDOMInterface, DOMPointBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1327, 16, DOMPointReadOnlyBinding::DefineDOMInterface, DOMPointReadOnlyBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1344, 7, DOMQuadBinding::DefineDOMInterface, DOMQuadBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1352, 7, DOMRectBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1360, 11, DOMRectListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1372, 15, DOMRectReadOnlyBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1388, 10, DOMRequestBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1399, 13, DOMStringListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1413, 12, DOMStringMapBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1426, 12, DOMTokenListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1439, 11, DataChannelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1451, 18, DataContainerEventBinding::DefineDOMInterface, DataContainerEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1470, 12, DataTransferBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1483, 16, DataTransferItemBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1500, 20, DataTransferItemListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1521, 9, DelayNodeBinding::DefineDOMInterface, DelayNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1531, 19, DesktopNotificationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1551, 25, DesktopNotificationCenterBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1577, 16, DeviceLightEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1594, 17, DeviceMotionEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1612, 22, DeviceOrientationEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1635, 20, DeviceProximityEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1656, 9, DirectoryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1666, 8, DocumentBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1675, 16, DocumentFragmentBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1692, 16, DocumentTimelineBinding::DefineDOMInterface, DocumentTimelineBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1709, 12, DocumentTypeBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1722, 13, DominatorTreeBinding::DefineDOMInterface, DominatorTreeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1736, 13, DownloadEventBinding::DefineDOMInterface, DownloadEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1750, 9, DragEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1760, 22, DynamicsCompressorNodeBinding::DefineDOMInterface, DynamicsCompressorNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1783, 7, ElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1791, 10, ErrorEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1802, 5, EventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1808, 11, EventSourceBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1820, 11, EventTargetBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1832, 8, ExternalBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1841, 13, FetchObserverBinding::DefineDOMInterface, FetchObserverBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1855, 4, FileBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1860, 8, FileListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1869, 10, FileReaderBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1880, 10, FileSystemBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1891, 24, FileSystemDirectoryEntryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1916, 25, FileSystemDirectoryReaderBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1942, 15, FileSystemEntryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1958, 19, FileSystemFileEntryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1978, 10, FocusEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(1989, 8, FontFaceBinding::DefineDOMInterface, FontFaceBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(1998, 11, FontFaceSetBinding::DefineDOMInterface, FontFaceSetBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2010, 20, FontFaceSetLoadEventBinding::DefineDOMInterface, FontFaceSetLoadEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2031, 8, FormDataBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2040, 8, GainNodeBinding::DefineDOMInterface, GainNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2049, 7, GamepadBinding::DefineDOMInterface, GamepadBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2057, 20, GamepadAxisMoveEventBinding::DefineDOMInterface, GamepadAxisMoveEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2078, 13, GamepadButtonBinding::DefineDOMInterface, GamepadButtonBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2092, 18, GamepadButtonEventBinding::DefineDOMInterface, GamepadButtonEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2111, 12, GamepadEventBinding::DefineDOMInterface, GamepadEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2124, 11, GamepadPoseBinding::DefineDOMInterface, GamepadPoseBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2136, 18, GamepadServiceTestBinding::DefineDOMInterface, GamepadServiceTestBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2155, 4, GridBinding::DefineDOMInterface, GridBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2160, 8, GridAreaBinding::DefineDOMInterface, GridAreaBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2169, 13, GridDimensionBinding::DefineDOMInterface, GridDimensionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2183, 8, GridLineBinding::DefineDOMInterface, GridLineBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2192, 9, GridLinesBinding::DefineDOMInterface, GridLinesBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2202, 9, GridTrackBinding::DefineDOMInterface, GridTrackBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2212, 10, GridTracksBinding::DefineDOMInterface, GridTracksBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2223, 17, HTMLAllCollectionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2241, 17, HTMLAnchorElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2259, 17, HTMLAppletElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2277, 15, HTMLAreaElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2293, 16, HTMLAudioElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2310, 5, HTMLAudioElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2316, 13, HTMLBRElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2330, 15, HTMLBaseElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2346, 15, HTMLBodyElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2362, 17, HTMLButtonElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2380, 17, HTMLCanvasElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2398, 14, HTMLCollectionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2413, 16, HTMLDListElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2430, 15, HTMLDataElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2446, 19, HTMLDataListElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2466, 18, HTMLDetailsElementBinding::DefineDOMInterface, HTMLDetailsElementBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2485, 17, HTMLDialogElementBinding::DefineDOMInterface, HTMLDialogElementBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2503, 20, HTMLDirectoryElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2524, 14, HTMLDivElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2539, 12, HTMLDocumentBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2552, 11, HTMLElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2564, 16, HTMLEmbedElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2581, 19, HTMLFieldSetElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2601, 15, HTMLFontElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2617, 26, HTMLFormControlsCollectionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2644, 15, HTMLFormElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2660, 16, HTMLFrameElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2677, 19, HTMLFrameSetElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2697, 13, HTMLHRElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2711, 15, HTMLHeadElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2727, 18, HTMLHeadingElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2746, 15, HTMLHtmlElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2762, 17, HTMLIFrameElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2780, 16, HTMLImageElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2797, 5, HTMLImageElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2803, 16, HTMLInputElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2820, 13, HTMLLIElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2834, 16, HTMLLabelElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2851, 17, HTMLLegendElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2869, 15, HTMLLinkElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2885, 14, HTMLMapElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2900, 16, HTMLMediaElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2917, 15, HTMLMenuElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2933, 19, HTMLMenuItemElementBinding::DefineDOMInterface, HTMLMenuItemElementBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(2953, 15, HTMLMetaElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2969, 16, HTMLMeterElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(2986, 14, HTMLModElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3001, 16, HTMLOListElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3018, 17, HTMLObjectElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3036, 19, HTMLOptGroupElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3056, 17, HTMLOptionElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3074, 6, HTMLOptionElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3081, 21, HTMLOptionsCollectionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3103, 17, HTMLOutputElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3121, 20, HTMLParagraphElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3142, 16, HTMLParamElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3159, 18, HTMLPictureElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3178, 14, HTMLPreElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3193, 19, HTMLProgressElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3213, 16, HTMLQuoteElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3230, 17, HTMLScriptElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3248, 17, HTMLSelectElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3266, 15, HTMLSlotElementBinding::DefineDOMInterface, HTMLSlotElementBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3282, 17, HTMLSourceElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3300, 15, HTMLSpanElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3316, 16, HTMLStyleElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3333, 23, HTMLTableCaptionElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3357, 20, HTMLTableCellElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3378, 19, HTMLTableColElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3398, 16, HTMLTableElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3415, 19, HTMLTableRowElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3435, 23, HTMLTableSectionElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3459, 19, HTMLTemplateElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3479, 19, HTMLTextAreaElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3499, 15, HTMLTimeElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3515, 16, HTMLTitleElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3532, 16, HTMLTrackElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3549, 16, HTMLUListElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3566, 18, HTMLUnknownElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3585, 16, HTMLVideoElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3602, 15, HashChangeEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3618, 7, HeadersBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3626, 12, HeapSnapshotBinding::DefineDOMInterface, HeapSnapshotBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3639, 17, HiddenPluginEventBinding::DefineDOMInterface, HiddenPluginEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3657, 7, HistoryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3665, 9, IDBCursorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3675, 18, IDBCursorWithValueBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3694, 11, IDBDatabaseBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3706, 10, IDBFactoryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3717, 13, IDBFileHandleBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3731, 14, IDBFileRequestBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3746, 8, IDBIndexBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3755, 11, IDBKeyRangeBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3767, 22, IDBLocaleAwareKeyRangeBinding::DefineDOMInterface, IDBLocaleAwareKeyRangeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3790, 14, IDBMutableFileBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3805, 14, IDBObjectStoreBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3820, 16, IDBOpenDBRequestBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3837, 10, IDBRequestBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3848, 14, IDBTransactionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3863, 21, IDBVersionChangeEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3885, 13, IIRFilterNodeBinding::DefineDOMInterface, IIRFilterNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3899, 12, IdleDeadlineBinding::DefineDOMInterface, IdleDeadlineBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3912, 11, ImageBitmapBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3924, 27, ImageBitmapRenderingContextBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3952, 12, ImageCaptureBinding::DefineDOMInterface, ImageCaptureBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3965, 22, ImageCaptureErrorEventBinding::DefineDOMInterface, ImageCaptureErrorEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(3988, 9, ImageDataBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(3998, 13, ImageDocumentBinding::DefineDOMInterface, ImageDocumentBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4012, 10, InputEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4023, 18, InstallTriggerImplBinding::DefineDOMInterface, InstallTriggerImplBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4042, 20, IntersectionObserverBinding::DefineDOMInterface, IntersectionObserverBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4063, 25, IntersectionObserverEntryBinding::DefineDOMInterface, IntersectionObserverEntryBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4089, 8, KeyEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4098, 13, KeyboardEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4112, 14, KeyframeEffectBinding::DefineDOMInterface, KeyframeEffectBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4127, 22, KeyframeEffectReadOnlyBinding::DefineDOMInterface, KeyframeEffectReadOnlyBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4150, 16, LocalMediaStreamBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4167, 8, LocationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4176, 15, MediaDeviceInfoBinding::DefineDOMInterface, MediaDeviceInfoBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4192, 12, MediaDevicesBinding::DefineDOMInterface, MediaDevicesBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4205, 27, MediaElementAudioSourceNodeBinding::DefineDOMInterface, MediaElementAudioSourceNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4233, 10, MediaErrorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4244, 9, MediaListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4254, 14, MediaQueryListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4269, 19, MediaQueryListEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4289, 13, MediaRecorderBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4303, 11, MediaSourceBinding::DefineDOMInterface, MediaSourceBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4315, 11, MediaStreamBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4327, 31, MediaStreamAudioDestinationNodeBinding::DefineDOMInterface, MediaStreamAudioDestinationNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4359, 26, MediaStreamAudioSourceNodeBinding::DefineDOMInterface, MediaStreamAudioSourceNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4386, 16, MediaStreamEventBinding::DefineDOMInterface, MediaStreamEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4403, 15, MediaStreamListBinding::DefineDOMInterface, MediaStreamListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4419, 16, MediaStreamTrackBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4436, 21, MediaStreamTrackEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4458, 13, MenuBoxObjectBinding::DefineDOMInterface, MenuBoxObjectBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4472, 14, MessageChannelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4487, 12, MessageEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4500, 11, MessagePortBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4512, 8, MimeTypeBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4521, 13, MimeTypeArrayBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4535, 10, MouseEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4546, 16, MouseScrollEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4563, 19, MozCanvasPrintStateBinding::DefineDOMInterface, MozCanvasPrintStateBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4583, 16, MozHardwareInputBinding::DefineDOMInterface, MozHardwareInputBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4600, 15, MozInputContextBinding::DefineDOMInterface, MozInputContextBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4616, 31, MozInputContextFocusEventDetailBinding::DefineDOMInterface, MozInputContextFocusEventDetailBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4648, 41, MozInputContextSelectionChangeEventDetailBinding::DefineDOMInterface, MozInputContextSelectionChangeEventDetailBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4690, 47, MozInputContextSurroundingTextChangeEventDetailBinding::DefineDOMInterface, MozInputContextSurroundingTextChangeEventDetailBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4738, 14, MozInputMethodBinding::DefineDOMInterface, MozInputMethodBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4753, 21, MozInputMethodManagerBinding::DefineDOMInterface, MozInputMethodManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4775, 27, MozInputRegistryEventDetailBinding::DefineDOMInterface, MozInputRegistryEventDetailBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4803, 15, MozPowerManagerBinding::DefineDOMInterface, MozPowerManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4819, 14, MozSelfSupportBinding::DefineDOMInterface, MozSelfSupportBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4834, 16, MozSettingsEventBinding::DefineDOMInterface, MozSettingsEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4851, 27, MozSettingsTransactionEventBinding::DefineDOMInterface, MozSettingsTransactionEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4879, 19, MozTetheringManagerBinding::DefineDOMInterface, MozTetheringManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4899, 14, MozTimeManagerBinding::DefineDOMInterface, MozTimeManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4914, 11, MozWakeLockBinding::DefineDOMInterface, MozWakeLockBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(4926, 13, MutationEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4940, 16, MutationObserverBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4957, 14, MutationRecordBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4972, 12, NamedNodeMapBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4985, 9, NavigatorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(4995, 18, NetworkInformationBinding::DefineDOMInterface, NetworkInformationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5014, 4, NodeBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5019, 10, NodeFilterBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5030, 12, NodeIteratorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5043, 8, NodeListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5052, 12, NotificationBinding::DefineDOMInterface, NotificationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5065, 16, NotifyPaintEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5082, 27, OfflineAudioCompletionEventBinding::DefineDOMInterface, OfflineAudioCompletionEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5110, 19, OfflineAudioContextBinding::DefineDOMInterface, OfflineAudioContextBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5130, 19, OfflineResourceListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5150, 15, OffscreenCanvasBinding::DefineDOMInterface, OffscreenCanvasBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5166, 14, OscillatorNodeBinding::DefineDOMInterface, OscillatorNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5181, 19, PageTransitionEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5201, 12, PaintRequestBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5214, 16, PaintRequestListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5231, 10, PannerNodeBinding::DefineDOMInterface, PannerNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5242, 6, Path2DBinding::DefineDOMInterface, Path2DBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5249, 18, PeerConnectionImplBinding::DefineDOMInterface, PeerConnectionImplBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5268, 22, PeerConnectionObserverBinding::DefineDOMInterface, PeerConnectionObserverBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5291, 11, PerformanceBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5303, 16, PerformanceEntryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5320, 21, PerformanceEntryEventBinding::DefineDOMInterface, PerformanceEntryEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5342, 15, PerformanceMarkBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5358, 18, PerformanceMeasureBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5377, 21, PerformanceNavigationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5399, 27, PerformanceNavigationTimingBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5427, 19, PerformanceObserverBinding::DefineDOMInterface, PerformanceObserverBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5447, 28, PerformanceObserverEntryListBinding::DefineDOMInterface, PerformanceObserverEntryListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5476, 25, PerformanceResourceTimingBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5502, 17, PerformanceTimingBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5520, 12, PeriodicWaveBinding::DefineDOMInterface, PeriodicWaveBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5533, 18, PermissionSettingsBinding::DefineDOMInterface, PermissionSettingsBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5552, 16, PermissionStatusBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5569, 11, PermissionsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5581, 6, PluginBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5588, 11, PluginArrayBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5600, 18, PluginCrashedEventBinding::DefineDOMInterface, PluginCrashedEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5619, 12, PointerEventBinding::DefineDOMInterface, PointerEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5632, 13, PopStateEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5646, 17, PopupBlockedEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5664, 14, PopupBoxObjectBinding::DefineDOMInterface, PopupBoxObjectBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5679, 21, ProcessingInstructionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5701, 13, ProgressEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5715, 16, PromiseDebuggingBinding::DefineDOMInterface, PromiseDebuggingBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5732, 11, PushManagerBinding::DefineDOMInterface, PushManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5744, 15, PushManagerImplBinding::DefineDOMInterface, PushManagerImplBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5760, 16, PushSubscriptionBinding::DefineDOMInterface, PushSubscriptionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5777, 23, PushSubscriptionOptionsBinding::DefineDOMInterface, PushSubscriptionOptionsBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5801, 8, RGBColorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5810, 14, RTCCertificateBinding::DefineDOMInterface, RTCCertificateBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5825, 13, RTCDTMFSenderBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5839, 22, RTCDTMFToneChangeEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(5862, 19, RTCDataChannelEventBinding::DefineDOMInterface, RTCDataChannelEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5882, 15, RTCIceCandidateBinding::DefineDOMInterface, RTCIceCandidateBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5898, 17, RTCPeerConnectionBinding::DefineDOMInterface, RTCPeerConnectionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5916, 25, RTCPeerConnectionIceEventBinding::DefineDOMInterface, RTCPeerConnectionIceEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5942, 23, RTCPeerConnectionStaticBinding::DefineDOMInterface, RTCPeerConnectionStaticBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5966, 14, RTCRtpReceiverBinding::DefineDOMInterface, RTCRtpReceiverBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5981, 12, RTCRtpSenderBinding::DefineDOMInterface, RTCRtpSenderBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(5994, 21, RTCSessionDescriptionBinding::DefineDOMInterface, RTCSessionDescriptionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6016, 14, RTCStatsReportBinding::DefineDOMInterface, RTCStatsReportBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6031, 13, RTCTrackEventBinding::DefineDOMInterface, RTCTrackEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6045, 13, RadioNodeListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6059, 5, RangeBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6065, 16, RecordErrorEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6082, 4, RectBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6087, 7, RequestBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6095, 17, ResizeObservationBinding::DefineDOMInterface, ResizeObservationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6113, 14, ResizeObserverBinding::DefineDOMInterface, ResizeObserverBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6128, 19, ResizeObserverEntryBinding::DefineDOMInterface, ResizeObserverEntryBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6148, 18, ResizeObserverSizeBinding::DefineDOMInterface, ResizeObserverSizeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6167, 8, ResponseBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6176, 9, SEChannelBinding::DefineDOMInterface, SEChannelBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6186, 8, SEReaderBinding::DefineDOMInterface, SEReaderBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6195, 10, SEResponseBinding::DefineDOMInterface, SEResponseBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6206, 9, SESessionBinding::DefineDOMInterface, SESessionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(6216, 11, SVGAElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6228, 8, SVGAngleBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6237, 17, SVGAnimateElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6255, 23, SVGAnimateMotionElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6279, 26, SVGAnimateTransformElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6306, 16, SVGAnimatedAngleBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6323, 18, SVGAnimatedBooleanBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6342, 22, SVGAnimatedEnumerationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6365, 18, SVGAnimatedIntegerBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6384, 17, SVGAnimatedLengthBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6402, 21, SVGAnimatedLengthListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6424, 17, SVGAnimatedNumberBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6442, 21, SVGAnimatedNumberListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6464, 30, SVGAnimatedPreserveAspectRatioBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6495, 15, SVGAnimatedRectBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6511, 17, SVGAnimatedStringBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6529, 24, SVGAnimatedTransformListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6554, 19, SVGAnimationElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6574, 16, SVGCircleElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6591, 18, SVGClipPathElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6610, 35, SVGComponentTransferFunctionElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6646, 14, SVGDefsElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6661, 14, SVGDescElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6676, 10, SVGElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6687, 17, SVGEllipseElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6705, 17, SVGFEBlendElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6723, 23, SVGFEColorMatrixElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6747, 29, SVGFEComponentTransferElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6777, 21, SVGFECompositeElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6799, 26, SVGFEConvolveMatrixElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6826, 27, SVGFEDiffuseLightingElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6854, 27, SVGFEDisplacementMapElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6882, 24, SVGFEDistantLightElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6907, 22, SVGFEDropShadowElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6930, 17, SVGFEFloodElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6948, 17, SVGFEFuncAElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6966, 17, SVGFEFuncBElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(6984, 17, SVGFEFuncGElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7002, 17, SVGFEFuncRElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7020, 24, SVGFEGaussianBlurElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7045, 17, SVGFEImageElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7063, 17, SVGFEMergeElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7081, 21, SVGFEMergeNodeElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7103, 22, SVGFEMorphologyElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7126, 18, SVGFEOffsetElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7145, 22, SVGFEPointLightElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7168, 28, SVGFESpecularLightingElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7197, 21, SVGFESpotLightElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7219, 16, SVGFETileElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7236, 22, SVGFETurbulenceElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7259, 16, SVGFilterElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7276, 23, SVGForeignObjectElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7300, 11, SVGGElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7312, 18, SVGGradientElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7331, 18, SVGGraphicsElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7350, 15, SVGImageElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7366, 9, SVGLengthBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7376, 13, SVGLengthListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7390, 14, SVGLineElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7405, 24, SVGLinearGradientElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7430, 15, SVGMPathElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7446, 16, SVGMarkerElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7463, 14, SVGMaskElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7478, 9, SVGMatrixBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7488, 18, SVGMetadataElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7507, 9, SVGNumberBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7517, 13, SVGNumberListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7531, 14, SVGPathElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7546, 10, SVGPathSegBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7557, 16, SVGPathSegArcAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7574, 16, SVGPathSegArcRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7591, 19, SVGPathSegClosePathBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7611, 25, SVGPathSegCurvetoCubicAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7637, 25, SVGPathSegCurvetoCubicRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7663, 31, SVGPathSegCurvetoCubicSmoothAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7695, 31, SVGPathSegCurvetoCubicSmoothRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7727, 29, SVGPathSegCurvetoQuadraticAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7757, 29, SVGPathSegCurvetoQuadraticRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7787, 35, SVGPathSegCurvetoQuadraticSmoothAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7823, 35, SVGPathSegCurvetoQuadraticSmoothRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7859, 19, SVGPathSegLinetoAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7879, 29, SVGPathSegLinetoHorizontalAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7909, 29, SVGPathSegLinetoHorizontalRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7939, 19, SVGPathSegLinetoRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7959, 27, SVGPathSegLinetoVerticalAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(7987, 27, SVGPathSegLinetoVerticalRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8015, 14, SVGPathSegListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8030, 19, SVGPathSegMovetoAbsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8050, 19, SVGPathSegMovetoRelBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8070, 17, SVGPatternElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8088, 8, SVGPointBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8097, 12, SVGPointListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8110, 17, SVGPolygonElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8128, 18, SVGPolylineElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8147, 22, SVGPreserveAspectRatioBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8170, 24, SVGRadialGradientElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8195, 7, SVGRectBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8203, 14, SVGRectElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8218, 13, SVGSVGElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8232, 16, SVGScriptElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8249, 13, SVGSetElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8263, 14, SVGStopElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8278, 13, SVGStringListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8292, 15, SVGStyleElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8308, 16, SVGSwitchElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8325, 16, SVGSymbolElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8342, 15, SVGTSpanElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8358, 21, SVGTextContentElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8380, 14, SVGTextElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8395, 18, SVGTextPathElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8414, 25, SVGTextPositioningElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8440, 15, SVGTitleElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8456, 12, SVGTransformBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8469, 16, SVGTransformListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8486, 12, SVGUnitTypesBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8499, 13, SVGUseElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8513, 14, SVGViewElementBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8528, 13, SVGZoomAndPanBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8542, 12, SVGZoomEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8555, 6, ScreenBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8562, 17, ScreenOrientationBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8580, 19, ScriptProcessorNodeBinding::DefineDOMInterface, ScriptProcessorNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8600, 15, ScrollAreaEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8616, 21, ScrollViewChangeEventBinding::DefineDOMInterface, ScrollViewChangeEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8638, 9, SelectionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8648, 13, ServiceWorkerBinding::DefineDOMInterface, ServiceWorkerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8662, 22, ServiceWorkerContainerBinding::DefineDOMInterface, ServiceWorkerContainerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8685, 25, ServiceWorkerMessageEventBinding::DefineDOMInterface, ServiceWorkerMessageEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8711, 25, ServiceWorkerRegistrationBinding::DefineDOMInterface, ServiceWorkerRegistrationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8737, 12, SettingsLockBinding::DefineDOMInterface, SettingsLockBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8750, 15, SettingsManagerBinding::DefineDOMInterface, SettingsManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8766, 10, ShadowRootBinding::DefineDOMInterface, ShadowRootBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8777, 12, SharedWorkerBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8790, 18, SimpleGestureEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8809, 12, SourceBufferBinding::DefineDOMInterface, SourceBufferBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8822, 16, SourceBufferListBinding::DefineDOMInterface, SourceBufferListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8839, 15, SpeechSynthesisBinding::DefineDOMInterface, SpeechSynthesisBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8855, 25, SpeechSynthesisErrorEventBinding::DefineDOMInterface, SpeechSynthesisErrorEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8881, 20, SpeechSynthesisEventBinding::DefineDOMInterface, SpeechSynthesisEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8902, 24, SpeechSynthesisUtteranceBinding::DefineDOMInterface, SpeechSynthesisUtteranceBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8927, 20, SpeechSynthesisVoiceBinding::DefineDOMInterface, SpeechSynthesisVoiceBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8948, 16, StereoPannerNodeBinding::DefineDOMInterface, StereoPannerNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(8965, 7, StorageBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8973, 12, StorageEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(8986, 14, StorageManagerBinding::DefineDOMInterface, StorageManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9001, 20, StyleRuleChangeEventBinding::DefineDOMInterface, StyleRuleChangeEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9022, 10, StyleSheetBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9033, 36, StyleSheetApplicableStateChangeEventBinding::DefineDOMInterface, StyleSheetApplicableStateChangeEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9070, 21, StyleSheetChangeEventBinding::DefineDOMInterface, StyleSheetChangeEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9092, 14, StyleSheetListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9107, 12, SubtleCryptoBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9120, 19, SystemUpdateManagerBinding::DefineDOMInterface, SystemUpdateManagerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9140, 20, SystemUpdateProviderBinding::DefineDOMInterface, SystemUpdateProviderBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9161, 15, TCPServerSocketBinding::DefineDOMInterface, TCPServerSocketBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9177, 20, TCPServerSocketEventBinding::DefineDOMInterface, TCPServerSocketEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9198, 9, TCPSocketBinding::DefineDOMInterface, TCPSocketBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9208, 19, TCPSocketErrorEventBinding::DefineDOMInterface, TCPSocketErrorEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9228, 14, TCPSocketEventBinding::DefineDOMInterface, TCPSocketEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9243, 4, TextBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9248, 10, TextClauseBinding::DefineDOMInterface, TextClauseBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9259, 11, TextDecoderBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9271, 11, TextEncoderBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9283, 11, TextMetricsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9295, 9, TextTrackBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9305, 12, TextTrackCueBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9318, 16, TextTrackCueListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9335, 13, TextTrackListBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9349, 21, ThreadSafeChromeUtilsBinding::DefineDOMInterface, ThreadSafeChromeUtilsBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9371, 9, TimeEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9381, 10, TimeRangesBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9392, 5, TouchBinding::DefineDOMInterface, TouchBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9398, 10, TouchEventBinding::DefineDOMInterface, TouchEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9409, 9, TouchListBinding::DefineDOMInterface, TouchListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9419, 10, TrackEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9430, 15, TransitionEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9446, 10, TreeColumnBinding::DefineDOMInterface, TreeColumnBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9457, 11, TreeColumnsBinding::DefineDOMInterface, TreeColumnsBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9469, 10, TreeWalkerBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9480, 3, U2FBinding::DefineDOMInterface, U2FBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9484, 15, UDPMessageEventBinding::DefineDOMInterface, UDPMessageEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9500, 9, UDPSocketBinding::DefineDOMInterface, UDPSocketBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9510, 7, UIEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9518, 3, URLBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9522, 15, URLSearchParamsBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9538, 18, UserProximityEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9557, 6, VTTCueBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9564, 9, VTTRegionBinding::DefineDOMInterface, VTTRegionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9574, 13, ValidityStateBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9588, 20, VideoPlaybackQualityBinding::DefineDOMInterface, VideoPlaybackQualityBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9609, 16, VideoStreamTrackBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9626, 10, VideoTrackBinding::DefineDOMInterface, VideoTrackBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9637, 14, VideoTrackListBinding::DefineDOMInterface, VideoTrackListBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9652, 14, WaveShaperNodeBinding::DefineDOMInterface, WaveShaperNodeBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9667, 22, WebGL2RenderingContextBinding::DefineDOMInterface, WebGL2RenderingContextBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9690, 15, WebGLActiveInfoBinding::DefineDOMInterface, WebGLActiveInfoBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9706, 11, WebGLBufferBinding::DefineDOMInterface, WebGLBufferBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9718, 17, WebGLContextEventBinding::DefineDOMInterface, WebGLContextEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9736, 16, WebGLFramebufferBinding::DefineDOMInterface, WebGLFramebufferBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9753, 12, WebGLProgramBinding::DefineDOMInterface, WebGLProgramBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9766, 10, WebGLQueryBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9777, 17, WebGLRenderbufferBinding::DefineDOMInterface, WebGLRenderbufferBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9795, 21, WebGLRenderingContextBinding::DefineDOMInterface, WebGLRenderingContextBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9817, 12, WebGLSamplerBinding::DefineDOMInterface, WebGLSamplerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9830, 11, WebGLShaderBinding::DefineDOMInterface, WebGLShaderBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9842, 26, WebGLShaderPrecisionFormatBinding::DefineDOMInterface, WebGLShaderPrecisionFormatBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9869, 9, WebGLSyncBinding::DefineDOMInterface, WebGLSyncBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9879, 12, WebGLTextureBinding::DefineDOMInterface, WebGLTextureBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9892, 22, WebGLTransformFeedbackBinding::DefineDOMInterface, WebGLTransformFeedbackBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9915, 20, WebGLUniformLocationBinding::DefineDOMInterface, WebGLUniformLocationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9936, 22, WebGLVertexArrayObjectBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9959, 15, WebKitCSSMatrixBinding::DefineDOMInterface, WebKitCSSMatrixBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(9975, 9, WebSocketBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(9985, 23, WebrtcGlobalInformationBinding::DefineDOMInterface, WebrtcGlobalInformationBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10009, 10, WheelEventBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10020, 6, WindowBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10027, 10, WindowRootBinding::DefineDOMInterface, WindowRootBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10038, 6, WorkerBinding::DefineDOMInterface, WorkerBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10045, 7, WorkletBinding::DefineDOMInterface, WorkletBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10053, 11, XMLDocumentBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10065, 14, XMLHttpRequestBinding::DefineDOMInterface, XMLHttpRequestBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10080, 25, XMLHttpRequestEventTargetBinding::DefineDOMInterface, XMLHttpRequestEventTargetBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10106, 20, XMLHttpRequestUploadBinding::DefineDOMInterface, XMLHttpRequestUploadBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10127, 13, XMLSerializerBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10141, 34, XMLStylesheetProcessingInstructionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10176, 14, XPathEvaluatorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10191, 15, XPathExpressionBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10207, 11, XPathResultBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10219, 13, XSLTProcessorBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10233, 15, XULCommandEventBinding::DefineDOMInterface, XULCommandEventBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10249, 11, XULDocumentBinding::DefineDOMInterface, XULDocumentBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10261, 10, XULElementBinding::DefineDOMInterface, XULElementBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10272, 7, consoleBinding::DefineDOMInterface, nullptr);
  WebIDLGlobalNameHash::Register(10280, 18, mozRTCIceCandidateBinding::DefineDOMInterface, mozRTCIceCandidateBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10299, 20, mozRTCPeerConnectionBinding::DefineDOMInterface, mozRTCPeerConnectionBinding::ConstructorEnabled);
  WebIDLGlobalNameHash::Register(10320, 24, mozRTCSessionDescriptionBinding::DefineDOMInterface, mozRTCSessionDescriptionBinding::ConstructorEnabled);
}

} // namespace dom
} // namespace mozilla

