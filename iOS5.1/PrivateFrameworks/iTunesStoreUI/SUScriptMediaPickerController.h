/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController
{
}

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setMediaTypes:(id)arg1;
- (void)_setPrompt:(id)arg1;
- (void)_setAllowsPickingMultipleItems:(BOOL)arg1;
- (id)_copyPrompt;
- (id)_copyMediaTypes;
- (BOOL)_allowsPickingMultipleItems;
@property(retain) NSString *prompt;
- (void)setMediaTypes:(id)arg1;
@property BOOL allowsPickingMultipleItems;
@property(readonly) NSArray *mediaTypes;
- (id)_className;
- (void)setNativeViewController:(id)arg1;
- (id)newNativeViewController;
- (id)initWithMediaTypes:(id)arg1;

@end

