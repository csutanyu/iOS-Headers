/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSSPropertyMap, TSWPCharacterStyle, TSWPSelection, TSWPStorage;

// Not exported
@interface TSWPFormatTextCommand : TSWPTextBaseCommand
{
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    TSSPropertyMap *_overridePropertyMap;
    TSWPCharacterStyle *_overrideStyle;
    struct TSWPStorageTransaction *_undoRedoTransaction;
    _Bool _coalesceable;
    _Bool _disableCharacterStylePromotion;
}

+ (void)changeCharacterStylesInStorage:(id)arg1 range:(struct _NSRange)arg2 overrideStyle:(id)arg3 overridePropertyMap:(id)arg4 undoRedoTransaction:(struct TSWPStorageTransaction *)arg5;
+ (id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 overrideStyle:(id)arg3;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void)p_invalidateSelection:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)redo;
- (void)undo;
- (void)undoRedo;
- (void)p_commitWithRange:(struct _NSRange)arg1;
- (void)commit;
- (_Bool)p_propertyMap:(id)arg1 containsOnlyPropertiesOfStyleClass:(Class)arg2;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct FormatTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct FormatTextCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 style:(id)arg3 coalesceable:(_Bool)arg4 disableCharacterStylePromotion:(_Bool)arg5;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 overridePropertyMap:(id)arg3 coalesceable:(_Bool)arg4;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 propertyKey:(int)arg3 propertyValue:(id)arg4 coalesceable:(_Bool)arg5;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 propertyKey:(int)arg3 propertyValue:(id)arg4;

@end
