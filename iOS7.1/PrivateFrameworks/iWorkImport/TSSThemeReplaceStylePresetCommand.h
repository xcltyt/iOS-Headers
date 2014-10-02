//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

#import "TSDPropagatableCommand.h"

@class TSSStyle<TSSPreset>, TSSTheme;

__attribute__((visibility("hidden")))
@interface TSSThemeReplaceStylePresetCommand : TSKCommand <TSDPropagatableCommand>
{
    TSSTheme *mTheme;
    TSSStyle<TSSPreset> *mPreset;
    TSSStyle<TSSPreset> *mOldPreset;
    unsigned int mIndex;
}

@property(readonly) TSSStyle<TSSPreset> *oldPreset; // @synthesize oldPreset=mOldPreset;
@property(readonly) TSSStyle<TSSPreset> *preset; // @synthesize preset=mPreset;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 index:(unsigned int)arg3 context:(id)arg4;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;

@end
