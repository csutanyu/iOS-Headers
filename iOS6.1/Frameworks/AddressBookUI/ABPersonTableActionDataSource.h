/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface ABPersonTableActionDataSource : NSObject
{
    NSMutableArray *_topActions;
    NSMutableArray *_bottomActions;
    struct __CFDictionary *_actionsByProperty;
    struct __CFDictionary *_actionGroupingsByProperty;
    struct __CFDictionary *_inlineActionsByProperty;
    struct __CFSet *_hiddenActions;
}

- (id)actionWithActionGrouping:(int)arg1 atIndex:(int)arg2;
- (struct __CFArray *)indexesOfActionsForProperty:(int)arg1 withActionGrouping:(int)arg2;
- (int)actionCountForActionGrouping:(int)arg1;
- (id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(int)arg2;
- (id)actionForProperty:(int)arg1 withActionGrouping:(int)arg2 atIndex:(int)arg3;
- (int)actionCountForProperty:(int)arg1 withActionGrouping:(int)arg2;
- (int)groupingCountForProperty:(int)arg1;
- (struct __CFArray *)groupingsForProperty:(int)arg1;
- (id)newActionsForProperty:(int)arg1;
- (id)actionsForProperty:(int)arg1 withActionGrouping:(int)arg2;
- (void)removeAction:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(int)arg4 ordering:(int)arg5 outActions:(id *)arg6 outIndex:(int *)arg7;
- (BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 matchProperty:(BOOL)arg3 property:(int)arg4 inArray:(id)arg5 outActions:(id *)arg6 outIndex:(int *)arg7;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(int)arg8 ordering:(int)arg9;
- (id)bottomActions;
- (id)topActions;
- (struct __CFDictionary *)actionGroupingsByProperty;
- (struct __CFDictionary *)inlineActionsByProperty;
- (struct __CFDictionary *)actionsByProperty;
- (void)dealloc;
- (void)setAction:(id)arg1 hidden:(BOOL)arg2;
- (BOOL)isActionHidden:(id)arg1;

@end

