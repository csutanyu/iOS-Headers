/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSError, NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse;

@interface SUHttpOperation : NSOperation <NSURLConnectionDataDelegate>
{
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSMutableData *_data;
    NSURLResponse *_response;
    NSError *_error;
    int _statusCode;
    BOOL _allowRedirects;
    BOOL _done;
    BOOL _saveData;
}

@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) BOOL allowRedirects; // @synthesize allowRedirects=_allowRedirects;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_finished;
- (void)main;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end
