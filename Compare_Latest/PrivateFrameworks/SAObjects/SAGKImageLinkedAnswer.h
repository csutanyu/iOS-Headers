/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSArray, NSNumber, SAUIImageResource;

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer
{
}

+ (id)imageLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)imageLinkedAnswer;
@property(copy, nonatomic) NSArray *thumbnails;
@property(retain, nonatomic) SAUIImageResource *imageResource;
@property(copy, nonatomic) NSNumber *fileSize;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
