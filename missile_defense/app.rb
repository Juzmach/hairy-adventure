# encoding: utf-8
require 'sinatra'
require 'sinatra/json'

set :bind, '0.0.0.0'

get '/' do
  json { message: "M.O.O.N.A. - Man Operated Oppression Neutralization Assembly"}
end
