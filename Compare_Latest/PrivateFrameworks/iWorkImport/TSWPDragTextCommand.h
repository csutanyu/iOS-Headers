/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextCommand.h>

// Not exported
@interface TSWPDragTextCommand : TSWPTextCommand
{
    unsigned long long _dropCharIndex;
    struct _NSRange _dragRange;
    _Bool _coalescing;
}

@property(nonatomic) _Bool coalescing; // @synthesize coalescing=_coalescing;
- (id).cxx_construct;
- (int)persistenceKind;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)setSelection:(id)arg1 onStorage:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 srcSelection:(id)arg2 dropLocation:(unsigned long long)arg3;

@end
