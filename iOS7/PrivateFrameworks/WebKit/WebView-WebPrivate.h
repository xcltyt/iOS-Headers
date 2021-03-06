/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebView.h>

@class NSData;

@interface WebView (WebPrivate)
+ (void)_setTileCacheLayerPoolCapacity:(unsigned int)arg1;
+ (void)_setHTTPPipeliningEnabled:(_Bool)arg1;
+ (_Bool)_HTTPPipeliningEnabled;
+ (void)_setLoadResourcesSerially:(_Bool)arg1;
+ (void)_registerURLSchemeAsAllowingDatabaseAccessInPrivateBrowsing:(id)arg1;
+ (void)_registerURLSchemeAsAllowingLocalStorageAccessInPrivateBrowsing:(id)arg1;
+ (void)_registerURLSchemeAsSecure:(id)arg1;
+ (void)_setDomainRelaxationForbidden:(_Bool)arg1 forURLScheme:(id)arg2;
+ (void)_removeAllUserContentFromGroup:(id)arg1;
+ (void)_removeUserStyleSheetsFromGroup:(id)arg1 world:(id)arg2;
+ (void)_removeUserScriptsFromGroup:(id)arg1 world:(id)arg2;
+ (void)_removeUserStyleSheetFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3;
+ (void)_removeUserScriptFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3;
+ (void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectedFrames:(int)arg7;
+ (void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6;
+ (void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 injectedFrames:(int)arg8;
+ (void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7;
+ (void)_resetOriginAccessWhitelists;
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(_Bool)arg4;
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(_Bool)arg4;
+ (unsigned long long)_maximumImageSizeBeforeSubsampling;
+ (void)_setMaximumImageSizeBeforeSubsampling:(unsigned long long)arg1;
+ (id)_productivityDocumentMIMETypes;
+ (_Bool)_shouldUseFontSmoothing;
+ (void)_setShouldUseFontSmoothing:(_Bool)arg1;
+ (id)_decodeData:(id)arg1;
+ (_Bool)_canHandleRequest:(id)arg1;
+ (_Bool)_canHandleRequest:(id)arg1 forMainFrame:(_Bool)arg2;
+ (_Bool)_representationExistsForURLScheme:(id)arg1;
+ (id)_generatedMIMETypeForURLScheme:(id)arg1;
+ (void)_registerViewClass:(Class)arg1 representationClass:(Class)arg2 forURLScheme:(id)arg3;
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)arg1;
+ (_Bool)_hasRemoteInspectorSession;
+ (_Bool)_isRemoteInspectorEnabled;
+ (void)_disableAutoStartRemoteInspector;
+ (void)_disableRemoteInspector;
+ (void)_enableRemoteInspector;
+ (id)sharedWebInspectorServer;
+ (id)_MIMETypeForFile:(id)arg1;
+ (_Bool)_shouldWaitForMemoryClearMessage;
+ (void)_clearMemoryPressure;
+ (_Bool)_isUnderMemoryPressure;
+ (_Bool)_allowCookies;
+ (void)_setAllowCookies:(_Bool)arg1;
+ (_Bool)_acceleratedImageDecoding;
+ (void)_setAcceleratedImageDecoding:(_Bool)arg1;
+ (_Bool)canShowFile:(id)arg1;
+ (void)closeAllWebViews;
+ (_Bool)canCloseAllWebViews;
+ (_Bool)_allowsRoundingHacks;
+ (void)_setAllowsRoundingHacks:(_Bool)arg1;
+ (void)_setAlwaysUsesComplexTextCodePath:(_Bool)arg1;
+ (_Bool)_viewClass:(Class *)arg1 andRepresentationClass:(Class *)arg2 forMIMEType:(id)arg3 allowingPlugins:(_Bool)arg4;
+ (void)_unregisterPluginMIMEType:(id)arg1;
+ (void)_registerPluginMIMEType:(id)arg1;
+ (_Bool)isCharacterSmartReplaceExempt:(unsigned short)arg1 isPreviousCharacter:(_Bool)arg2;
+ (void)discardAllCompiledCode;
+ (void)drainLayerPool;
+ (void)purgeInactiveFontData;
+ (void)garbageCollectNow;
+ (void)releaseFastMallocMemory;
+ (void)willEnterBackgroundWithCompletionHandler:(id)arg1;
+ (void)_clearPrivateBrowsingSessionCookieStorage;
+ (void)_releaseMemoryNow;
+ (void)registerForMemoryNotifications;
+ (void)_handleMemoryWarning;
+ (void)enableWebThread;
+ (id)_supportedMIMETypes;
+ (void)_reportException:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
+ (id)_standardUserAgentWithApplicationName:(id)arg1;
+ (id)_standardUserAgentWithApplicationName:(id)arg1 osMarketingVersion:(id)arg2;
@property(copy, nonatomic, getter=_sourceApplicationAuditData, setter=_setSourceApplicationAuditData:) NSData *sourceApplicationAuditData;
- (void)_setWebGLEnabled:(_Bool)arg1;
- (_Bool)_webGLEnabled;
- (void)_setWantsTelephoneNumberParsing:(_Bool)arg1;
- (_Bool)_wantsTelephoneNumberParsing;
- (void)_documentScaleChanged;
- (id)_fixedPositionContent;
- (_Bool)searchFor:(id)arg1 direction:(_Bool)arg2 caseSensitive:(_Bool)arg3 wrap:(_Bool)arg4 startInSelection:(_Bool)arg5;
- (unsigned long long)countMatchesForText:(id)arg1 caseSensitive:(_Bool)arg2 highlight:(_Bool)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (unsigned long long)markAllMatchesForText:(id)arg1 caseSensitive:(_Bool)arg2 highlight:(_Bool)arg3 limit:(unsigned long long)arg4;
- (unsigned long long)_pageCount;
- (double)_gapBetweenPages;
- (void)_setGapBetweenPages:(double)arg1;
- (double)_pageLength;
- (void)_setPageLength:(double)arg1;
- (_Bool)_paginationBehavesLikeColumns;
- (void)_setPaginationBehavesLikeColumns:(_Bool)arg1;
- (void)_setVisibilityState:(int)arg1 isInitialState:(_Bool)arg2;
- (int)_visibilityState;
- (unsigned long long)_layoutMilestones;
- (void)_listenForLayoutMilestones:(unsigned long long)arg1;
- (int)_paginationMode;
- (void)_setPaginationMode:(int)arg1;
- (_Bool)_useFixedLayout;
- (void)_setUseFixedLayout:(_Bool)arg1;
- (float)_viewScaleFactor;
- (void)_scaleWebView:(float)arg1 atOrigin:(struct CGPoint)arg2;
- (void)setCSSAnimationsSuspended:(_Bool)arg1;
- (_Bool)cssAnimationsSuspended;
- (void)setAllowsNewCSSAnimationsWhileSuspended:(_Bool)arg1;
- (_Bool)allowsNewCSSAnimationsWhileSuspended;
- (void)_updateActiveState;
- (void)_updateVisibilityState;
- (_Bool)_isViewVisible;
- (id)trackedRepaintRects;
- (void)resetTrackedRepaints;
- (_Bool)isTrackingRepaints;
- (void)setTracksRepaints:(_Bool)arg1;
- (_Bool)_includesFlattenedCompositingLayersWhenDrawingToBitmap;
- (void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(_Bool)arg1;
- (_Bool)_isSoftwareRenderable;
- (void)setValidationMessageTimerMagnification:(int)arg1;
- (int)validationMessageTimerMagnification;
- (void)setInteractiveFormValidationEnabled:(_Bool)arg1;
- (_Bool)interactiveFormValidationEnabled;
- (void)_setBaseCTM:(struct CGAffineTransform)arg1 forContext:(struct CGContext *)arg2;
- (_Bool)_isUsingAcceleratedCompositing;
- (void)_setPostsAcceleratedCompositingNotifications:(_Bool)arg1;
- (_Bool)_postsAcceleratedCompositingNotifications;
- (_Bool)areMemoryCacheDelegateCallsEnabled;
- (void)setMemoryCacheDelegateCallsEnabled:(_Bool)arg1;
- (_Bool)isSelectTrailingWhitespaceEnabled;
- (void)setSelectTrailingWhitespaceEnabled:(_Bool)arg1;
- (void)_clearMainFrameName;
- (void)_setCustomHTMLTokenizerChunkSize:(int)arg1;
- (void)_setCustomHTMLTokenizerTimeDelay:(double)arg1;
- (void)_executeCoreCommandByName:(id)arg1 value:(id)arg2;
- (id)textIteratorForRect:(struct CGRect)arg1;
- (void)_setGlobalHistoryItem:(struct HistoryItem *)arg1;
- (id)_globalHistoryItem;
- (void)setUsesPageCache:(_Bool)arg1;
- (_Bool)usesPageCache;
- (id)_touchEventRegions;
- (void)_overflowScrollPositionChangedTo:(struct CGPoint)arg1 forNode:(id)arg2 isUserScroll:(_Bool)arg3;
- (void)_viewGeometryDidChange;
- (_Bool)_fetchCustomFixedPositionLayoutRect:(struct CGRect *)arg1;
- (void)_setCustomFixedPositionLayoutRect:(struct CGRect)arg1;
- (void)_setCustomFixedPositionLayoutRectInWebThread:(struct CGRect)arg1 synchronize:(_Bool)arg2;
- (void)_synchronizeCustomFixedPositionLayoutRect;
- (struct CGSize)_fixedLayoutSize;
- (void)_setFixedLayoutSize:(struct CGSize)arg1;
- (void)_setNetworkStateIsOnline:(_Bool)arg1;
- (_Bool)_allowsMessaging;
- (void)_setAllowsMessaging:(_Bool)arg1;
- (_Bool)_isClosing;
- (_Bool)_isStopping;
- (id)quickLookContentForURL:(id)arg1;
- (void)setDefersCallbacks:(_Bool)arg1;
- (_Bool)defersCallbacks;
- (struct CGColor *)backgroundColor;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)_detachScriptDebuggerFromAllFrames;
- (void)_attachScriptDebuggerToAllFrames;
- (void)_setNeedsUnrestrictedGetMatchedCSSRules:(_Bool)arg1;
- (_Bool)_setMediaLayer:(id)arg1 forPluginView:(id)arg2;
- (void)_restorePlugInsFromCache;
- (void)_stopAllPlugInsForPageCache;
- (void)_stopAllPlugIns;
- (void)_startAllPlugIns;
- (void)_clearBackForwardCache;
- (void)_destroyAllPlugIns;
- (void)_locked_recursivelyPerformPlugInSelector:(SEL)arg1 inFrame:(id)arg2;
- (_Bool)_pluginsAreRunning;
- (_Bool)_locked_plugInsAreRunningInFrame:(id)arg1;
- (void)_setCookieEnabled:(_Bool)arg1;
- (_Bool)_cookieEnabled;
- (_Bool)_inFastImageScalingMode;
- (void)_setUseFastImageScalingMode:(_Bool)arg1;
- (_Bool)_inViewSourceMode;
- (void)_setInViewSourceMode:(_Bool)arg1;
- (void)_setFontFallbackPrefersPictographs:(_Bool)arg1;
- (id)_displayURL;
- (void)_clearDelegates;
- (void)caretChanged;
- (void)removeAllCaretChangeListeners;
- (void)removeCaretChangeListener:(id)arg1;
- (void)addCaretChangeListener:(id)arg1;
- (id)caretChangeListeners;
- (void)setCaretChangeListener:(id)arg1;
- (id)caretChangeListener;
- (id)_webMailDelegate;
- (void)setWebMailDelegate:(id)arg1;
- (id)_UIKitDelegate;
- (void)_setUIKitDelegate:(id)arg1;
- (void)_didCommitLoadForFrame:(id)arg1;
- (_Bool)_isPerformingProgrammaticFocus;
- (void)_popPerformingProgrammaticFocus;
- (void)_pushPerformingProgrammaticFocus;
- (void)_closeWindow;
- (id)_editingDelegateForwarder;
- (id)_UIDelegateForSelector:(SEL)arg1;
- (id)_UIDelegateForwarder;
- (id)_policyDelegateForwarder;
- (void)_cacheHistoryDelegateImplementations;
- (void)_cacheScriptDebugDelegateImplementations;
- (void)_cacheFrameLoadDelegateImplementations;
- (void)_cacheResourceLoadDelegateImplementations;
- (id)_UIKitDelegateForwarder;
- (void)_preferencesChanged:(id)arg1;
- (void)_preferencesChangedNotification:(id)arg1;
- (_Bool)_needsUnrestrictedGetMatchedCSSRules;
- (_Bool)_needsPreHTML5ParserQuirks;
- (id)_formDelegateForSelector:(SEL)arg1;
- (id)_formDelegateForwarder;
- (id)_formDelegate;
- (void)_setFormDelegate:(id)arg1;
- (void)_loadBackForwardListFromOtherView:(id)arg1;
- (void)_mouseDidMoveOverElement:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (struct Page *)page;
- (id)remoteInspectorUserInfo;
- (void)setRemoteInspectorUserInfo:(id)arg1;
- (id)hostApplicationName;
- (id)hostApplicationBundleId;
- (void)setHostApplicationBundleId:(id)arg1 name:(id)arg2;
- (void)setIndicatingForRemoteInspector:(_Bool)arg1;
- (void)setAllowsRemoteInspection:(_Bool)arg1;
- (_Bool)allowsRemoteInspection;
- (_Bool)canBeRemotelyInspected;
- (id)inspector;
- (id)_openNewWindowWithRequest:(id)arg1;
- (id)_downloadURL:(id)arg1;
- (_Bool)_isProcessingUserGesture;
- (void)_close;
- (void)_closeWithFastTeardown;
- (void)_closePluginDatabases;
- (void)_setResourceLoadSchedulerSuspended:(_Bool)arg1;
- (void)_didFinishScrollingOrZooming;
- (void)_willStartScrollingOrZooming;
- (void)_dispatchTileDidDraw:(id)arg1;
- (unsigned long long)_renderTreeSize;
- (id)styleAtSelectionStart;
- (void)_dispatchUnloadEvent;
- (_Bool)_isClosed;
- (_Bool)_viewClass:(Class *)arg1 andRepresentationClass:(Class *)arg2 forMIMEType:(id)arg3;
- (void)updateLayoutIgnorePendingStyleSheets;
- (void)_replaceCurrentHistoryItem:(id)arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;
- (void)_viewWillDrawInternal;
- (id)_initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3 usesDocumentViews:(_Bool)arg4;
- (void)_commonInitializationWithFrameName:(id)arg1 groupName:(id)arg2;
- (void)_dispatchPendingLoadRequests;
- (void)_setUIWebViewUserAgentWithBuildVersion:(id)arg1;
- (void)_setBrowserUserAgentProductVersion:(id)arg1 buildVersion:(id)arg2 bundleVersion:(id)arg3;
@end

